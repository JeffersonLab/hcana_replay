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
  TH1F *hntr_engine1 = new TH1F("hntr_engine1","; Ntracks; Counts",50,0,50);
  TH1F *hntr_eng = new TH1F("hntr_eng","; Ntracks; Counts",50,0,50);
  TH2F *hntr_2d = new TH2F("hntr_2d","; ENGINE1 Ntracks ; ENGINE Ntracks",40,0,40,40,0,40);
  TH1F *hntr_diff = new TH1F("hntr_diff","; Ntracks; Counts",50,0,50);
  //
  TH1F *hxpfp_eng = new TH1F("hxpfp_eng","; Xpfp (mr); Counts",100,-100.,100.);
  TH1F *hxpfp_engine1 = new TH1F("hxpfp_engine1","; Xpfp (mr); Counts",100,-100.,100.);
  TH1F *hxpfp_diff = new TH1F("hxpfp_diff","Difference; Xpfp (mr); Counts",100,-100.,100.);
  //
  TH1F *hypfp_eng = new TH1F("hypfp_eng","; Ypfp (mr); Counts",100,-50.,50.);
  TH1F *hypfp_engine1 = new TH1F("hypfp_engine1","; Ypfp (mr); Counts",100,-50.,50.);
  TH1F *hypfp_diff = new TH1F("hypfp_diff","Difference; Ypfp (mr); Counts",100,-50.,50.);
  //
  TH1F *hxfp_eng = new TH1F("hxfp_eng","; Xfp (cm); Counts",100,-50,50);
  TH1F *hxfp_engine1 = new TH1F("hxfp_engine1","; Xfp (cm); Counts",100,-50,50);
  TH1F *hxfp_diff = new TH1F("hxfp_diff","Difference; Xfp (cm); Counts",100,-50,50);
  //
  TH1F *hyfp_eng = new TH1F("hyfp_eng","; Yfp (cm); Counts",60,-30,30);
  TH1F *hyfp_engine1 = new TH1F("hyfp_engine1","; Yfp (cm); Counts",60,-30,30);
  TH1F *hyfp_diff = new TH1F("hyfp_diff","Difference; Yfp (cm); Counts",60,-30,30);
  //
  TH1F *hyfp_sub = new TH1F("hyfp_sub","; Yfp (ENGINE1-ENGINE); Counts",60,-.5,.5);
  TH1F *hxfp_sub = new TH1F("hxfp_sub","; Xfp (ENGINE1-ENGINE); Counts",100,-.5,.5);
  TH1F *hxpfp_sub = new TH1F("hxpfp_sub","; Xpfp (ENGINE1-ENGINE); Counts",100,-.2,.2);
  TH1F *hypfp_sub = new TH1F("hypfp_sub","; Ypfp  (ENGINE1-ENGINE); Counts",100,-.2,.2);
  //
  //
  Int_t counter=0;
  for (Long64_t i=0 ; i<nent_engine1 ;i++) {
      nb_engine1 = myengine1->fChain->GetEntry(i);
      nb_engine = myengine->fChain->GetEntry(i);
      hntr_engine1->Fill(myengine1->dc_ntr);
      hntr_eng->Fill(myengine->dc_ntr);
      if ( myengine1->dc_ntr == 1) {
      hxfp_engine1->Fill(myengine1->dc_xfp[0]);
      hyfp_engine1->Fill(myengine1->dc_yfp[0]);
      hxpfp_engine1->Fill(myengine1->dc_xpfp[0]*1000);
      hypfp_engine1->Fill(myengine1->dc_ypfp[0]*1000);
      }
      if ( myengine->dc_ntr == 1) {
      hxfp_eng->Fill(myengine->dc_xfp[0]);
      hyfp_eng->Fill(myengine->dc_yfp[0]);
      hxpfp_eng->Fill(myengine->dc_xpfp[0]*1000);
      hypfp_eng->Fill(myengine->dc_ypfp[0]*1000);
      }
      if ((myengine1->dc_ntr) != (myengine->dc_ntr) )hntr_2d->Fill(myengine1->dc_ntr,myengine->dc_ntr);
      if ( myengine->dc_ntr == 1 &&  myengine1->dc_ntr == 1) {
      if ( TMath::Abs((myengine1->dc_yfp[0]-myengine->dc_yfp[0])) != 0.0 || (myengine1->dc_xfp[0]-myengine->dc_xfp[0]) != 0.0
|| (myengine1->dc_xpfp[0]-myengine->dc_xpfp[0]) != 0.0 || (myengine1->dc_ypfp[0]-myengine->dc_ypfp[0]) != 0.0 ) {
	hyfp_sub->Fill((myengine1->dc_yfp[0]-myengine->dc_yfp[0]));
	hxfp_sub->Fill((myengine1->dc_xfp[0]-myengine->dc_xfp[0]));
	hypfp_sub->Fill((myengine1->dc_ypfp[0]-myengine->dc_ypfp[0]));
        hxpfp_sub->Fill((myengine1->dc_xpfp[0]-myengine->dc_xpfp[0]));
      cout  << " Counter = "<< counter++ << endl;
      myengine1->PrintTrack(i);
      myengine->PrintTrack(i);
       }
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
TCanvas *cplot2 = new TCanvas("cplot2"," Focal Plane Positions ( 1 track)  ",800,800);
 cplot2->Divide(2,3);
 cplot2->cd(1);
 hxfp_engine1->Draw();
 hxfp_eng->Draw("same");
 hxfp_eng->SetLineColor(2);
 cplot2->cd(3);
 hxfp_diff->Add(hxfp_engine1,hxfp_eng,-1);
 hxfp_diff->Draw();
 cplot2->cd(5);
 hxfp_sub->Draw();
 cplot2->cd(2);
 hyfp_engine1->Draw();
 hyfp_eng->Draw("same");
 hyfp_eng->SetLineColor(2);
 cplot2->cd(4);
 hyfp_diff->Add(hyfp_engine1,hyfp_eng,-1);
 hyfp_diff->Draw();
 cplot2->cd(6);
 hyfp_sub->Draw();
TCanvas *cplot3 = new TCanvas("cplot3"," Focal Plane Angles (1 track)  ",800,800);
 cplot3->Divide(2,3);
 cplot3->cd(1);
 hxpfp_engine1->Draw();
 hxpfp_eng->Draw("same");
 hxpfp_eng->SetLineColor(2);
 cplot3->cd(3);
 hxpfp_diff->Add(hxpfp_engine1,hxpfp_eng,-1);
 hxpfp_diff->Draw();
 cplot3->cd(5);
 hxpfp_sub->Draw();
 cplot3->cd(2);
 hypfp_engine1->Draw();
 hypfp_eng->Draw("same");
 hypfp_eng->SetLineColor(2);
 cplot3->cd(4);
 hypfp_diff->Add(hypfp_engine1,hypfp_eng,-1);
 hypfp_diff->Draw();
 cplot3->cd(6);
 hypfp_sub->Draw();
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
