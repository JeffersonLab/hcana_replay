#include "scan_hcana.h"
#include "engine.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>
void scan_comp_hcana( TString hcana_file, TString hcana2_file) {
  scan_hcana *myhcana = new scan_hcana(hcana_file,0);
  scan_hcana *myhcana2 = new scan_hcana(hcana2_file,0);
  Long64_t nent_hcana = myhcana->fChain->GetEntriesFast();
  Long64_t nent_hcana2 = myhcana2->fChain->GetEntriesFast();
  cout << " hcana entries = " << nent_hcana << " hcana2 entries = " << nent_hcana2  << endl;
  Long64_t nb_hcana = 0,nb_hcana2 = 0;
  TH1F *hntr_hcana = new TH1F("hntr_hcana","; Ntracks; Counts",50,0,50);
  TH1F *hntr_hcana2 = new TH1F("hntr_hcana2","; Ntracks; Counts",50,0,50);
  TH2F *hntr_2d = new TH2F("hntr_2d","; HCANA Ntracks ; HCANA2 Ntracks",40,0,40,40,0,40);
  TH1F *hntr_diff = new TH1F("hntr_diff","; Ntracks; Counts",50,0,50);
  //
  TH1F *hchi2_hcana2[3],*hchi2_hcana[3],*hchi2_diff[3],*hchi2_sub[3];
  TH1F *hxpfp_hcana2[3],*hxpfp_hcana[3],*hxpfp_diff[3],*hxpfp_sub[3];
  TH1F *hypfp_hcana2[3],*hypfp_hcana[3],*hypfp_diff[3],*hypfp_sub[3];
  TH1F *hxfp_hcana2[3],*hxfp_hcana[3],*hxfp_diff[3],*hxfp_sub[3];
  TH1F *hyfp_hcana2[3],*hyfp_hcana[3],*hyfp_diff[3],*hyfp_sub[3];
  TH1F *hxptg_hcana2[3],*hxptg_hcana[3],*hxptg_diff[3],*hxptg_sub[3];
  TH1F *hyptg_hcana2[3],*hyptg_hcana[3],*hyptg_diff[3],*hyptg_sub[3];
  TH1F *hytg_hcana2[3],*hytg_hcana[3],*hytg_diff[3],*hytg_sub[3];
  TH1F *hdelta_hcana2[3],*hdelta_hcana[3],*hdelta_diff[3],*hdelta_sub[3];
  Int_t i;
  for (i=0 ; i<3 ;i++) {
    hchi2_hcana2[i] = new TH1F(Form("hchi2_hcana2%d",i),"; Chi2 ; Counts",100,0.,1000.);
  hchi2_hcana[i] = new TH1F(Form("hchi2_hcana%d",i),"; Chi2 ; Counts",100,0.,1000.);
  hchi2_diff[i] = new TH1F(Form("hchi2_diff%d",i),"Difference; Chi2 ; Counts",100,0.,1000.);
  hchi2_sub[i] = new TH1F(Form("hchi2_sub%d",i),"; Chi2 (HCANA-HCANA2); Counts",100,-10.,10.);
  //
  hxpfp_hcana2[i] = new TH1F(Form("hxpfp_hcana2%d",i),"; Xpfp (mr); Counts",100,-100.,100.);
  hxpfp_hcana[i] = new TH1F(Form("hxpfp_hcana%d",i),"; Xpfp (mr); Counts",100,-100.,100.);
  hxpfp_diff[i] = new TH1F(Form("hxpfp_diff%d",i),"Difference; Xpfp (mr); Counts",100,-100.,100.);
  hxpfp_sub[i] = new TH1F(Form("hxpfp_sub%d",i),"; Xpfp (HCANA-HCANA2); Counts",100,-.1,.1);
  //
  hypfp_hcana2[i] = new TH1F(Form("hypfp_hcana2%d",i),"; Ypfp (mr); Counts",100,-50.,50.);
  hypfp_hcana[i] = new TH1F(Form("hypfp_hcana%d",i),"; Ypfp (mr); Counts",100,-50.,50.);
  hypfp_diff[i] = new TH1F(Form("hypfp_diff%d",i),"Difference; Ypfp (mr); Counts",100,-50.,50.);
  hypfp_sub[i] = new TH1F(Form("hypfp_sub%d",i),"; Ypfp  (HCANA-HCANA2); Counts",100,-.1,.1);
  //
  hxfp_hcana2[i] = new TH1F(Form("hxfp_hcana2%d",i),"; Xfp (cm); Counts",100,-50,50);
  hxfp_hcana[i] = new TH1F(Form("hxfp_hcana%d",i),"; Xfp (cm); Counts",100,-50,50);
  hxfp_diff[i] = new TH1F(Form("hxfp_diff%d",i),"Difference; Xfp (cm); Counts",100,-50,50);
  hxfp_sub[i] = new TH1F(Form("hxfp_sub%d",i),"; Xfp (HCANA-HCANA2); Counts",100,-.1,.1);
  //
  hyfp_hcana2[i] = new TH1F(Form("hyfp_hcana2%d",i),"; Yfp (cm); Counts",60,-30,30);
  hyfp_hcana[i] = new TH1F(Form("hyfp_hcana%d",i),"; Yfp (cm); Counts",60,-30,30);
  hyfp_diff[i] = new TH1F(Form("hyfp_diff%d",i),"Difference; Yfp (cm); Counts",60,-30,30);
  hyfp_sub[i] = new TH1F(Form("hyfp_sub%d",i),"; Yfp (HCANA-HCANA2); Counts",60,-.1,.1);
  //
  hxptg_hcana2[i] = new TH1F(Form("hxptg_hcana2%d",i),"; Xptg (mr); Counts",100,-100.,100.);
  hxptg_hcana[i] = new TH1F(Form("hxptg_hcana%d",i),"; Xptg (mr); Counts",100,-100.,100.);
  hxptg_diff[i] = new TH1F(Form("hxptg_diff%d",i),"Difference; Xptg (mr); Counts",100,-100.,100.);
  hxptg_sub[i] = new TH1F(Form("hxptg_sub%d",i),"; Xptg (mr) (HCANA-HCANA2); Counts",100,-.1,.1);
  //
  hyptg_hcana2[i] = new TH1F(Form("hyptg_hcana2%d",i),"; Yptg (mr); Counts",100,-50.,50.);
  hyptg_hcana[i] = new TH1F(Form("hyptg_hcana%d",i),"; Yptg (mr); Counts",100,-50.,50.);
  hyptg_diff[i] = new TH1F(Form("hyptg_diff%d",i),"Difference; Yptg (mr); Counts",100,-50.,50.);
  hyptg_sub[i] = new TH1F(Form("hyptg_sub%d",i),"; Yptg (mr) (HCANA-HCANA2); Counts",100,-.1,.1);
  //
  hytg_hcana2[i] = new TH1F(Form("hytg_hcana2%d",i),"; Ytg (cm); Counts",60,-10,10);
  hytg_hcana[i] = new TH1F(Form("hytg_hcana%d",i),"; Ytg (cm); Counts",60,-10,10);
  hytg_diff[i] = new TH1F(Form("hytg_diff%d",i),"Difference; Ytg (cm); Counts",60,-10,10);
  hytg_sub[i] = new TH1F(Form("hytg_sub%d",i),"; Ytg (cm) (HCANA-HCANA2); Counts",60,-.01,.01);
  //
  hdelta_hcana2[i] = new TH1F(Form("hdelta_hcana2%d",i),"; Delta (%); Counts",60,-15,15);
  hdelta_hcana[i] = new TH1F(Form("hdelta_hcana%d",i),"; Delta (%); Counts",60,-15,15);
  hdelta_diff[i] = new TH1F(Form("hdelta_diff%d",i),"Difference; Delta (%); Counts",60,-15,15);
  hdelta_sub[i] = new TH1F(Form("hdelta_sub%d",i),"; Delta (%) (HCANA-HCANA2); Counts",60,-.005,.005);
   //
  }
  //
char *s = new char[1];
  for (Long64_t ni=0 ; ni<nent_hcana ;ni++) {
      nb_hcana = myhcana->fChain->GetEntry(ni);
      nb_hcana2 = myhcana2->fChain->GetEntry(ni);
      hntr_hcana->Fill(myhcana->H_dc_ntrack);
      hntr_hcana2->Fill(myhcana2->H_dc_ntrack);
      if ((myhcana->H_dc_ntrack) != (myhcana2->H_dc_ntrack) )hntr_2d->Fill(myhcana->H_dc_ntrack,myhcana2->H_dc_ntrack);
  if ( myhcana2->H_dc_ntrack==myhcana->H_dc_ntrack && myhcana->H_dc_ntrack <= 3 ) {
    for (i=0 ; i<myhcana2->H_dc_ntrack ;i++) {
      hxfp_hcana[i]->Fill(myhcana->H_dc_x[i]);
      hyfp_hcana[i]->Fill(myhcana->H_dc_y[i]);
      hxpfp_hcana[i]->Fill(myhcana->H_dc_xp[i]*1000.);
      hypfp_hcana[i]->Fill(myhcana->H_dc_yp[i]*1000.);
      hxfp_hcana2[i]->Fill(myhcana2->H_dc_x[i]);
      hyfp_hcana2[i]->Fill(myhcana2->H_dc_y[i]);
      hxpfp_hcana2[i]->Fill(myhcana2->H_dc_xp[i]*1000);
      hypfp_hcana2[i]->Fill(myhcana2->H_dc_yp[i]*1000);
      hchi2_hcana[i]->Fill(myhcana->H_tr_chi2[i]);
      hchi2_hcana2[i]->Fill(myhcana2->H_tr_chi2[i]);
         hytg_hcana[i]->Fill(myhcana->H_tr_tg_y[i]);
      hxptg_hcana[i]->Fill(myhcana->H_tr_tg_th[i]*1000.);
      hyptg_hcana[i]->Fill(myhcana->H_tr_tg_ph[i]*1000.);
      hdelta_hcana[i]->Fill(myhcana->H_tr_tg_dp[i]);
      hytg_hcana2[i]->Fill(myhcana2->H_tr_tg_y[i]);
      hxptg_hcana2[i]->Fill(myhcana2->H_tr_tg_th[i]*1000);
      hyptg_hcana2[i]->Fill(myhcana2->H_tr_tg_ph[i]*1000);
      hdelta_hcana2[i]->Fill(myhcana2->H_tr_tg_dp[i]);
	hchi2_sub[i]->Fill((myhcana->H_tr_chi2[i]-myhcana2->H_tr_chi2[i]));
	hxfp_sub[i]->Fill((myhcana->H_dc_x[i]-myhcana2->H_dc_x[i]));
	hyfp_sub[i]->Fill((myhcana->H_dc_y[i]-myhcana2->H_dc_y[i]));
	hypfp_sub[i]->Fill((myhcana->H_dc_yp[i]-myhcana2->H_dc_yp[i]));
        hxpfp_sub[i]->Fill((myhcana->H_dc_xp[i]-myhcana2->H_dc_xp[i]));
	hytg_sub[i]->Fill((myhcana->H_tr_tg_y[i]-myhcana2->H_tr_tg_y[i]));
	hyptg_sub[i]->Fill((myhcana->H_tr_tg_ph[i]-myhcana2->H_tr_tg_ph[i])*1000);
         hxptg_sub[i]->Fill((myhcana->H_tr_tg_th[i]-myhcana2->H_tr_tg_th[i])*1000);
         hdelta_sub[i]->Fill((myhcana->H_tr_tg_dp[i]-myhcana2->H_tr_tg_dp[i]));
    }
  }
  if ( myhcana->H_dc_yp[0]!=myhcana2->H_dc_yp[0] && -1 == 1 ) {
	//cout  << " hcana event number = "<< myhcana->g_evnum << " Hcana2 event number = " << myhcana2->evnum << endl;
      myhcana->PrintTrack(ni);
      myhcana2->PrintTrack(ni);
      gets(s);
      if ( s == "q") exit;
       }
  }
  cout << " Hcana File= " << hcana_file << endl;
  cout << " Hcana2 File= " << hcana2_file << endl;
  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
 MyStyle->SetOptStat(1000000);
 MyStyle->SetTitleOffset(1.,"Y");
 MyStyle->SetTitleOffset(.7,"X");
 MyStyle->SetLabelSize(0.04,"XY");
 MyStyle->SetTitleSize(0.06,"XY");
 MyStyle->SetPadLeftMargin(0.12);
 MyStyle->SetStatFontSize(0.2);
 MyStyle->SetTitleFontSize(0.1);
 gROOT->SetStyle("MyStyle");
 //
 TCanvas *ctg[3];
  for (i=0 ; i<3 ;i++) {
    ctg[i] = new TCanvas(Form("ctg%d",i),Form(" Target Angles ( %d track)  ",i+1),800,800);
 ctg[i]->Divide(2,3);
 ctg[i]->cd(1);
 hxptg_hcana[i]->Draw();
 hxptg_hcana2[i]->Draw("same");
 hxptg_hcana2[i]->SetLineColor(2);
 ctg[i]->cd(3);
 hxptg_diff[i]->Add(hxptg_hcana[i],hxptg_hcana2[i],-1);
 hxptg_diff[i]->Draw();
 ctg[i]->cd(5);
 hxptg_sub[i]->Draw();
 ctg[i]->cd(2);
 hyptg_hcana[i]->Draw();
 hyptg_hcana2[i]->Draw("same");
 hyptg_hcana2[i]->SetLineColor(2);
 ctg[i]->cd(4);
 hyptg_diff[i]->Add(hyptg_hcana[i],hyptg_hcana2[i],-1);
 hyptg_diff[i]->Draw();
 ctg[i]->cd(6);
 hyptg_sub[i]->Draw();
  }
 //
TCanvas *ctg2[3];
  for (i=0 ; i<3 ;i++) {
    ctg2[i] = new TCanvas(Form("ctg2_%d",i),Form(" Target Y and Delta ( %d track)",i+1),800,800);
 ctg2[i]->Divide(2,3);
 ctg2[i]->cd(1);
 hdelta_hcana[i]->Draw();
 hdelta_hcana2[i]->Draw("same");
 hdelta_hcana2[i]->SetLineColor(2);
 ctg2[i]->cd(3);
 hdelta_diff[i]->Add(hdelta_hcana[i],hdelta_hcana2[i],-1);
 hdelta_diff[i]->Draw();
 ctg2[i]->cd(5);
 hdelta_sub[i]->Draw();
 ctg2[i]->cd(2);
 hytg_hcana[i]->Draw();
 hytg_hcana2[i]->Draw("same");
 hytg_hcana2[i]->SetLineColor(2);
 ctg2[i]->cd(4);
 hytg_diff[i]->Add(hytg_hcana[i],hytg_hcana2[i],-1);
 hytg_diff[i]->Draw();
 ctg2[i]->cd(6);
 hytg_sub[i]->Draw();
  }
  TCanvas *cchi[3];
  for (i=0 ; i<3 ;i++) {
  cchi[i] = new TCanvas(Form("cchi_%d",i),Form(" Chi2 Focal Plane ( %d track)  ",i+1),800,800);
 cchi[i]->Divide(1,4);
 cchi[i]->cd(1);
 hchi2_hcana[i]->Draw();
 hchi2_hcana2[i]->Draw("same");
 hchi2_hcana2[i]->SetLineColor(2);
 cchi[i]->cd(2);
 hchi2_diff[i]->Add(hchi2_hcana[i],hchi2_hcana2[i],-1);
 hchi2_diff[i]->Draw();
 cchi[i]->cd(3);
 hchi2_sub[i]->Draw();
 cchi[i]->cd(4);
 hchi2_hcana22[i]->Draw();
  }
 //
  TCanvas *cplot2[3];
  for (i=0 ; i<3 ;i++) {
  cplot2[i] = new TCanvas(Form("cplot2_%d",i),Form(" Focal Plane Positions ( %d track)  ",i+1),800,800);
 cplot2[i]->Divide(2,3);
 cplot2[i]->cd(1);
 hxfp_hcana[i]->Draw();
 hxfp_hcana2[i]->Draw("same");
 hxfp_hcana2[i]->SetLineColor(2);
 cplot2[i]->cd(3);
 hxfp_diff[i]->Add(hxfp_hcana[i],hxfp_hcana2[i],-1);
 hxfp_diff[i]->Draw();
 cplot2[i]->cd(5);
 hxfp_sub[i]->Draw();
 cplot2[i]->cd(2);
 hyfp_hcana[i]->Draw();
 hyfp_hcana2[i]->Draw("same");
 hyfp_hcana2[i]->SetLineColor(2);
 cplot2[i]->cd(4);
 hyfp_diff[i]->Add(hyfp_hcana[i],hyfp_hcana2[i],-1);
 hyfp_diff[i]->Draw();
 cplot2[i]->cd(6);
 hyfp_sub[i]->Draw();
  }
  TCanvas *cplot3[3];
  for (i=0 ; i<3 ;i++) {
 cplot3[i]= new TCanvas(Form("cplot3_%d",i),Form(" Focal Plane Angles (%d track)  ",i+1),800,800);
 cplot3[i]->Divide(2,3);
 cplot3[i]->cd(1);
 hxpfp_hcana[i]->Draw();
 hxpfp_hcana2[i]->Draw("same");
 hxpfp_hcana2[i]->SetLineColor(2);
 cplot3[i]->cd(3);
 hxpfp_diff[i]->Add(hxpfp_hcana[i],hxpfp_hcana2[i],-1);
 hxpfp_diff[i]->Draw();
 cplot3[i]->cd(5);
 hxpfp_sub[i]->Draw();
 cplot3[i]->cd(2);
 hypfp_hcana[i]->Draw();
 hypfp_hcana2[i]->Draw("same");
 hypfp_hcana2[i]->SetLineColor(2);
 cplot3[i]->cd(4);
 hypfp_diff[i]->Add(hypfp_hcana[i],hypfp_hcana2[i],-1);
 hypfp_diff[i]->Draw();
 cplot3[i]->cd(6);
 hypfp_sub[i]->Draw();
  }
TCanvas *cplot1 = new TCanvas("cplot1","2D ntrack ",800,800);
 hntr_2d->Draw("colz");
TCanvas *cplot = new TCanvas("cplot","1D ntrack ",800,800);
 cplot->Divide(1,3);
 cplot->cd(1);
 hntr_hcana->Draw();
 cplot->cd(2);
 hntr_hcana2->Draw();
 hntr_hcana2->SetLineColor(2);
 cplot->cd(3);
 hntr_diff->Add(hntr_hcana,hntr_hcana2,-1);
 hntr_diff->Draw();
  //
}
