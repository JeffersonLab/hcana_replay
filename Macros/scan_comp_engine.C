#include "engine.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>
void scan_comp_engine( TString engine1_file, TString engine_file) {
  engine *myengine1 = new engine(engine1_file,0);
  //  TString engine_file="paw/hms_dc_52949.root";
  engine *myengine = new engine(engine_file,0);
  Long64_t nent_engine1 = myengine1->fChain->GetEntriesFast();
  Long64_t nent_engine = myengine->fChain->GetEntriesFast();
  cout << " engine1 entries = " << nent_engine1 << " engine entries = " << nent_engine  << endl;
  Long64_t nb_engine1 = 0,nb_engine = 0;
  //
  TH1F *hntr_engine1 = new TH1F("hntr_engine1","; Ntracks; Counts",50,0,50);
  TH1F *hntr_eng = new TH1F("hntr_eng","; Ntracks; Counts",50,0,50);
  TH2F *hntr_2d = new TH2F("hntr_2d","; ENGINE1 Ntracks ; ENGINE Ntracks",40,0,40,40,0,40);
  TH1F *hntr_diff = new TH1F("hntr_diff","; Ntracks; Counts",50,0,50);
  TH1F *hxpfp_eng[3],*hxpfp_engine1[3],*hxpfp_diff[3],*hxpfp_sub[3];
  TH1F *hypfp_eng[3],*hypfp_engine1[3],*hypfp_diff[3],*hypfp_sub[3];
  TH1F *hyfp_eng[3],*hyfp_engine1[3],*hyfp_diff[3],*hyfp_sub[3];
  TH1F *hxfp_eng[3],*hxfp_engine1[3],*hxfp_diff[3],*hxfp_sub[3];
  //
  Int_t i;
   for (i=0 ; i<3 ;i++) {
  hxpfp_eng[i] = new TH1F(Form("hxpfp_eng%d",i),"; Xpfp (mr); Counts",100,-100.,100.);
  hxpfp_engine1[i] = new TH1F(Form("hxpfp_engine1%d",i),"; Xpfp (mr); Counts",100,-100.,100.);
  hxpfp_diff[i] = new TH1F(Form("hxpfp_diff%d",i),"Difference; Xpfp (mr); Counts",100,-100.,100.);
  
  hypfp_eng[i] = new TH1F(Form("hypfp_eng%d",i),"; Ypfp (mr); Counts",100,-50.,50.);
  hypfp_engine1[i] = new TH1F(Form("hypfp_engine1%d",i),"; Ypfp (mr); Counts",100,-50.,50.);
  hypfp_diff[i] = new TH1F(Form("hypfp_diff%d",i),"Difference; Ypfp (mr); Counts",100,-50.,50.);
  
  hxfp_eng[i] = new TH1F(Form("hxfp_eng%d",i),"; Xfp (cm); Counts",100,-50,50);
  hxfp_engine1[i] = new TH1F(Form("hxfp_engine1%d",i),"; Xfp (cm); Counts",100,-50,50);
  hxfp_diff[i] = new TH1F(Form("hxfp_diff%d",i),"Difference; Xfp (cm); Counts",100,-50,50);
  
  hyfp_eng[i] = new TH1F(Form("hyfp_eng%d",i),"; Yfp (cm); Counts",60,-30,30);
  hyfp_engine1[i] = new TH1F(Form("hyfp_engine1%d",i),"; Yfp (cm); Counts",60,-30,30);
  hyfp_diff[i] = new TH1F(Form("hyfp_diff%d",i),"Difference; Yfp (cm); Counts",60,-30,30);
  
  hyfp_sub[i] = new TH1F(Form("hyfp_sub%d",i),"; Yfp (ENGINE1-ENGINE); Counts",60,-.5,.5);
  hxfp_sub[i] = new TH1F(Form("hxfp_sub%d",i),"; Xfp (ENGINE1-ENGINE); Counts",100,-.5,.5);
  hxpfp_sub[i] = new TH1F(Form("hxpfp_sub%d",i),"; Xpfp (ENGINE1-ENGINE); Counts",100,-.2,.2);
  hypfp_sub[i] = new TH1F(Form("hypfp_sub%d",i),"; Ypfp  (ENGINE1-ENGINE); Counts",100,-.2,.2);
   }//
  //
  Int_t counter=0;
  for (Long64_t ni=0 ; ni<nent_engine1 ;ni++) {
      nb_engine1 = myengine1->fChain->GetEntry(ni);
      nb_engine = myengine->fChain->GetEntry(ni);
      hntr_engine1->Fill(myengine1->dc_ntr);
      hntr_eng->Fill(myengine->dc_ntr);
      if ((myengine1->dc_ntr) != (myengine->dc_ntr) )hntr_2d->Fill(myengine1->dc_ntr,myengine->dc_ntr);
      if ( myengine1->dc_ntr==myengine->dc_ntr &&myengine1->dc_ntr<=3 ) {
     for (i=0 ; i<myengine->dc_ntr ;i++) {
     hxfp_engine1[i]->Fill(myengine1->dc_xfp[i]);
      hyfp_engine1[i]->Fill(myengine1->dc_yfp[i]);
      hxpfp_engine1[i]->Fill(myengine1->dc_xpfp[i]*1000);
      hypfp_engine1[i]->Fill(myengine1->dc_ypfp[i]*1000);
      hxfp_eng[i]->Fill(myengine->dc_xfp[i]);
      hyfp_eng[i]->Fill(myengine->dc_yfp[i]);
      hxpfp_eng[i]->Fill(myengine->dc_xpfp[i]*1000);
      hypfp_eng[i]->Fill(myengine->dc_ypfp[i]*1000);
          if ( TMath::Abs((myengine1->dc_yfp[i]-myengine->dc_yfp[i])) != 0.0 || (myengine1->dc_xfp[i]-myengine->dc_xfp[i]) != 0.0
|| (myengine1->dc_xpfp[i]-myengine->dc_xpfp[i]) != 0.0 || (myengine1->dc_ypfp[i]-myengine->dc_ypfp[i]) != 0.0 ) {
	hyfp_sub[i]->Fill((myengine1->dc_yfp[i]-myengine->dc_yfp[i]));
	hxfp_sub[i]->Fill((myengine1->dc_xfp[i]-myengine->dc_xfp[i]));
	hypfp_sub[i]->Fill((myengine1->dc_ypfp[i]-myengine->dc_ypfp[i]));
        hxpfp_sub[i]->Fill((myengine1->dc_xpfp[i]-myengine->dc_xpfp[i]));
          }
      }
      }
      if ( myengine->dc_ntr == 1 &&  myengine1->dc_ntr == 1 && -1==1) {
      cout  << " Counter = "<< counter++ << endl;
      myengine1->PrintTrack(ni);
      myengine->PrintTrack(ni);
      }
  }
  cout << " Engine1 File= " << engine1_file << endl;
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
  TCanvas *cplot2[3];
  for (i=0 ; i<3 ;i++) {
  cplot2[i] = new TCanvas(Form("cplot2_%d",i),Form(" Focal Plane Positions ( %d track)  ",i+1),800,800);
 cplot2[i]->Divide(2,3);
 cplot2[i]->cd(1);
 hxfp_engine1[i]->Draw();
 hxfp_eng[i]->Draw("same");
 hxfp_eng[i]->SetLineColor(2);
 cplot2[i]->cd(3);
 hxfp_diff[i]->Add(hxfp_engine1[i],hxfp_eng[i],-1);
 hxfp_diff[i]->Draw();
 cplot2[i]->cd(5);
 hxfp_sub[i]->Draw();
 cplot2[i]->cd(2);
 hyfp_engine1[i]->Draw();
 hyfp_eng[i]->Draw("same");
 hyfp_eng[i]->SetLineColor(2);
 cplot2[i]->cd(4);
 hyfp_diff[i]->Add(hyfp_engine1[i],hyfp_eng[i],-1);
 hyfp_diff[i]->Draw();
 cplot2[i]->cd(6);
 hyfp_sub[i]->Draw();
  }
  TCanvas *cplot3[3];
  for (i=0 ; i<3 ;i++) {
 cplot3[i]= new TCanvas(Form("cplot3_%d",i),Form(" Focal Plane Angles (%d track)  ",i+1),800,800);
 cplot3[i]->Divide(2,3);
 cplot3[i]->cd(1);
 hxpfp_engine1[i]->Draw();
 hxpfp_eng[i]->Draw("same");
 hxpfp_eng[i]->SetLineColor(2);
 cplot3[i]->cd(3);
 hxpfp_diff[i]->Add(hxpfp_engine1[i],hxpfp_eng[i],-1);
 hxpfp_diff[i]->Draw();
 cplot3[i]->cd(5);
 hxpfp_sub[i]->Draw();
 cplot3[i]->cd(2);
 hypfp_engine1[i]->Draw();
 hypfp_eng[i]->Draw("same");
 hypfp_eng[i]->SetLineColor(2);
 cplot3[i]->cd(4);
 hypfp_diff[i]->Add(hypfp_engine1[i],hypfp_eng[i],-1);
 hypfp_diff[i]->Draw();
 cplot3[i]->cd(6);
 hypfp_sub[i]->Draw();
  }
TCanvas *cplot1 = new TCanvas("cplot1","2D ntrack ",800,800);
 hntr_2d->Draw("colz");
TCanvas *cplot = new TCanvas("cplot","1D ntrack ",800,800);
 cplot->Divide(1,3);
 cplot->cd(1);
 hntr_engine1->Draw();
 cplot->cd(2);
 hntr_eng->Draw();
 hntr_eng->SetLineColor(2);
 cplot->cd(3);
 hntr_diff->Add(hntr_engine1,hntr_eng,-1);
 hntr_diff->Draw();
  //
}
