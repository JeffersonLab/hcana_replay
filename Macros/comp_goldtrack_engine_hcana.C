#include "analyze_hcana_tree.h"
#include "analyze_engine_tree.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>

void comp_goldtrack_engine_hcana( TString hcana_file, TString engine_file) {
  analyze_hcana_tree *myhcana = new analyze_hcana_tree(hcana_file,0);
  analyze_engine_tree *myengine = new analyze_engine_tree(engine_file,0);
  Long64_t nent_hcana = myhcana->fChain->GetEntriesFast();
  Long64_t nent_engine = myengine->fChain->GetEntriesFast();
  Long64_t nent_loop=TMath::Min(nent_hcana,nent_engine);

  cout << " hcana entries = " << nent_hcana << " engine entries = " << nent_engine  << endl;
  Long64_t nb_hcana = 0,nb_engine = 0;

  TH1F *comp_xtar[2],*comp_ytar[2],*comp_xptar[2],*comp_yptar[2],*comp_delta[2],*comp_mom[2],*comp_goldt[2],*comp_chimin[2];
  TH1F *diff_delta[1],*diff_mom[1],*diff_goldt[1],*diff_chi2[1];
  
  TH1F *pos_diff[2],*ang_diff[2],*del_diff[2]; 

  TString comp[2] = {"eng","hcana"};
  TString diff[1] = {"difference"};
  Int_t i;

  diff_chi2[0]  =  new TH1F(Form("diff_chi2_%s",  comp[i].Data()), Form("Differences in chimin  %s ;       Difference (#);   Events", diff[0].Data()),2000,-6.0,6.0);
  diff_goldt[0] =  new TH1F(Form("diff_goldt_%s", comp[i].Data()), Form("Differences in golden track  %s ; Difference (#);   Events", diff[0].Data()),2000,-10.0,10.0);
  diff_delta[0] =  new TH1F(Form("diff_delta_%s", comp[i].Data()), Form("Differences in delta  %s ;        Difference (%);   Events", diff[0].Data()),2000,-0.005,0.005);
  diff_mom[0]   =  new TH1F(Form("diff_mom_%s",   comp[i].Data()), Form("Differences in momentum  %s ;     Difference (GeV); Events", diff[0].Data()),2000,-0.005,0.005);

  for (i=0 ; i<2 ;i++) {
    comp_chimin[i] =  new TH1F(Form("comp_chimin_%s", comp[i].Data()), "Golden Track chi2/ndf; Golden Track chi2/ndf; Events",  100,0.,1000);
    comp_goldt[i]  =  new TH1F(Form("comp_goldt_%s",  comp[i].Data()), "Golden Track; Golden Track number; Events",             100,-1.,10);
    comp_xtar[i]   =  new TH1F(Form("comp_xtar_%s",   comp[i].Data()), "Xtar; Xtar (cm); Events",                               200,-10.,10);
    comp_ytar[i]   =  new TH1F(Form("comp_ytar_%s",   comp[i].Data()), "Ytar; Ytar (cm); Events",                               200,-10,10);
    comp_xptar[i]  =  new TH1F(Form("comp_xptar_%s",  comp[i].Data()), "XPtar; Xptar (mr); Events",                             100,-100,100);
    comp_yptar[i]  =  new TH1F(Form("comp_yptar_%s",  comp[i].Data()), "YPtar; YPtar (mr); Events",                             100,-50,50);
    comp_delta[i]  =  new TH1F(Form("comp_delta_%s",  comp[i].Data()), "Delta; Delta (%); Events",                              100,-12,12.);
    comp_mom[i]    =  new TH1F(Form("comp_mom_%s"  ,  comp[i].Data()), "Momentum; Momentum (GeV); Events",                      100,0.5,1.);
  }
  TString comp2[2] = {"x","y"};
  TString comp3[2] = {"dx","dy"};
  TString comp4[2] = {"delta","mom"};
  for (i=0 ; i<2 ;i++) {
    pos_diff[i] =  new TH1F(Form("pos_diff_%s",comp2[i].Data()), Form("Differences in reconstructed  %s ; Difference (cm);  Events", comp2[i].Data()),2000,-0.005,0.005);
    ang_diff[i] =  new TH1F(Form("ang_diff_%s",comp2[i].Data()), Form("Differences in reconstructed  %s ; Difference (mr);  Events", comp2[i].Data()),2000,-0.00005,0.00005);
    del_diff[i] =  new TH1F(Form("del_diff_%s",comp2[i].Data()), Form("Differences in reconstructed  %s ; Difference ;      Events", comp2[i].Data()),2000,-0.0005,0.0005);
  }
  //
  char *s = new char[1];
  Int_t eng_goodtr;
  Int_t eng_hdc_ngoodtr;
  Int_t hca_hdc_ngoodtr;

  Long64_t engine_ent=0;
  for (Long64_t ni=0 ; ni<nent_loop ;ni++) {
      nb_hcana = myhcana->fChain->GetEntry(ni);
      nb_engine = myengine->fChain->GetEntry(engine_ent++);
      while (myhcana->g_evnum!=myengine->evnum) {
	nb_engine = myengine->fChain->GetEntry(engine_ent++);
      }
      if (myhcana->fEvtHdr_fEvtType==1&& myengine->evtype==1 && myhcana->g_evnum==myengine->evnum && myengine->hdc_ntr !=0 ) {

	eng_hdc_ngoodtr = myengine->hdc_ngoodtr - 1;
	hca_hdc_ngoodtr = myhcana->H_gold_index;

	comp_goldt[0]->Fill(eng_hdc_ngoodtr);
	comp_chimin[0]->Fill(myengine->hdc_chi2min);
	comp_xtar[0]->Fill(myengine->frx);
	comp_ytar[0]->Fill(myengine->hdc_ytg[eng_hdc_ngoodtr]);
	comp_yptar[0]->Fill(1000*myengine->hdc_yptg[eng_hdc_ngoodtr]);
	comp_xptar[0]->Fill(1000*myengine->hdc_xptg[eng_hdc_ngoodtr]);
	comp_delta[0]->Fill(myengine->hdc_delta[eng_hdc_ngoodtr]);
	comp_mom[0]->Fill(myengine->hdc_ptar[eng_hdc_ngoodtr]);

	comp_goldt[1]->Fill(hca_hdc_ngoodtr);
	comp_chimin[1]->Fill( myhcana->H_tr_chi2[hca_hdc_ngoodtr] / myhcana->H_tr_ndof[hca_hdc_ngoodtr]);
	comp_xtar[1]->Fill(myhcana->H_gold_x);
	comp_ytar[1]->Fill(myhcana->H_gold_y);
	comp_xptar[1]->Fill(1000*myhcana->H_gold_th);
	comp_yptar[1]->Fill(1000*myhcana->H_gold_ph);
	comp_delta[1]->Fill(myhcana->H_gold_dp);
	comp_mom[1]->Fill(myhcana->H_gold_p);

	diff_chi2[0]->Fill(myengine->hdc_chi2min-( myhcana->H_tr_chi2[hca_hdc_ngoodtr] / myhcana->H_tr_ndof[hca_hdc_ngoodtr] ));
	diff_goldt[0]->Fill(eng_hdc_ngoodtr - hca_hdc_ngoodtr);
	diff_delta[0]->Fill(myengine->hdc_delta[eng_hdc_ngoodtr]-myhcana->H_gold_dp);
	diff_mom[0]->Fill(myengine->hdc_ptar[eng_hdc_ngoodtr]-myhcana->H_gold_p);

        pos_diff[0]->Fill(myengine->frx-myhcana->H_gold_x);
        pos_diff[1]->Fill(myengine->hdc_ytg[eng_hdc_ngoodtr]-myhcana->H_gold_y);

        ang_diff[0]->Fill(myengine->hdc_xptg[eng_hdc_ngoodtr]-myhcana->H_gold_th);
        ang_diff[1]->Fill(myengine->hdc_yptg[eng_hdc_ngoodtr]-myhcana->H_gold_ph);
        if (1 == -1 &&TMath::Abs(myengine->hdc_ytg[eng_hdc_ngoodtr]-myhcana->H_gold_y) > 1.) {
          myhcana->PrintTrack(ni);
          myengine->PrintTrack(ni);
          cout << " Hit return to see next event " << endl;
          gets(s);
          if ( s == "q") return;
	}          
      } // if

  } // for loop

  cout << " Hcana File= " << hcana_file << endl;
  cout << " Engine File= " << engine_file << endl;
  gStyle->Reset();

  //  return 0;

  TStyle *MyStyle = new TStyle("MyStyle"," My Style");
  //  MyStyle->SetOptStat(10000010);
  MyStyle->SetOptStat("i");

  MyStyle->SetTitleOffset(1.5,"Y");
  MyStyle->SetTitleOffset(.7,"X");
  MyStyle->SetLabelSize(0.04,"XY");
  MyStyle->SetTitleSize(0.06,"XY");
  MyStyle->SetTitleH(0.04);
  MyStyle->SetPadLeftMargin(0.12);
  MyStyle->SetStatFontSize(0.2);
  MyStyle->SetTitleFontSize(0.1);
  gROOT->SetStyle("MyStyle");

  //
 Int_t num_tracks[2][10];
 Int_t sum_tracks[2][10];
 Int_t good_events;
 good_events=ang_diff[0]->Integral();
 Double_t num_pass_x,num_pass_y;
 Double_t num_pass_xp,num_pass_yp;
 Double_t ang_lo_pass,pos_lo_pass;
 printf("%-5s %+10s %+10s %+10s %+10s %+10s \n","target","  cut "," XP "," YP "," X "," Y ");
  Int_t binlo[4]={1,901,991,1000},binhi[4]={2000,1101,1011,1001};

     for (j=0 ; j<4 ;j++) {
     num_pass_xp=ang_diff[0]->Integral(binlo[j],binhi[j]); 
     num_pass_yp=ang_diff[1]->Integral(binlo[j],binhi[j]); 
     num_pass_x=pos_diff[0]->Integral(binlo[j],binhi[j]); 
     num_pass_y=pos_diff[1]->Integral(binlo[j],binhi[j]); 
     ang_lo_pass=ang_diff[0]->GetBinLowEdge(binlo[j]); 
     pos_lo_pass=pos_diff[0]->GetBinLowEdge(binlo[j]); 
     printf("%5d   %8.4e  %10d  %10d  %10d  %10d %5.4f %5.4f %5.4f %5.4f   \n",j+1,ang_lo_pass,num_pass_xp,num_pass_yp,num_pass_x,num_pass_y,num_pass_xp/good_events,num_pass_yp/good_events,num_pass_x/good_events,num_pass_y/good_events);
     }

  //
  
  TCanvas * cx = new TCanvas("cx","Compare Target",1000,1200);
  cx->Divide(2,4);

  cx->cd(1);
  comp_xtar[0]->Draw();
  comp_xtar[0]->SetLineColor(2);
  comp_xtar[1]->Draw("same");
  legx = new TLegend(0.15,0.8,0.30,0.88);
  legx->AddEntry(comp_xtar[0],"ENGINE","l");
  legx->AddEntry(comp_xtar[1],"HCANA","l");
  legx->Draw();

  cx->cd(2);
  pos_diff[0]->Draw();

  cx->cd(3);
  comp_ytar[0]->Draw();
  comp_ytar[0]->SetLineColor(2);
  comp_ytar[1]->Draw("same");

  cx->cd(4);
  pos_diff[1]->Draw();

  cx->cd(5);
  comp_yptar[0]->Draw();
  comp_yptar[0]->SetLineColor(2);
  comp_yptar[1]->Draw("same");

  cx->cd(6);
  ang_diff[0]->Draw();
  cx->cd(7);
  comp_xptar[0]->Draw();
  comp_xptar[0]->SetLineColor(2);
  comp_xptar[1]->Draw("same");

  cx->cd(8);
  ang_diff[1]->Draw();

  cx->cd(0);
  cx->Update();

  //
  TCanvas * cy = new TCanvas("cy","Compare Delta and mom",1000,1200);
  cy->Divide(2,2);

  cy->cd(1);
  comp_delta[0]->Draw();
  comp_delta[0]->SetLineColor(2);
  comp_delta[1]->Draw("same");
  legy = new TLegend(0.15,0.8,0.3,0.88);
  legy->AddEntry(comp_delta[0],"ENGINE","l");
  legy->AddEntry(comp_delta[1],"HCANA","l");
  legy->Draw();

  cy->cd(3);
  comp_mom[0]->Draw();
  comp_mom[0]->SetLineColor(2);
  comp_mom[1]->Draw("same");

  //  gStyle->Reset();

  cy->cd(2)->SetLogy();
  comp_goldt[0]->Draw();
  comp_goldt[0]->SetLineColor(2);
  comp_goldt[1]->Draw("same");
  legx = new TLegend(0.15,0.8,0.30,0.88);
  legx->AddEntry(comp_goldt[0],"ENGINE","l");
  legx->AddEntry(comp_goldt[1],"HCANA","l");
  legx->Draw();

  cy->cd(4)->SetLogy();
  comp_chimin[0]->Draw();
  comp_chimin[0]->SetLineColor(2);
  comp_chimin[1]->Draw("same");
  legx = new TLegend(0.15,0.8,0.30,0.88);
  legx->AddEntry(comp_goldt[0],"ENGINE","l");
  legx->AddEntry(comp_goldt[1],"HCANA","l");
  legx->Draw();

  cy->cd(0);
  cy->Update();

  TCanvas * cz = new TCanvas("cz","Differences Delta, mom, golden tracka and chimin",1000,1200);
  cz->Divide(2,2);

  cz->cd(1)->SetLogy();
  diff_delta[0]->Draw();

  cz->cd(2)->SetLogy();
  diff_mom[0]->Draw();

  cz->cd(3)->SetLogy();
  diff_goldt[0]->Draw();

  cz->cd(4)->SetLogy();
  diff_chi2[0]->Draw();

  cz->cd(0);
  cz->Update();
  
}
