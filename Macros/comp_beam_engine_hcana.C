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

  TH1F *rb_frx_raw_adc[2],*rb_fry_raw_adc[2],*rb_frx_adc[2],*rb_fry_adc[2],*rb_frx[2],*rb_fry[2];
  TH1F *pos_diff[2],*raw_adc_diff[2], *adc_diff[2]; 

  TString comp[2] = {"eng","hcana"};
  Int_t i;

  for (i=0 ; i<2 ;i++) {
    rb_frx_raw_adc[i] =  new TH1F(Form("rb_frx_raw_adc_%s",comp[i].Data()),"frx_raw_adc; Raw ADC value; Events",1200,3200,4400);
    rb_fry_raw_adc[i] =  new TH1F(Form("rb_fry_raw_adc_%s",comp[i].Data()),"fry_raw_adc; Raw ADC value; Events",1200,3200,4400);
    rb_frx_adc[i] =  new TH1F(Form("rb_frx_adc_%s",comp[i].Data()),"frx_adc; ADC value; Events",1000,-500,500);
    rb_fry_adc[i] =  new TH1F(Form("rb_fry_adc_%s",comp[i].Data()),"fry_adc; ADC value; Events",1000,-500,500);
    rb_frx[i] =  new TH1F(Form("rb_frx_%s",comp[i].Data()),"frx; Position (cm); Events",100,-0.5,0.5);
    rb_fry[i] =  new TH1F(Form("rb_fry_%s",comp[i].Data()),"fry; Position (cm); Events",100,-0.5,0.5);

    pos_diff[i] =  new TH1F(Form("pos_diff_%d",i),"Differences in reconstructed position; Difference (cm); Events",100,-0.5,0.5);
    raw_adc_diff[i] =  new TH1F(Form("raw_adc_dif_%d",i),"Differences in raw ADC values; Difference ; Events",1200,3200,4400);
    adc_diff[i] =  new TH1F(Form("adc_diff_%d",i),"Differences in pedestal corrected ADC values; Difference; Events",1000,-500,500);
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
	rb_frx_raw_adc[1]->Fill(myhcana->RB_raster_frx_raw_adc);
	rb_frx_raw_adc[0]->Fill(myengine->fry_raw_adc);
	
	rb_frx_adc[1]->Fill(myhcana->RB_raster_frx_adc);
	rb_frx_adc[0]->Fill(myengine->frx_adc);

	rb_frx[1]->Fill(myhcana->RB_raster_frx);
	rb_frx[0]->Fill(myengine->frx);

	rb_fry_raw_adc[1]->Fill(myhcana->RB_raster_fry_raw_adc);
	rb_fry_raw_adc[0]->Fill(myengine->frx_raw_adc);

	rb_fry_adc[1]->Fill(myhcana->RB_raster_fry_adc);
	rb_fry_adc[0]->Fill(myengine->fry_adc);

	rb_fry[1]->Fill(myhcana->RB_raster_fry);
	rb_fry[0]->Fill(myengine->fry);
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
  rb_frx_raw_adc[0]->Draw();
  rb_frx_raw_adc[1]->Draw("same");
  rb_frx_raw_adc[0]->SetLineColor(2);
  legx = new TLegend(0.15,0.8,0.30,0.88);
  legx->AddEntry(rb_frx_raw_adc[0],"ENGINE","l");
  legx->AddEntry(rb_frx_raw_adc[1],"HCANA","l");
  legx->Draw();

  cx->cd(2);
  raw_adc_diff[0]->Add(rb_frx_raw_adc[1],rb_frx_raw_adc[0],-1);
  raw_adc_diff[0]->Draw();
  raw_adc_diff[0]->SetLineColor(kGreen-2);

  cx->cd(3);
  rb_frx_adc[0]->Draw();
  rb_frx_adc[1]->Draw("same");
  rb_frx_adc[0]->SetLineColor(2);

  cx->cd(4);
  adc_diff[0]->Add(rb_frx_adc[1],rb_frx_adc[0],-1);
  adc_diff[0]->Draw();
  adc_diff[0]->SetLineColor(kGreen-2);

  cx->cd(5);
  rb_frx[0]->Draw();
  rb_frx[1]->Draw("same");
  rb_frx[0]->SetLineColor(2);

  cx->cd(6);
  pos_diff[0]->Add(rb_frx[1],rb_frx[0],-1);
  pos_diff[0]->Draw();
  pos_diff[0]->SetLineColor(kGreen-2);

  // draw Y signals
  TCanvas * cy = new TCanvas("cy","Compare Raster Y Signals",1000,1200);
  cy->Divide(2,3);

  cy->cd(1);
  rb_fry_raw_adc[0]->Draw();
  rb_fry_raw_adc[1]->Draw("same");
  rb_fry_raw_adc[0]->SetLineColor(2);
  legy = new TLegend(0.15,0.8,0.3,0.88);
  legy->AddEntry(rb_fry_raw_adc[0],"ENGINE","l");
  legy->AddEntry(rb_fry_raw_adc[1],"HCANA","l");
  legy->Draw();

  cy->cd(2);
  raw_adc_diff[1]->Add(rb_fry_raw_adc[1],rb_fry_raw_adc[0],-1);
  raw_adc_diff[1]->Draw();
  raw_adc_diff[1]->SetLineColor(kGreen-2);

  cy->cd(3);
  rb_fry_adc[0]->Draw();
  rb_fry_adc[1]->Draw("same");
  rb_fry_adc[0]->SetLineColor(2);

  cy->cd(4);
  adc_diff[1]->Add(rb_fry_adc[1],rb_fry_adc[0],-1);
  adc_diff[1]->Draw();
  adc_diff[1]->SetLineColor(kGreen-2);

  cy->cd(5);
  rb_fry[0]->Draw();
  rb_fry[0]->SetLineColor(2);
  rb_fry[1]->Draw("same");

  cy->cd(6);
  pos_diff[1]->Add(rb_fry[1],rb_fry[0],-1);
  pos_diff[1]->Draw();
  pos_diff[1]->SetLineColor(kGreen-2);

  
}
