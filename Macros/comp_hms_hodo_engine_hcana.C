#include "analyze_hcana_tree.h"
#include "analyze_engine_tree.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>
#include <TH1F.h>
#include <TCanvas.h>
#include <TROOT.h>
#include <TMath.h>
#include <TProfile.h>
void comp_hms_hodo_engine_hcana( TString hcana_file, TString engine_file) {
  analyze_hcana_tree *myhcana = new analyze_hcana_tree(hcana_file,0);
  analyze_engine_tree *myengine = new analyze_engine_tree(engine_file,0);
  Long64_t nent_hcana = myhcana->fChain->GetEntriesFast();
  Long64_t nent_engine = myengine->fChain->GetEntriesFast();
  Long64_t nent_loop=TMath::Min(nent_hcana,nent_engine);
  cout << " hcana entries = " << nent_hcana << " engine entries = " << nent_engine  << endl;
  Long64_t nb_hcana = 0,nb_engine = 0;
  //
  const int NumPl=4;
 TH1F *hfptime_hcana[NumPl];
 TH1F *hfptime_engine[NumPl];
 TH1F *hfptime_diff[NumPl];
  TH1F *hStarttime_hcana = new TH1F("hStarttime_hcana",";Start time; Counts",100,0,50);
  TH1F *hStarttime_engine = new TH1F("hStarttime_engine",";Start time; Counts",100,0,50);
  TH1F *hStarttime_diff = new TH1F("hStarttime_diff",";Engine-HCANA Start time; Counts",100,-0.00001,0.00001);
  const char *Plname[NumPl]={"1x","1y","2x","2y"};
  Int_t i;
  for (i=0 ; i<NumPl ;i++) {
    hfptime_hcana[i] = new TH1F(Form("hfptime_hcana_%s",Plname[i]),Form("Plane %s ; FP time ; Counts ",Plname[i]),100,0.,50.);
    hfptime_engine[i] = new TH1F(Form("hfptime_engine_%s",Plname[i]),Form("Plane %s ; FP time ; Counts ",Plname[i]),100,0.,50.);
    hfptime_diff[i] = new TH1F(Form("hfptime_diff_%s",Plname[i]),Form("Plane %s ;Engine-hcana FP time ; Counts ",Plname[i]),100,-.00001,.00001);
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
	hfptime_hcana[0]->Fill(myhcana->H_hod_1x_fptime);		       
	hfptime_hcana[1]->Fill(myhcana->H_hod_1y_fptime);		       
	hfptime_hcana[2]->Fill(myhcana->H_hod_2x_fptime);		       
	hfptime_hcana[3]->Fill(myhcana->H_hod_2y_fptime);		       
	hStarttime_hcana->Fill(myhcana->H_hod_starttime);		       
	hfptime_engine[0]->Fill(myengine->hscin_rfptime[0]);		       
	hfptime_engine[1]->Fill(myengine->hscin_rfptime[1]);		       
	hfptime_engine[2]->Fill(myengine->hscin_rfptime[2]);		       
	hfptime_engine[3]->Fill(myengine->hscin_rfptime[3]);
	hStarttime_engine->Fill(myengine->hscin_starttime);
	hStarttime_diff->Fill(myengine->hscin_starttime-myhcana->H_hod_starttime);
	hfptime_diff[0]->Fill(myengine->hscin_rfptime[0]-myhcana->H_hod_1x_fptime);		       
	hfptime_diff[1]->Fill(myengine->hscin_rfptime[1]-myhcana->H_hod_1y_fptime);		       
	hfptime_diff[2]->Fill(myengine->hscin_rfptime[2]-myhcana->H_hod_2x_fptime);		       
	hfptime_diff[3]->Fill(myengine->hscin_rfptime[3]-myhcana->H_hod_2y_fptime);
        if (TMath::Abs(myengine->hscin_rfptime[3]-myhcana->H_hod_2y_fptime) > 0.01) {
	  cout << " Event  number = " <<  myhcana->g_evnum << " " << myengine->evnum << endl ;
          cout << " Engine fptimes = " << myengine->hscin_rfptime[0] << " "<< myengine->hscin_rfptime[1] << " " << myengine->hscin_rfptime[2] << " "<< myengine->hscin_rfptime[3] << " " << myengine->hscin_starttime << endl ;
          cout << " HCANA fptimes = " << myhcana->H_hod_1x_fptime << " "<< myhcana->H_hod_1y_fptime << " " << myhcana->H_hod_2x_fptime << " "<< myhcana->H_hod_2y_fptime << " " << myhcana->H_hod_starttime << " " << myhcana->H_hod_hgoodstarttime << endl ;
          cout << " Hit return to see next event " << endl;
          gets(s);
          if ( s == "q") return;
	}
      }
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
 //
TCanvas *cplot1 = new TCanvas("cplot1"," Focal plane times ",800,800);
 cplot1->Divide(2,2);
  for (i=0 ; i<NumPl ;i++) {
   cplot1->cd(i+1);
   hfptime_hcana[i]->Draw();
   
   hfptime_engine[i]->Draw("same");
   hfptime_engine[i]->SetLineColor(2);
  }
  //
TCanvas *cplot2 = new TCanvas("cplot2"," Focal plane times ",800,800);
 cplot2->Divide(2,2);
  for (i=0 ; i<NumPl ;i++) {
   cplot2->cd(i+1);
   hfptime_diff[i]->Draw();
  }
  //
TCanvas *cplot3 = new TCanvas("cplot3"," Starttime times ",800,800);
 cplot3->Divide(1,2);
   cplot3->cd(1);
   hStarttime_hcana->Draw();
   hStarttime_engine->Draw();
   hStarttime_engine->SetLineColor(2);
   cplot3->cd(2);
   hStarttime_diff->Draw();
}
