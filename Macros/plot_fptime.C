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
void plot_fptime(Int_t nrun) {
  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
 MyStyle->SetOptStat(1000000);
 MyStyle->SetTitleOffset(1.,"Y");
 MyStyle->SetTitleOffset(.7,"X");
 MyStyle->SetLabelSize(0.04,"XY");
 MyStyle->SetTitleSize(0.06,"XY");
 MyStyle->SetPadLeftMargin(0.12);
 MyStyle->SetStatFontSize(0.06);
 gROOT->SetStyle("MyStyle");
TCanvas *cfptime = new TCanvas("cfptime","Focal plane times ",1200,1000);
 TFile *fh1 =  new TFile(Form("paw/%05d.root",nrun));
  TFile *fh2 =  new TFile(Form("Rootfiles/compare_hodo_%05d.root",nrun));
   TString hname1[5] = { "h269","h270","h271","h272","h267"};
   TString hname2[5] = { "hfptime1x","hfptime1y","hfptime2x","hfptime2y","hstart_time1"};
  TString dname[5] = { "diff hfptime1x","diff  hfptime1y","diff hfptime2x","diff hfptime2y","hstart_time1"};
  Int_t l=0;
  cfptime->Divide(2,5);
  for ( int i=0 ; i < 5 ; i++) {
    l++;
  cfptime->cd(l);
    ((TH1F*)fh1->Get(hname1[i]))->Draw();
    ((TH1F*)fh2->Get(hname2[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2[i]))->SetLineColor(2);
    l++;
  cfptime->cd(l);
    TH1F* diff2=((TH1F*)fh1->Get(hname1[i]))->Clone() ;
    diff2->SetTitle(dname[i]);
    diff2->Add(((TH1F*)fh1->Get(hname1[i])),((TH1F*)fh2->Get(hname2[i])),1,-1);
    diff2->Draw();
  }
}
