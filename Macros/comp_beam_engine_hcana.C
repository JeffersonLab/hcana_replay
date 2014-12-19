/*
Date - 05-05-2014
Author - B.Waidyawansa

Coppied from comp_hms_engine_hcana.C to generate beam comparision plots. Start with raster.

 */

#include "analyze_hcana_tree.h"
#include "analyze_engine_tree.h"
#include <TCanvas.h>
#include <iostream>
#include <fstream>
#include <iomanip>
#include <TStyle.h>

void comp_beam_engine_hcana( TString hcana_file, TString engine_file) {
  analyze_hcana_tree *myhcana = new analyze_hcana_tree(hcana_file,0);
  analyze_engine_tree *myengine = new analyze_engine_tree(engine_file,0);
  Long64_t nent_hcana = myhcana->fChain->GetEntriesFast();
  Long64_t nent_engine = myengine->fChain->GetEntriesFast();
  Long64_t nent_loop=TMath::Min(nent_hcana,nent_engine);
  cout << " hcana entries = " << nent_hcana << " engine entries = " << nent_engine  << endl;
  Long64_t nb_hcana = 0,nb_engine = 0;

  TH1F *comp_frx_raw_adc[2],*comp_fry_raw_adc[2],*comp_frx_adc[2],*comp_fry_adc[2],*comp_frx[2],*comp_fry[2];
  TH1F *pos_diff[2],*raw_adc_diff[2], *adc_diff[2]; 

  TString comp[2] = {"eng","hcana"};
  Int_t i;

  for (i=0 ; i<2 ;i++) {
    comp_frx_raw_adc[i] =  new TH1F(Form("comp_frx_raw_adc_%s",comp[i].Data()),"frx_raw_adc; Raw ADC value; Events",200,3200,4400);
    comp_fry_raw_adc[i] =  new TH1F(Form("comp_fry_raw_adc_%s",comp[i].Data()),"fry_raw_adc; Raw ADC value; Events",200,3200,4400);
    comp_frx_adc[i] =  new TH1F(Form("comp_frx_adc_%s",comp[i].Data()),"frx_adc; ADC value; Events",100,-500,500);
    comp_fry_adc[i] =  new TH1F(Form("comp_fry_adc_%s",comp[i].Data()),"fry_adc; ADC value; Events",100,-500,500);
    comp_frx[i] =  new TH1F(Form("comp_frx_%s",comp[i].Data()),"frx; Position (cm); Events",100,-0.2,0.2);
    comp_fry[i] =  new TH1F(Form("comp_fry_%s",comp[i].Data()),"fry; Position (cm); Events",100,-0.2,0.2);

  }
  TString comp2[2] = {"x","y"};
  for (i=0 ; i<2 ;i++) {
    pos_diff[i] =  new TH1F(Form("pos_diff_%s",comp2[i].Data()),"Differences in reconstructed position; Difference (cm); Events",100,-0.0005,0.0005);
    raw_adc_diff[i] =  new TH1F(Form("raw_adc_dif_%s",comp2[i].Data()),"Differences in raw ADC values; Difference ; Events",100,-.001,.001);
    adc_diff[i] =  new TH1F(Form("adc_diff_%s",comp2[i].Data()),"Differences in pedestal corrected ADC values; Difference; Events",100,-.001,.001);
  }
  //
  char *s = new char[1];
  Long64_t engine_ent=0;
  Long64_t hcana_ent=0;
  for (Long64_t ni=0 ; ni<nent_loop ;ni++) {
      nb_hcana = myhcana->fChain->GetEntry(hcana_ent++);
      nb_engine = myengine->fChain->GetEntry(engine_ent++);
            if (ni%10000 == 0) cout << "event = " << ni << endl;
	    // cout << "event = " << ni << " " << myhcana->g_evnum << " " << myengine->evnum << endl;
      if (myhcana->g_evnum > myengine->evnum) {
      while (myhcana->g_evnum!=myengine->evnum) {
         nb_engine = myengine->fChain->GetEntry(engine_ent++);
      }
      }
      if (myhcana->g_evnum < myengine->evnum) {
      while (myhcana->g_evnum!=myengine->evnum) {
         nb_hcana = myhcana->fChain->GetEntry(hcana_ent++);
      }
      }
      if (myhcana->fEvtHdr_fEvtType==1&& myengine->evtype==1 && myhcana->g_evnum==myengine->evnum) {
	comp_frx_raw_adc[0]->Fill(myengine->frx_raw_adc);
	comp_frx_raw_adc[1]->Fill(myhcana->RB_raster_frx_raw_adc);
	raw_adc_diff[0]->Fill(myhcana->RB_raster_frx_raw_adc-myengine->frx_raw_adc);
	raw_adc_diff[1]->Fill(myhcana->RB_raster_fry_raw_adc-myengine->fry_raw_adc);
	adc_diff[0]->Fill(myhcana->RB_raster_frx_adc-myengine->frx_adc);
	adc_diff[1]->Fill(myhcana->RB_raster_fry_adc-myengine->fry_adc);
	pos_diff[0]->Fill(myhcana->RB_raster_frx-myengine->frx);
	pos_diff[1]->Fill(myhcana->RB_raster_fry-myengine->fry);

	comp_frx_adc[0]->Fill(myengine->frx_adc);
	comp_frx_adc[1]->Fill(myhcana->RB_raster_frx_adc);

	comp_frx[0]->Fill(myengine->frx);
	comp_frx[1]->Fill(myhcana->RB_raster_frx);

	comp_fry_raw_adc[0]->Fill(myengine->fry_raw_adc);
	comp_fry_raw_adc[1]->Fill(myhcana->RB_raster_fry_raw_adc);

	comp_fry_adc[0]->Fill(myengine->fry_adc);
	comp_fry_adc[1]->Fill(myhcana->RB_raster_fry_adc);

	comp_fry[0]->Fill(myengine->fry);
	comp_fry[1]->Fill(myhcana->RB_raster_fry);
      } // if

  } // for loop

  cout << " Hcana File= " << hcana_file << endl;
  cout << " Engine File= " << engine_file << endl;
  gStyle->Reset();

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

  //draw X signals
  TCanvas * cx = new TCanvas("cx","Compare Raster X Signals",1000,1200);
  cx->Divide(2,3);

  cx->cd(1);
  comp_frx_raw_adc[0]->Draw();
  comp_frx_raw_adc[0]->SetLineColor(2);
  comp_frx_raw_adc[1]->Draw("same");
  legx = new TLegend(0.15,0.8,0.30,0.88);
  legx->AddEntry(comp_frx_raw_adc[0],"ENGINE","l");
  legx->AddEntry(comp_frx_raw_adc[1],"HCANA","l");
  legx->Draw();

  cx->cd(2);
  raw_adc_diff[0]->Draw();

  cx->cd(3);
  comp_frx_adc[0]->Draw();
  comp_frx_adc[0]->SetLineColor(2);
  comp_frx_adc[1]->Draw("same");

  cx->cd(4);
  adc_diff[0]->Draw();

  cx->cd(5);
  comp_frx[0]->Draw();
  comp_frx[0]->SetLineColor(2);
  comp_frx[1]->Draw("same");

  cx->cd(6);
  pos_diff[0]->Draw();

  // draw Y signals
  TCanvas * cy = new TCanvas("cy","Compare Raster Y Signals",1000,1200);
  cy->Divide(2,3);

  cy->cd(1);
  comp_fry_raw_adc[0]->Draw();
  comp_fry_raw_adc[0]->SetLineColor(2);
  comp_fry_raw_adc[1]->Draw("same");
  legy = new TLegend(0.15,0.8,0.3,0.88);
  legy->AddEntry(comp_fry_raw_adc[0],"ENGINE","l");
  legy->AddEntry(comp_fry_raw_adc[1],"HCANA","l");
  legy->Draw();

  cy->cd(2);
  raw_adc_diff[1]->Draw();

  cy->cd(3);
  comp_fry_adc[0]->Draw();
  comp_fry_adc[0]->SetLineColor(2);
  comp_fry_adc[1]->Draw("same");

  cy->cd(4);
  adc_diff[1]->Draw();

  cy->cd(5);
  comp_fry[0]->Draw();
  comp_fry[0]->SetLineColor(2);
  comp_fry[1]->Draw("same");

  cy->cd(6);
  pos_diff[1]->Draw();
  
}
