#include <TH1.h>
#include <TH2.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <TROOT.h>
#include <TStyle.h>
#include <TLegend.h>
#include <TMath.h>
#include <TBox.h>
#include <TPolyLine.h>
void plot_hodo_tdc(Int_t nrun) {
  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
 MyStyle->SetOptStat(10);
 MyStyle->SetTitleOffset(1.,"Y");
 MyStyle->SetTitleOffset(.7,"X");
 MyStyle->SetLabelSize(0.04,"XY");
 MyStyle->SetTitleSize(0.06,"XY");
 MyStyle->SetPadLeftMargin(0.12);
 MyStyle->SetStatFontSize(0.06);
 gROOT->SetStyle("MyStyle");
TCanvas *ch1tdc = new TCanvas("ch1tdc","Ch1 Compare TDC hit spectra ",1200,1000);
TCanvas *ch2tdc = new TCanvas("ch2tdc","Ch2 Compare TDC hit spectra ",1200,1000);
 TFile *fh1 =  new TFile(Form("paw/%05d.root",nrun));
  TFile *fh2 =  new TFile(Form("Rootfiles/replay_both_%05d.root",nrun));
  //
  TString hname1[8] = { "h227","h228","h229","h230","h231","h232","h233","h234"};
  TString hname2[8] = { "hpostdc1","hnegtdc1","hpostdc2","hnegtdc2","hpostdc3","hnegtdc3","hpostdc4","hnegtdc4"};
  TString dname[8] = { "Diff s1x+ TDC hits","Diff s1x- TDC hits","Diff hpostdc2","Diff hnegtdc2","Diff hpostdc3","Diff hnegtdc3","Diff hpostdc4","Diff hnegtdc4"};
  Int_t l=0;
  ch1tdc->Divide(2,4);
  for ( int i=0 ; i < 4 ; i++) {
    l++;
    ch1tdc->cd(l);
    ((TH1F*)fh1->Get(hname1[i]))->Draw();
    ((TH1F*)fh2->Get(hname2[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2[i]))->SetLineColor(2);
    l++;
    ch1tdc->cd(l);
    TH1F* diff2=((TH1F*)fh2->Get(hname2[i]))->Clone() ;
    diff2->SetTitle(dname[i]);
    diff2->Add(((TH1F*)fh1->Get(hname1[i])),((TH1F*)fh2->Get(hname2[i])),1,-1);
    diff2->Draw();
  }
  l=0;
  ch2tdc->Divide(2,4);
  for ( int i=4 ; i < 8 ; i++) {
    l++;
    ch2tdc->cd(l);
    ((TH1F*)fh1->Get(hname1[i]))->Draw();
    ((TH1F*)fh2->Get(hname2[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2[i]))->SetLineColor(2);
    l++;
    ch2tdc->cd(l);
    TH1F* diff=((TH1F*)fh1->Get(hname1[i]))->Clone() ;
    diff->SetTitle(dname[i]);
    diff->Add(((TH1F*)fh1->Get(hname1[i])),((TH1F*)fh2->Get(hname2[i])),1,-1);
    diff->Draw();
  }
  //
}
