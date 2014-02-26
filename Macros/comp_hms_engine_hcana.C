#include "analyze_hcana_tree.h"
#include "analyze_engine_tree.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>
void comp_hms_engine_hcana( TString hcana_file, TString engine_file) {
  analyze_hcana_tree *myhcana = new analyze_hcana_tree(hcana_file,0);
  analyze_engine_tree *myengine = new analyze_engine_tree(engine_file,0);
  Long64_t nent_hcana = myhcana->fChain->GetEntriesFast();
  Long64_t nent_engine = myengine->fChain->GetEntriesFast();
  Long64_t nent_loop=TMath::Min(nent_hcana,nent_engine);
  cout << " hcana entries = " << nent_hcana << " engine entries = " << nent_engine  << endl;
  Long64_t nb_hcana = 0,nb_engine = 0;
  TH1F *hntr_hcana = new TH1F("hntr_hcana","; Ntracks; Counts",50,0,50);
  TH1F *hntr_eng = new TH1F("hntr_eng","; Ntracks; Counts",50,0,50);
  TH2F *hntr_2d = new TH2F("hntr_2d","; HCANA Ntracks ; ENGINE Ntracks",40,0,40,40,0,40);
  TH1F *hntr_diff = new TH1F("hntr_diff","; Ntracks; Counts",50,0,50);
  //
  TH1F *hchi2_eng[3],*hchi2_hcana[3],*hchi2_diff[3],*hchi2_sub[3],*hchi2_eng2[3];
  TH1F *hxpfp_eng[3],*hxpfp_hcana[3],*hxpfp_diff[3],*hxpfp_sub[3];
  TH1F *hypfp_eng[3],*hypfp_hcana[3],*hypfp_diff[3],*hypfp_sub[3];
  TH1F *hxfp_eng[3],*hxfp_hcana[3],*hxfp_diff[3],*hxfp_sub[3];
  TH1F *hyfp_eng[3],*hyfp_hcana[3],*hyfp_diff[3],*hyfp_sub[3];
  TH1F *hxptg_eng[3],*hxptg_hcana[3],*hxptg_diff[3],*hxptg_sub[3];
  TH1F *hyptg_eng[3],*hyptg_hcana[3],*hyptg_diff[3],*hyptg_sub[3];
  TH1F *hytg_eng[3],*hytg_hcana[3],*hytg_diff[3],*hytg_sub[3];
  TH1F *hdelta_eng[3],*hdelta_hcana[3],*hdelta_diff[3],*hdelta_sub[3];
  Int_t i;
  for (i=0 ; i<3 ;i++) {
    hchi2_eng[i] = new TH1F(Form("hchi2_eng%d",i),"; Chi2 ; Counts",100,0.,1000.);
  hchi2_hcana[i] = new TH1F(Form("hchi2_hcana%d",i),"; Chi2 ; Counts",100,0.,1000.);
  hchi2_diff[i] = new TH1F(Form("hchi2_diff%d",i),"Difference; Chi2 ; Counts",100,0.,1000.);
  hchi2_sub[i] = new TH1F(Form("hchi2_sub%d",i),"; Chi2 (HCANA-ENGINE); Counts",100,-10.,10.);
  hchi2_eng2[i] = new TH1F(Form("hchi2_eng2%d",i),"; Chi2 ; Counts",100,0.,1000.);
  //
  Double_t xplo=-100.,xphi=100.;
  hxpfp_eng[i] = new TH1F(Form("hxpfp_eng%d",i),"; Xpfp (mr); Counts",100,xplo,xphi);
  hxpfp_hcana[i] = new TH1F(Form("hxpfp_hcana%d",i),"; Xpfp (mr); Counts",100,xplo,xphi);
  hxpfp_diff[i] = new TH1F(Form("hxpfp_diff%d",i),"Difference; Xpfp (mr); Counts",100,xplo,xphi);
  hxpfp_sub[i] = new TH1F(Form("hxpfp_sub%d",i),"; Xpfp  (HCANA-ENGINE); Counts",2000,-.0001,.0001);
  //
  Double_t yplo=-50.,yphi=50.;
  hypfp_eng[i] = new TH1F(Form("hypfp_eng%d",i),"; Ypfp (mr); Counts",100,yplo,yphi);
  hypfp_hcana[i] = new TH1F(Form("hypfp_hcana%d",i),"; Ypfp (mr); Counts",100,yplo,yphi);
  hypfp_diff[i] = new TH1F(Form("hypfp_diff%d",i),"Difference; Ypfp (mr); Counts",100,yplo,yphi);
  hypfp_sub[i] = new TH1F(Form("hypfp_sub%d",i),"; Ypfp  (mr) (HCANA-ENGINE); Counts",2000,-.0001,.0001);
  //
  Double_t xlo=-50.,xhi=50.;
  hxfp_eng[i] = new TH1F(Form("hxfp_eng%d",i),"; Xfp (cm); Counts",100,xlo,xhi);
  hxfp_hcana[i] = new TH1F(Form("hxfp_hcana%d",i),"; Xfp (cm); Counts",100,xlo,xhi);
  hxfp_diff[i] = new TH1F(Form("hxfp_diff%d",i),"Difference; Xfp (cm); Counts",100,xlo,xhi);
  hxfp_sub[i] = new TH1F(Form("hxfp_sub%d",i),"; Xfp (cm) (HCANA-ENGINE); Counts",2000,-.0001,.0001);
  //
  Double_t ylo=-30.,yhi=30.;
  hyfp_eng[i] = new TH1F(Form("hyfp_eng%d",i),"; Yfp (cm); Counts",60,ylo,yhi);
  hyfp_hcana[i] = new TH1F(Form("hyfp_hcana%d",i),"; Yfp (cm); Counts",60,ylo,yhi);
  hyfp_diff[i] = new TH1F(Form("hyfp_diff%d",i),"Difference; Yfp (cm); Counts",60,ylo,yhi);
  hyfp_sub[i] = new TH1F(Form("hyfp_sub%d",i),"; Yfp (cm) (HCANA-ENGINE); Counts",2000,-.0001,.0001);
  //
  hxptg_eng[i] = new TH1F(Form("hxptg_eng%d",i),"; Xptg (mr); Counts",100,-100.,100.);
  hxptg_hcana[i] = new TH1F(Form("hxptg_hcana%d",i),"; Xptg (mr); Counts",100,-100.,100.);
  hxptg_diff[i] = new TH1F(Form("hxptg_diff%d",i),"Difference; Xptg (mr); Counts",100,-100.,100.);
  hxptg_sub[i] = new TH1F(Form("hxptg_sub%d",i),"; Xptg (mr) (HCANA-ENGINE); Counts",100,-.1,.1);
  //
  hyptg_eng[i] = new TH1F(Form("hyptg_eng%d",i),"; Yptg (mr); Counts",100,-50.,50.);
  hyptg_hcana[i] = new TH1F(Form("hyptg_hcana%d",i),"; Yptg (mr); Counts",100,-50.,50.);
  hyptg_diff[i] = new TH1F(Form("hyptg_diff%d",i),"Difference; Yptg (mr); Counts",100,-50.,50.);
  hyptg_sub[i] = new TH1F(Form("hyptg_sub%d",i),"; Yptg  (HCANA-ENGINE); Counts",100,-.1,.1);
  //
  hytg_eng[i] = new TH1F(Form("hytg_eng%d",i),"; Ytg (cm); Counts",60,-10,10);
  hytg_hcana[i] = new TH1F(Form("hytg_hcana%d",i),"; Ytg (cm); Counts",60,-10,10);
  hytg_diff[i] = new TH1F(Form("hytg_diff%d",i),"Difference; Ytg (cm); Counts",60,-10,10);
  hytg_sub[i] = new TH1F(Form("hytg_sub%d",i),"; Ytg (cm) (HCANA-ENGINE); Counts",60,-.0001,.0001);
  //
  hdelta_eng[i] = new TH1F(Form("hdelta_eng%d",i),"; Delta (%); Counts",60,-15,15);
  hdelta_hcana[i] = new TH1F(Form("hdelta_hcana%d",i),"; Delta (%); Counts",60,-15,15);
  hdelta_diff[i] = new TH1F(Form("hdelta_diff%d",i),"Difference; Delta (%); Counts",60,-15,15);
  hdelta_sub[i] = new TH1F(Form("hdelta_sub%d",i),"; Delta (%) (HCANA-ENGINE); Counts",60,-.005,.005);
   //
  }
  //
char *s = new char[1];
  Long64_t engine_ent=0;
  for (Long64_t ni=0 ; ni<nent_loop ;ni++) {
      nb_hcana = myhcana->fChain->GetEntry(ni);
      nb_engine = myengine->fChain->GetEntry(engine_ent++);
      while (myhcana->g_evnum!=myengine->evnum) {
         nb_engine = myengine->fChain->GetEntry(engine_ent++);
      }
      if (myhcana->fEvtHdr_fEvtType==1&& myengine->evtype==1 && myhcana->g_evnum==myengine->evnum) {
      hntr_hcana->Fill(myhcana->H_dc_ntrack);
      hntr_eng->Fill(myengine->hdc_ntr);
      if ((myhcana->H_dc_ntrack) != (myengine->hdc_ntr) )hntr_2d->Fill(myhcana->H_dc_ntrack,myengine->hdc_ntr);
  if ( myengine->hdc_ntr==myhcana->H_dc_ntrack && myengine->hdc_ntr <= 3 ) {
    for (i=0 ; i<myengine->hdc_ntr ;i++) {
      if( myhcana->H_dc_x[i] >= xlo && myhcana->H_dc_x[i] <= xhi && myhcana->H_dc_y[i] >= ylo && myhcana->H_dc_y[i] <= yhi
	 	  && myhcana->H_dc_xp[i] >= xplo/1000. && myhcana->H_dc_xp[i] <= xphi/1000. && myhcana->H_dc_yp[i] >= yplo/1000. && myhcana->H_dc_yp[i] <= yphi/1000.) {
      hxfp_hcana[i]->Fill(myhcana->H_dc_x[i]);
      hyfp_hcana[i]->Fill(myhcana->H_dc_y[i]);
      hxpfp_hcana[i]->Fill(myhcana->H_dc_xp[i]*1000.);
      hypfp_hcana[i]->Fill(myhcana->H_dc_yp[i]*1000.);
      hxfp_eng[i]->Fill(myengine->hdc_xfp[i]);
      hyfp_eng[i]->Fill(myengine->hdc_yfp[i]);
      hxpfp_eng[i]->Fill(myengine->hdc_xpfp[i]*1000);
      hypfp_eng[i]->Fill(myengine->hdc_ypfp[i]*1000);
      hchi2_hcana[i]->Fill(myhcana->H_tr_chi2[i]);
      hchi2_eng[i]->Fill(myengine->hdc_chi2[i]);
      hytg_hcana[i]->Fill(myhcana->H_tr_tg_y[i]);
      hxptg_hcana[i]->Fill(myhcana->H_tr_tg_th[i]*1000.);
      hyptg_hcana[i]->Fill(myhcana->H_tr_tg_ph[i]*1000.);
      hdelta_hcana[i]->Fill(myhcana->H_tr_tg_dp[i]);
      hytg_eng[i]->Fill(myengine->hdc_ytg[i]);
      hxptg_eng[i]->Fill(myengine->hdc_xptg[i]*1000);
      hyptg_eng[i]->Fill(myengine->hdc_yptg[i]*1000);
      hdelta_eng[i]->Fill(myengine->hdc_delta[i]);
	hchi2_sub[i]->Fill((myhcana->H_tr_chi2[i]-myengine->hdc_chi2[i]));
	hxfp_sub[i]->Fill((myhcana->H_dc_x[i]-myengine->hdc_xfp[i]));
	hyfp_sub[i]->Fill((myhcana->H_dc_y[i]-myengine->hdc_yfp[i]));
	hypfp_sub[i]->Fill((myhcana->H_dc_yp[i]-myengine->hdc_ypfp[i]));
        hxpfp_sub[i]->Fill((myhcana->H_dc_xp[i]-myengine->hdc_xpfp[i]));
	hytg_sub[i]->Fill((myhcana->H_tr_tg_y[i]-myengine->hdc_ytg[i]));
	hyptg_sub[i]->Fill((myhcana->H_tr_tg_ph[i]-myengine->hdc_yptg[i])*1000);
         hxptg_sub[i]->Fill((myhcana->H_tr_tg_th[i]-myengine->hdc_xptg[i])*1000);
         hdelta_sub[i]->Fill((myhcana->H_tr_tg_dp[i]-myengine->hdc_delta[i]));
       if ( TMath::Abs(myhcana->H_tr_chi2[i]-myengine->hdc_chi2[i]) >= 10. ) hchi2_eng2[i]->Fill(myengine->hdc_chi2[i]);
      }   
    }
  }
    if (myhcana->H_dc_ntrack <0 && TMath::Abs(myhcana->H_dc_x[0]-myengine->hdc_xfp[0]) >= 0.01 ) {
  //  if ( TMath::Abs(myhcana->H_dc_ntrack-myengine->hdc_ntr) > 0 ) {
	//cout  << " hcana event number = "<< myhcana->g_evnum << " Engine event number = " << myengine->evnum << endl;
      myhcana->PrintTrack(ni);
      myengine->PrintTrack(ni);
      cout << " Hit return to see next event " << endl;
      gets(s);
      if ( s == "q") exit;
       }
      } // if
  } // for loop
  cout << " Hcana File= " << hcana_file << endl;
  cout << " Engine File= " << engine_file << endl;
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
 Int_t num_tracks[2][10];
 Int_t sum_tracks[2][10];
 Int_t good_events[3];
 good_events[0]=hxfp_eng[0]->Integral();
 good_events[1]=hxfp_eng[1]->Integral();
 good_events[2]=hxfp_eng[2]->Integral();
 printf("%-5s %+10s %+10s %+10s \n"," Track","# Hcana","# ENGINE","Diff");
  for (i=0 ; i<10 ;i++) {
    num_tracks[0][i]=hntr_hcana->GetBinContent(i+1);
    num_tracks[1][i]=hntr_eng->GetBinContent(i+1);
    sum_tracks[0][i]=hntr_hcana->Integral(i+1,4);
    sum_tracks[1][i]=hntr_eng->Integral(i+1,4);
    printf("%3d   %10d   %10d  %10d  %10d \n",i,num_tracks[0][i],num_tracks[1][i],num_tracks[0][i]-num_tracks[1][i],sum_tracks[0][i]);
  } 
 printf("%-5s %+10s %+10s %+10s %+10s %+10s \n"," Track","  cut "," XP "," YP "," X "," Y ");
 Int_t j;
 Double_t num_pass_xp[3][4],num_pass_yp[3][4];
 Double_t num_pass_x[3][4],num_pass_y[3][4];
 Double_t xlo_pass_xp[3][4],xlo_pass_yp[3][4];
  Int_t binlo[4]={1,901,991,1000},binhi[4]={2001,1101,1011,1001};
   for (i=0 ; i<3 ;i++) {
     for (j=0 ; j<4 ;j++) {
     num_pass_xp[i][j]=hxpfp_sub[i]->Integral(binlo[j],binhi[j]); 
     num_pass_yp[i][j]=hypfp_sub[i]->Integral(binlo[j],binhi[j]); 
     num_pass_x[i][j]=hxfp_sub[i]->Integral(binlo[j],binhi[j]); 
     num_pass_y[i][j]=hyfp_sub[i]->Integral(binlo[j],binhi[j]); 
     xlo_pass_xp[i][j]=hxpfp_sub[i]->GetBinLowEdge(binlo[j]); 
     printf("%3d   %8.4e  %10d  %10d  %10d  %10d %5.4f %5.4f %5.4f %5.4f   \n",i+1,-xlo_pass_xp[i][j],num_pass_xp[i][j],num_pass_yp[i][j],num_pass_x[i][j],num_pass_y[i][j],num_pass_xp[i][j]/good_events[i],num_pass_yp[i][j]/good_events[i],num_pass_x[i][j]/good_events[i],num_pass_y[i][j]/good_events[i]);
     }
   }
 //
 TCanvas *ctg[3];
  for (i=0 ; i<3 ;i++) {
    ctg[i] = new TCanvas(Form("ctg%d",i),Form(" Target Angles ( %d track)  ",i+1),800,800);
 ctg[i]->Divide(2,3);
 ctg[i]->cd(1);
 hxptg_hcana[i]->Draw();
 hxptg_eng[i]->Draw("same");
 hxptg_eng[i]->SetLineColor(2);
 ctg[i]->cd(3);
 hxptg_diff[i]->Add(hxptg_hcana[i],hxptg_eng[i],-1);
 hxptg_diff[i]->Draw();
 ctg[i]->cd(5);
 hxptg_sub[i]->Draw();
 ctg[i]->cd(2);
 hyptg_hcana[i]->Draw();
 hyptg_eng[i]->Draw("same");
 hyptg_eng[i]->SetLineColor(2);
 ctg[i]->cd(4);
 hyptg_diff[i]->Add(hyptg_hcana[i],hyptg_eng[i],-1);
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
 hdelta_eng[i]->Draw("same");
 hdelta_eng[i]->SetLineColor(2);
 ctg2[i]->cd(3);
 hdelta_diff[i]->Add(hdelta_hcana[i],hdelta_eng[i],-1);
 hdelta_diff[i]->Draw();
 ctg2[i]->cd(5);
 hdelta_sub[i]->Draw();
 ctg2[i]->cd(2);
 hytg_hcana[i]->Draw();
 hytg_eng[i]->Draw("same");
 hytg_eng[i]->SetLineColor(2);
 ctg2[i]->cd(4);
 hytg_diff[i]->Add(hytg_hcana[i],hytg_eng[i],-1);
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
 hchi2_eng[i]->Draw("same");
 hchi2_eng[i]->SetLineColor(2);
 cchi[i]->cd(2);
 hchi2_diff[i]->Add(hchi2_hcana[i],hchi2_eng[i],-1);
 hchi2_diff[i]->Draw();
 cchi[i]->cd(3);
 hchi2_sub[i]->Draw();
 cchi[i]->cd(4);
 hchi2_eng2[i]->Draw();
  }
 //
  TCanvas *cplot2[3];
  for (i=0 ; i<3 ;i++) {
  cplot2[i] = new TCanvas(Form("cplot2_%d",i),Form(" Focal Plane Positions ( %d track)  ",i+1),800,800);
 cplot2[i]->Divide(2,3);
 cplot2[i]->cd(1);
 hxfp_hcana[i]->Draw();
 hxfp_eng[i]->Draw("same");
 hxfp_eng[i]->SetLineColor(2);
 cplot2[i]->cd(3);
 hxfp_diff[i]->Add(hxfp_hcana[i],hxfp_eng[i],-1);
 hxfp_diff[i]->Draw();
 cplot2[i]->cd(5);
 hxfp_sub[i]->Draw();
 cplot2[i]->cd(2);
 hyfp_hcana[i]->Draw();
 hyfp_eng[i]->Draw("same");
 hyfp_eng[i]->SetLineColor(2);
 cplot2[i]->cd(4);
 hyfp_diff[i]->Add(hyfp_hcana[i],hyfp_eng[i],-1);
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
 hxpfp_eng[i]->Draw("same");
 hxpfp_eng[i]->SetLineColor(2);
 cplot3[i]->cd(3);
 hxpfp_diff[i]->Add(hxpfp_hcana[i],hxpfp_eng[i],-1);
 hxpfp_diff[i]->Draw();
 cplot3[i]->cd(5);
 hxpfp_sub[i]->Draw();
 cplot3[i]->cd(2);
 hypfp_hcana[i]->Draw();
 hypfp_eng[i]->Draw("same");
 hypfp_eng[i]->SetLineColor(2);
 cplot3[i]->cd(4);
 hypfp_diff[i]->Add(hypfp_hcana[i],hypfp_eng[i],-1);
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
 hntr_eng->Draw();
 hntr_eng->SetLineColor(2);
 cplot->cd(3);
 hntr_diff->Add(hntr_hcana,hntr_eng,-1);
 hntr_diff->Draw();
  //
}
