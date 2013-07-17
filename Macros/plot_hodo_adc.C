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
void plot_hodo_adc(Int_t nrun) {
  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
 MyStyle->SetOptStat(10);
 MyStyle->SetTitleOffset(1.,"Y");
 MyStyle->SetTitleOffset(.7,"X");
 MyStyle->SetLabelSize(0.04,"XY");
 MyStyle->SetTitleSize(0.06,"XY");
 MyStyle->SetPadLeftMargin(0.12);
 MyStyle->SetStatFontSize(0.06);
 gROOT->SetStyle("MyStyle");
TCanvas *ch1adc = new TCanvas("ch1adc","Scint plane 1 Compare ADC hit spectra ",1200,1000);
TCanvas *ch2adc = new TCanvas("ch2adc","Scint plane 2 Compare ADC hit spectra ",1200,1000);
 TFile *fh1 =  new TFile(Form("paw/%05d.root",nrun));
  TFile *fh2 =  new TFile(Form("Rootfiles/compare_hodo_%05d.root",nrun));
  //
  TString hname1[8] = { "h243","h244","h245","h246","h247","h248","h249","h250"};
  TString hname2[8] = { "hposadc1","hnegadc1","hposadc2","hnegadc2","hposadc3","hnegadc3","hposadc4","hnegadc4"};
  TString dname[8] = { "Diff s1x+ ADC hits","Diff s1x- ADC hits","Diff hposadc2","Diff hnegadc2","Diff hposadc3","Diff hnegadc3","Diff hposadc4","Diff hnegadc4"};
  Int_t l=0;
  ch1adc->Divide(2,4);
  for ( int i=0 ; i < 4 ; i++) {
    l++;
    ch1adc->cd(l);
    ((TH1F*)fh1->Get(hname1[i]))->Draw();
    ((TH1F*)fh2->Get(hname2[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2[i]))->SetLineColor(2);
    l++;
    ch1adc->cd(l);
    TH1F* diff2=((TH1F*)fh2->Get(hname2[i]))->Clone() ;
    diff2->SetTitle(dname[i]);
    diff2->Add(((TH1F*)fh1->Get(hname1[i])),((TH1F*)fh2->Get(hname2[i])),1,-1);
    diff2->Draw();
  }
  l=0;
  ch2adc->Divide(2,4);
  for ( int i=4 ; i < 8 ; i++) {
    l++;
    ch2adc->cd(l);
    ((TH1F*)fh1->Get(hname1[i]))->Draw();
    ((TH1F*)fh2->Get(hname2[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2[i]))->SetLineColor(2);
    l++;
    ch2adc->cd(l);
    TH1F* diff=((TH1F*)fh2->Get(hname2[i]))->Clone() ;
    diff->SetTitle(dname[i]);
    diff->Add(((TH1F*)fh1->Get(hname1[i])),((TH1F*)fh2->Get(hname2[i])),1,-1);
    diff->Draw();
  }
  //
}
