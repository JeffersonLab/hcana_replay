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
void plot_shower_ind_adc(Int_t nrun) {
  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
 MyStyle->SetOptStat(10);
 MyStyle->SetTitleOffset(1.,"Y");
 MyStyle->SetTitleOffset(.7,"X");
 MyStyle->SetLabelSize(0.04,"XY");
 MyStyle->SetTitleSize(0.06,"XY");
 MyStyle->SetPadLeftMargin(0.12);
 MyStyle->SetStatFontSize(0.06);
 gROOT->SetStyle("MyStyle");
TCanvas *shadc_ap = new TCanvas("shadc_ap","Shower A+ Compare Raw ADC ",1200,1000);
TCanvas *shadc1_ap = new TCanvas("shadc1_ap","Shower A+ Compare Raw AD ",1200,1000);
TCanvas *shadc_an = new TCanvas("shadc_an","Shower A- Compare Raw ADC ",1200,1000);
TCanvas *shadc1_an = new TCanvas("shadc1_an","Shower A- Compare Raw ADC ",1200,1000);
TCanvas *shadc_bp = new TCanvas("shadc_bp","Shower B+ Compare Raw ADC ",1200,1000);
TCanvas *shadc1_bp = new TCanvas("shadc1_bp","Shower B+ Compare Raw AD ",1200,1000);
TCanvas *shadc_bn = new TCanvas("shadc_bn","Shower B- Compare Raw ADC ",1200,1000);
TCanvas *shadc1_bn = new TCanvas("shadc1_bn","Shower B- Compare Raw ADC ",1200,1000);
 TFile *fh1 =  new TFile(Form("paw/%05d.root",nrun));
  TFile *fh2 =  new TFile(Form("Rootfiles/compare_hodo_%05d.root",nrun));
  //
  TString hname1_ap[13],hname1_an[13] ;
  TString hname2_ap[13],hname2_an[13];
  TString dname_ap[13],dname_an[13];
  TString hname1_bp[13],hname1_bn[13] ;
  TString hname2_bp[13],hname2_bn[13];
  TString dname_bp[13],dname_bn[13];
  for ( int i=0 ; i<13 ; i++) {
	  hname1_ap[i] = Form("h%03d", i+548);
	  hname2_ap[i] = Form("hcaladc_A%02dp", i+1);
	  dname_ap[i] = Form("Diff hcaladc_A%02dp", i+1);
	  hname1_an[i] = Form("h%03d", i+600);
	  hname2_an[i] = Form("hcaladc_A%02dn", i+1);
	  dname_an[i] = Form("Diff hcaladc_A%02dn", i+1);
	}
  for ( int i=0 ; i<13 ; i++) {
	  hname1_bp[i] = Form("h%03d", i+548+13);
	  hname2_bp[i] = Form("hcaladc_B%02dp", i+1);
	  dname_bp[i] = Form("Diff hcaladc_B%02dp", i+1);
	  hname1_bn[i] = Form("h%03d", i+600+13);
	  hname2_bn[i] = Form("hcaladc_B%02dn", i+1);
	  dname_bn[i] = Form("Diff hcaladc_B%02dn", i+1);
	}
  Int_t l=0;
  shadc_ap->Divide(2,6);
  for ( int i=0 ; i < 6 ; i++) {
    l++;
    shadc_ap->cd(l);
    ((TH1F*)fh1->Get(hname1_ap[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_ap[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_ap[i]))->SetLineColor(2);
    l++;
    shadc_ap->cd(l);
    TH1F* diff2_ap=((TH1F*)fh2->Get(hname2_ap[i]))->Clone() ;
    diff2_ap->SetLineColor(2);
    diff2_ap->SetTitle(dname_ap[i]);
    diff2_ap->Add(((TH1F*)fh1->Get(hname1_ap[i])),((TH1F*)fh2->Get(hname2_ap[i])),1,-1);
    diff2_ap->Draw();
  }
  l=0;
  shadc1_ap->Divide(2,7);
  for ( int i=6 ; i < 13 ; i++) {
    l++;
    shadc1_ap->cd(l);
    ((TH1F*)fh1->Get(hname1_ap[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_ap[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_ap[i]))->SetLineColor(2);
    l++;
    shadc1_ap->cd(l);
    TH1F* diff3_ap=((TH1F*)fh2->Get(hname2_ap[i]))->Clone() ;
    diff3_ap->SetLineColor(2);
    diff3_ap->SetTitle(dname_ap[i]);
    diff3_ap->Add(((TH1F*)fh1->Get(hname1_ap[i])),((TH1F*)fh2->Get(hname2_ap[i])),1,-1);
    diff3_ap->Draw();
  }
  l=0;
  shadc_an->Divide(2,6);
  for ( int i=0 ; i < 6 ; i++) {
    l++;
    shadc_an->cd(l);
    ((TH1F*)fh1->Get(hname1_an[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_an[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_an[i]))->SetLineColor(2);
    l++;
    shadc_an->cd(l);
    TH1F* diff2_an=((TH1F*)fh2->Get(hname2_an[i]))->Clone() ;
    diff2_an->SetLineColor(2);
    diff2_an->SetTitle(dname_an[i]);
    diff2_an->Add(((TH1F*)fh1->Get(hname1_an[i])),((TH1F*)fh2->Get(hname2_an[i])),1,-1);
    diff2_an->Draw();
  }
  l=0;
  shadc1_an->Divide(2,7);
  for ( int i=6 ; i < 13 ; i++) {
    l++;
    shadc1_an->cd(l);
    ((TH1F*)fh1->Get(hname1_an[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_an[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_an[i]))->SetLineColor(2);
    l++;
    shadc1_an->cd(l);
    TH1F* diff3_an=((TH1F*)fh2->Get(hname2_an[i]))->Clone() ;
    diff3_an->SetLineColor(2);
    diff3_an->SetTitle(dname_an[i]);
    diff3_an->Add(((TH1F*)fh1->Get(hname1_an[i])),((TH1F*)fh2->Get(hname2_an[i])),1,-1);
    diff3_an->Draw();
  }
  //
  l=0;
  shadc_bp->Divide(2,6);
  for ( int i=0 ; i < 6 ; i++) {
    l++;
    shadc_bp->cd(l);
    ((TH1F*)fh1->Get(hname1_bp[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_bp[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_bp[i]))->SetLineColor(2);
    l++;
    shadc_bp->cd(l);
    TH1F* diff2_bp=((TH1F*)fh2->Get(hname2_bp[i]))->Clone() ;
    diff2_bp->SetLineColor(2);
    diff2_bp->SetTitle(dname_bp[i]);
    diff2_bp->Add(((TH1F*)fh1->Get(hname1_bp[i])),((TH1F*)fh2->Get(hname2_bp[i])),1,-1);
    diff2_bp->Draw();
  }
  l=0;
  shadc1_bp->Divide(2,7);
  for ( int i=6 ; i < 13 ; i++) {
    l++;
    shadc1_bp->cd(l);
    ((TH1F*)fh1->Get(hname1_bp[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_bp[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_bp[i]))->SetLineColor(2);
    l++;
    shadc1_bp->cd(l);
    TH1F* diff3_bp=((TH1F*)fh2->Get(hname2_bp[i]))->Clone() ;
    diff3_bp->SetLineColor(2);
    diff3_bp->SetTitle(dname_bp[i]);
    diff3_bp->Add(((TH1F*)fh1->Get(hname1_bp[i])),((TH1F*)fh2->Get(hname2_bp[i])),1,-1);
    diff3_bp->Draw();
  }
  l=0;
  shadc_bn->Divide(2,6);
  for ( int i=0 ; i < 6 ; i++) {
    l++;
    shadc_bn->cd(l);
    ((TH1F*)fh1->Get(hname1_bn[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_bn[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_bn[i]))->SetLineColor(2);
    l++;
    shadc_bn->cd(l);
    TH1F* diff2_bn=((TH1F*)fh2->Get(hname2_bn[i]))->Clone() ;
    diff2_bn->SetLineColor(2);
    diff2_bn->SetTitle(dname_bn[i]);
    diff2_bn->Add(((TH1F*)fh1->Get(hname1_bn[i])),((TH1F*)fh2->Get(hname2_bn[i])),1,-1);
    diff2_bn->Draw();
  }
  l=0;
  shadc1_bn->Divide(2,7);
  for ( int i=6 ; i < 13 ; i++) {
    l++;
    shadc1_bn->cd(l);
    ((TH1F*)fh1->Get(hname1_bn[i]))->Draw();
    ((TH1F*)fh2->Get(hname2_bn[i]))->Draw("same");
    ((TH1F*)fh2->Get(hname2_bn[i]))->SetLineColor(2);
    l++;
    shadc1_bn->cd(l);
    TH1F* diff3_bn=((TH1F*)fh2->Get(hname2_bn[i]))->Clone() ;
    diff3_bn->SetLineColor(2);
    diff3_bn->SetTitle(dname_bn[i]);
    diff3_bn->Add(((TH1F*)fh1->Get(hname1_bn[i])),((TH1F*)fh2->Get(hname2_bn[i])),1,-1);
    diff3_bn->Draw();
  }
  //
}
