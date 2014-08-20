//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec 12 10:35:25 2013 by ROOT version 5.34/01
// from TTree T/Hall A Analyzer Output DST
// found on file: replay_sos_52949.root
//////////////////////////////////////////////////////////

#ifndef analyze_hcana_tree_h
#define analyze_hcana_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class analyze_hcana_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Int_t           Ndata_H_aero_aneg;
   Double_t        H_aero_aneg[8];   //[Ndata.H.aero.aneg]
   Int_t           Ndata_H_aero_aneg_p;
   Double_t        H_aero_aneg_p[8];   //[Ndata.H.aero.aneg_p]
   Int_t           Ndata_H_aero_apos;
   Double_t        H_aero_apos[8];   //[Ndata.H.aero.apos]
   Int_t           Ndata_H_aero_apos_p;
   Double_t        H_aero_apos_p[8];   //[Ndata.H.aero.apos_p]
   Int_t           Ndata_H_aero_neg_npe;
   Double_t        H_aero_neg_npe[8];   //[Ndata.H.aero.neg_npe]
   Int_t           Ndata_H_aero_negadchits;
   Double_t        H_aero_negadchits[1];   //[Ndata.H.aero.negadchits]
   Int_t           Ndata_H_aero_negtdchits;
   Double_t        H_aero_negtdchits[1];   //[Ndata.H.aero.negtdchits]
   Int_t           Ndata_H_aero_pos_npe;
   Double_t        H_aero_pos_npe[8];   //[Ndata.H.aero.pos_npe]
   Int_t           Ndata_H_aero_posadchits;
   Double_t        H_aero_posadchits[1];   //[Ndata.H.aero.posadchits]
   Int_t           Ndata_H_aero_postdchits;
   Double_t        H_aero_postdchits[1];   //[Ndata.H.aero.postdchits]
   Int_t           Ndata_H_aero_tneg;
   Double_t        H_aero_tneg[8];   //[Ndata.H.aero.tneg]
   Int_t           Ndata_H_aero_tpos;
   Double_t        H_aero_tpos[8];   //[Ndata.H.aero.tpos]
   Int_t           Ndata_H_cal_1pr_aneg;
   Double_t        H_cal_1pr_aneg[13];   //[Ndata.H.cal.1pr.aneg]
   Int_t           Ndata_H_cal_1pr_aneg_p;
   Double_t        H_cal_1pr_aneg_p[13];   //[Ndata.H.cal.1pr.aneg_p]
   Int_t           Ndata_H_cal_1pr_apos;
   Double_t        H_cal_1pr_apos[13];   //[Ndata.H.cal.1pr.apos]
   Int_t           Ndata_H_cal_1pr_apos_p;
   Double_t        H_cal_1pr_apos_p[13];   //[Ndata.H.cal.1pr.apos_p]
   Int_t           Ndata_H_cal_1pr_emean;
   Double_t        H_cal_1pr_emean[13];   //[Ndata.H.cal.1pr.emean]
   Int_t           Ndata_H_cal_1pr_eneg;
   Double_t        H_cal_1pr_eneg[13];   //[Ndata.H.cal.1pr.eneg]
   Int_t           Ndata_H_cal_1pr_epos;
   Double_t        H_cal_1pr_epos[13];   //[Ndata.H.cal.1pr.epos]
   Int_t           Ndata_H_cal_1pr_negadchits;
   Double_t        H_cal_1pr_negadchits[1];   //[Ndata.H.cal.1pr.negadchits]
   Int_t           Ndata_H_cal_1pr_posadchits;
   Double_t        H_cal_1pr_posadchits[1];   //[Ndata.H.cal.1pr.posadchits]
   Int_t           Ndata_H_cal_2ta_aneg;
   Double_t        H_cal_2ta_aneg[13];   //[Ndata.H.cal.2ta.aneg]
   Int_t           Ndata_H_cal_2ta_aneg_p;
   Double_t        H_cal_2ta_aneg_p[13];   //[Ndata.H.cal.2ta.aneg_p]
   Int_t           Ndata_H_cal_2ta_apos;
   Double_t        H_cal_2ta_apos[13];   //[Ndata.H.cal.2ta.apos]
   Int_t           Ndata_H_cal_2ta_apos_p;
   Double_t        H_cal_2ta_apos_p[13];   //[Ndata.H.cal.2ta.apos_p]
   Int_t           Ndata_H_cal_2ta_emean;
   Double_t        H_cal_2ta_emean[13];   //[Ndata.H.cal.2ta.emean]
   Int_t           Ndata_H_cal_2ta_eneg;
   Double_t        H_cal_2ta_eneg[13];   //[Ndata.H.cal.2ta.eneg]
   Int_t           Ndata_H_cal_2ta_epos;
   Double_t        H_cal_2ta_epos[13];   //[Ndata.H.cal.2ta.epos]
   Int_t           Ndata_H_cal_2ta_negadchits;
   Double_t        H_cal_2ta_negadchits[1];   //[Ndata.H.cal.2ta.negadchits]
   Int_t           Ndata_H_cal_2ta_posadchits;
   Double_t        H_cal_2ta_posadchits[1];   //[Ndata.H.cal.2ta.posadchits]
   Int_t           Ndata_H_cal_3ta_aneg;
   Double_t        H_cal_3ta_aneg[13];   //[Ndata.H.cal.3ta.aneg]
   Int_t           Ndata_H_cal_3ta_aneg_p;
   Double_t        H_cal_3ta_aneg_p[13];   //[Ndata.H.cal.3ta.aneg_p]
   Int_t           Ndata_H_cal_3ta_apos;
   Double_t        H_cal_3ta_apos[13];   //[Ndata.H.cal.3ta.apos]
   Int_t           Ndata_H_cal_3ta_apos_p;
   Double_t        H_cal_3ta_apos_p[13];   //[Ndata.H.cal.3ta.apos_p]
   Int_t           Ndata_H_cal_3ta_emean;
   Double_t        H_cal_3ta_emean[13];   //[Ndata.H.cal.3ta.emean]
   Int_t           Ndata_H_cal_3ta_eneg;
   Double_t        H_cal_3ta_eneg[13];   //[Ndata.H.cal.3ta.eneg]
   Int_t           Ndata_H_cal_3ta_epos;
   Double_t        H_cal_3ta_epos[13];   //[Ndata.H.cal.3ta.epos]
   Int_t           Ndata_H_cal_3ta_negadchits;
   Double_t        H_cal_3ta_negadchits[1];   //[Ndata.H.cal.3ta.negadchits]
   Int_t           Ndata_H_cal_3ta_posadchits;
   Double_t        H_cal_3ta_posadchits[1];   //[Ndata.H.cal.3ta.posadchits]
   Int_t           Ndata_H_cal_4ta_aneg;
   Double_t        H_cal_4ta_aneg[13];   //[Ndata.H.cal.4ta.aneg]
   Int_t           Ndata_H_cal_4ta_aneg_p;
   Double_t        H_cal_4ta_aneg_p[13];   //[Ndata.H.cal.4ta.aneg_p]
   Int_t           Ndata_H_cal_4ta_apos;
   Double_t        H_cal_4ta_apos[13];   //[Ndata.H.cal.4ta.apos]
   Int_t           Ndata_H_cal_4ta_apos_p;
   Double_t        H_cal_4ta_apos_p[13];   //[Ndata.H.cal.4ta.apos_p]
   Int_t           Ndata_H_cal_4ta_emean;
   Double_t        H_cal_4ta_emean[13];   //[Ndata.H.cal.4ta.emean]
   Int_t           Ndata_H_cal_4ta_eneg;
   Double_t        H_cal_4ta_eneg[13];   //[Ndata.H.cal.4ta.eneg]
   Int_t           Ndata_H_cal_4ta_epos;
   Double_t        H_cal_4ta_epos[13];   //[Ndata.H.cal.4ta.epos]
   Int_t           Ndata_H_cal_4ta_negadchits;
   Double_t        H_cal_4ta_negadchits[1];   //[Ndata.H.cal.4ta.negadchits]
   Int_t           Ndata_H_cal_4ta_posadchits;
   Double_t        H_cal_4ta_posadchits[1];   //[Ndata.H.cal.4ta.posadchits]
   Int_t           Ndata_H_cher_adc;
   Double_t        H_cher_adc[2];   //[Ndata.H.cher.adc]
   Int_t           Ndata_H_cher_adc_p;
   Double_t        H_cher_adc_p[2];   //[Ndata.H.cher.adc_p]
   Int_t           Ndata_H_cher_npe;
   Double_t        H_cher_npe[2];   //[Ndata.H.cher.npe]
   Int_t           Ndata_H_cher_phototubes;
   Double_t        H_cher_phototubes[2];   //[Ndata.H.cher.phototubes]
   Int_t           Ndata_H_dc_1u1_dist;
   Double_t        H_dc_1u1_dist[1];   //[Ndata.H.dc.1u1.dist]
   Int_t           Ndata_H_dc_1u1_rawtdc;
   Double_t        H_dc_1u1_rawtdc[1];   //[Ndata.H.dc.1u1.rawtdc]
   Int_t           Ndata_H_dc_1u1_tdchits;
   Double_t        H_dc_1u1_tdchits[1];   //[Ndata.H.dc.1u1.tdchits]
   Int_t           Ndata_H_dc_1u1_time;
   Double_t        H_dc_1u1_time[1];   //[Ndata.H.dc.1u1.time]
   Int_t           Ndata_H_dc_1v1_dist;
   Double_t        H_dc_1v1_dist[1];   //[Ndata.H.dc.1v1.dist]
   Int_t           Ndata_H_dc_1v1_rawtdc;
   Double_t        H_dc_1v1_rawtdc[1];   //[Ndata.H.dc.1v1.rawtdc]
   Int_t           Ndata_H_dc_1v1_tdchits;
   Double_t        H_dc_1v1_tdchits[1];   //[Ndata.H.dc.1v1.tdchits]
   Int_t           Ndata_H_dc_1v1_time;
   Double_t        H_dc_1v1_time[1];   //[Ndata.H.dc.1v1.time]
   Int_t           Ndata_H_dc_1x1_dist;
   Double_t        H_dc_1x1_dist[1];   //[Ndata.H.dc.1x1.dist]
   Int_t           Ndata_H_dc_1x1_rawtdc;
   Double_t        H_dc_1x1_rawtdc[1];   //[Ndata.H.dc.1x1.rawtdc]
   Int_t           Ndata_H_dc_1x1_tdchits;
   Double_t        H_dc_1x1_tdchits[1];   //[Ndata.H.dc.1x1.tdchits]
   Int_t           Ndata_H_dc_1x1_time;
   Double_t        H_dc_1x1_time[1];   //[Ndata.H.dc.1x1.time]
   Int_t           Ndata_H_dc_1x2_dist;
   Double_t        H_dc_1x2_dist[1];   //[Ndata.H.dc.1x2.dist]
   Int_t           Ndata_H_dc_1x2_rawtdc;
   Double_t        H_dc_1x2_rawtdc[1];   //[Ndata.H.dc.1x2.rawtdc]
   Int_t           Ndata_H_dc_1x2_tdchits;
   Double_t        H_dc_1x2_tdchits[1];   //[Ndata.H.dc.1x2.tdchits]
   Int_t           Ndata_H_dc_1x2_time;
   Double_t        H_dc_1x2_time[1];   //[Ndata.H.dc.1x2.time]
   Int_t           Ndata_H_dc_1y1_dist;
   Double_t        H_dc_1y1_dist[1];   //[Ndata.H.dc.1y1.dist]
   Int_t           Ndata_H_dc_1y1_rawtdc;
   Double_t        H_dc_1y1_rawtdc[1];   //[Ndata.H.dc.1y1.rawtdc]
   Int_t           Ndata_H_dc_1y1_tdchits;
   Double_t        H_dc_1y1_tdchits[1];   //[Ndata.H.dc.1y1.tdchits]
   Int_t           Ndata_H_dc_1y1_time;
   Double_t        H_dc_1y1_time[1];   //[Ndata.H.dc.1y1.time]
   Int_t           Ndata_H_dc_1y2_dist;
   Double_t        H_dc_1y2_dist[1];   //[Ndata.H.dc.1y2.dist]
   Int_t           Ndata_H_dc_1y2_rawtdc;
   Double_t        H_dc_1y2_rawtdc[1];   //[Ndata.H.dc.1y2.rawtdc]
   Int_t           Ndata_H_dc_1y2_tdchits;
   Double_t        H_dc_1y2_tdchits[1];   //[Ndata.H.dc.1y2.tdchits]
   Int_t           Ndata_H_dc_1y2_time;
   Double_t        H_dc_1y2_time[1];   //[Ndata.H.dc.1y2.time]
   Int_t           Ndata_H_dc_2u1_dist;
   Double_t        H_dc_2u1_dist[1];   //[Ndata.H.dc.2u1.dist]
   Int_t           Ndata_H_dc_2u1_rawtdc;
   Double_t        H_dc_2u1_rawtdc[1];   //[Ndata.H.dc.2u1.rawtdc]
   Int_t           Ndata_H_dc_2u1_tdchits;
   Double_t        H_dc_2u1_tdchits[1];   //[Ndata.H.dc.2u1.tdchits]
   Int_t           Ndata_H_dc_2u1_time;
   Double_t        H_dc_2u1_time[1];   //[Ndata.H.dc.2u1.time]
   Int_t           Ndata_H_dc_2v1_dist;
   Double_t        H_dc_2v1_dist[1];   //[Ndata.H.dc.2v1.dist]
   Int_t           Ndata_H_dc_2v1_rawtdc;
   Double_t        H_dc_2v1_rawtdc[1];   //[Ndata.H.dc.2v1.rawtdc]
   Int_t           Ndata_H_dc_2v1_tdchits;
   Double_t        H_dc_2v1_tdchits[1];   //[Ndata.H.dc.2v1.tdchits]
   Int_t           Ndata_H_dc_2v1_time;
   Double_t        H_dc_2v1_time[1];   //[Ndata.H.dc.2v1.time]
   Int_t           Ndata_H_dc_2x1_dist;
   Double_t        H_dc_2x1_dist[1];   //[Ndata.H.dc.2x1.dist]
   Int_t           Ndata_H_dc_2x1_rawtdc;
   Double_t        H_dc_2x1_rawtdc[1];   //[Ndata.H.dc.2x1.rawtdc]
   Int_t           Ndata_H_dc_2x1_tdchits;
   Double_t        H_dc_2x1_tdchits[1];   //[Ndata.H.dc.2x1.tdchits]
   Int_t           Ndata_H_dc_2x1_time;
   Double_t        H_dc_2x1_time[1];   //[Ndata.H.dc.2x1.time]
   Int_t           Ndata_H_dc_2x2_dist;
   Double_t        H_dc_2x2_dist[1];   //[Ndata.H.dc.2x2.dist]
   Int_t           Ndata_H_dc_2x2_rawtdc;
   Double_t        H_dc_2x2_rawtdc[1];   //[Ndata.H.dc.2x2.rawtdc]
   Int_t           Ndata_H_dc_2x2_tdchits;
   Double_t        H_dc_2x2_tdchits[1];   //[Ndata.H.dc.2x2.tdchits]
   Int_t           Ndata_H_dc_2x2_time;
   Double_t        H_dc_2x2_time[1];   //[Ndata.H.dc.2x2.time]
   Int_t           Ndata_H_dc_2y1_dist;
   Double_t        H_dc_2y1_dist[1];   //[Ndata.H.dc.2y1.dist]
   Int_t           Ndata_H_dc_2y1_rawtdc;
   Double_t        H_dc_2y1_rawtdc[1];   //[Ndata.H.dc.2y1.rawtdc]
   Int_t           Ndata_H_dc_2y1_tdchits;
   Double_t        H_dc_2y1_tdchits[1];   //[Ndata.H.dc.2y1.tdchits]
   Int_t           Ndata_H_dc_2y1_time;
   Double_t        H_dc_2y1_time[1];   //[Ndata.H.dc.2y1.time]
   Int_t           Ndata_H_dc_2y2_dist;
   Double_t        H_dc_2y2_dist[1];   //[Ndata.H.dc.2y2.dist]
   Int_t           Ndata_H_dc_2y2_rawtdc;
   Double_t        H_dc_2y2_rawtdc[1];   //[Ndata.H.dc.2y2.rawtdc]
   Int_t           Ndata_H_dc_2y2_tdchits;
   Double_t        H_dc_2y2_tdchits[1];   //[Ndata.H.dc.2y2.tdchits]
   Int_t           Ndata_H_dc_2y2_time;
   Double_t        H_dc_2y2_time[1];   //[Ndata.H.dc.2y2.time]
   Int_t           Ndata_H_dc_residual;
   Double_t        H_dc_residual[12];   //[Ndata.H.dc.residual]
   Int_t           Ndata_H_dc_x;
   Double_t        H_dc_x[10];   //[Ndata.H.dc.x]
   Int_t           Ndata_H_dc_xp;
   Double_t        H_dc_xp[10];   //[Ndata.H.dc.xp]
   Int_t           Ndata_H_dc_y;
   Double_t        H_dc_y[10];   //[Ndata.H.dc.y]
   Int_t           Ndata_H_dc_yp;
   Double_t        H_dc_yp[10];   //[Ndata.H.dc.yp]
   Int_t           Ndata_H_hod_1x_negadchits;
   Double_t        H_hod_1x_negadchits[1];   //[Ndata.H.hod.1x.negadchits]
   Int_t           Ndata_H_hod_1x_negtdchits;
   Double_t        H_hod_1x_negtdchits[1];   //[Ndata.H.hod.1x.negtdchits]
   Int_t           Ndata_H_hod_1x_posadchits;
   Double_t        H_hod_1x_posadchits[1];   //[Ndata.H.hod.1x.posadchits]
   Int_t           Ndata_H_hod_1x_postdchits;
   Double_t        H_hod_1x_postdchits[1];   //[Ndata.H.hod.1x.postdchits]
   Int_t           Ndata_H_hod_1y_negadchits;
   Double_t        H_hod_1y_negadchits[1];   //[Ndata.H.hod.1y.negadchits]
   Int_t           Ndata_H_hod_1y_negtdchits;
   Double_t        H_hod_1y_negtdchits[1];   //[Ndata.H.hod.1y.negtdchits]
   Int_t           Ndata_H_hod_1y_posadchits;
   Double_t        H_hod_1y_posadchits[1];   //[Ndata.H.hod.1y.posadchits]
   Int_t           Ndata_H_hod_1y_postdchits;
   Double_t        H_hod_1y_postdchits[1];   //[Ndata.H.hod.1y.postdchits]
   Int_t           Ndata_H_hod_2x_negadchits;
   Double_t        H_hod_2x_negadchits[1];   //[Ndata.H.hod.2x.negadchits]
   Int_t           Ndata_H_hod_2x_negtdchits;
   Double_t        H_hod_2x_negtdchits[1];   //[Ndata.H.hod.2x.negtdchits]
   Int_t           Ndata_H_hod_2x_posadchits;
   Double_t        H_hod_2x_posadchits[1];   //[Ndata.H.hod.2x.posadchits]
   Int_t           Ndata_H_hod_2x_postdchits;
   Double_t        H_hod_2x_postdchits[1];   //[Ndata.H.hod.2x.postdchits]
   Int_t           Ndata_H_hod_2y_negadchits;
   Double_t        H_hod_2y_negadchits[1];   //[Ndata.H.hod.2y.negadchits]
   Int_t           Ndata_H_hod_2y_negtdchits;
   Double_t        H_hod_2y_negtdchits[1];   //[Ndata.H.hod.2y.negtdchits]
   Int_t           Ndata_H_hod_2y_posadchits;
   Double_t        H_hod_2y_posadchits[1];   //[Ndata.H.hod.2y.posadchits]
   Int_t           Ndata_H_hod_2y_postdchits;
   Double_t        H_hod_2y_postdchits[1];   //[Ndata.H.hod.2y.postdchits]
   Int_t           Ndata_H_tr_beta;
   Double_t        H_tr_beta[10];   //[Ndata.H.tr.beta]
   Int_t           Ndata_H_tr_chi2;
   Double_t        H_tr_chi2[10];   //[Ndata.H.tr.chi2]
   Int_t           Ndata_H_tr_d_ph;
   Double_t        H_tr_d_ph[10];   //[Ndata.H.tr.d_ph]
   Int_t           Ndata_H_tr_d_th;
   Double_t        H_tr_d_th[10];   //[Ndata.H.tr.d_th]
   Int_t           Ndata_H_tr_d_x;
   Double_t        H_tr_d_x[10];   //[Ndata.H.tr.d_x]
   Int_t           Ndata_H_tr_d_y;
   Double_t        H_tr_d_y[10];   //[Ndata.H.tr.d_y]
   Int_t           Ndata_H_tr_dbeta;
   Double_t        H_tr_dbeta[10];   //[Ndata.H.tr.dbeta]
   Int_t           Ndata_H_tr_dtime;
   Double_t        H_tr_dtime[10];   //[Ndata.H.tr.dtime]
   Int_t           Ndata_H_tr_flag;
   Double_t        H_tr_flag[10];   //[Ndata.H.tr.flag]
   Int_t           Ndata_H_tr_ndof;
   Double_t        H_tr_ndof[10];   //[Ndata.H.tr.ndof]
   Int_t           Ndata_H_tr_p;
   Double_t        H_tr_p[10];   //[Ndata.H.tr.p]
   Int_t           Ndata_H_tr_pathl;
   Double_t        H_tr_pathl[10];   //[Ndata.H.tr.pathl]
   Int_t           Ndata_H_tr_ph;
   Double_t        H_tr_ph[10];   //[Ndata.H.tr.ph]
   Int_t           Ndata_H_tr_px;
   Double_t        H_tr_px[10];   //[Ndata.H.tr.px]
   Int_t           Ndata_H_tr_py;
   Double_t        H_tr_py[10];   //[Ndata.H.tr.py]
   Int_t           Ndata_H_tr_pz;
   Double_t        H_tr_pz[10];   //[Ndata.H.tr.pz]
   Int_t           Ndata_H_tr_r_ph;
   Double_t        H_tr_r_ph[10];   //[Ndata.H.tr.r_ph]
   Int_t           Ndata_H_tr_r_th;
   Double_t        H_tr_r_th[10];   //[Ndata.H.tr.r_th]
   Int_t           Ndata_H_tr_r_x;
   Double_t        H_tr_r_x[10];   //[Ndata.H.tr.r_x]
   Int_t           Ndata_H_tr_r_y;
   Double_t        H_tr_r_y[10];   //[Ndata.H.tr.r_y]
   Int_t           Ndata_H_tr_tg_dp;
   Double_t        H_tr_tg_dp[10];   //[Ndata.H.tr.tg_dp]
   Int_t           Ndata_H_tr_tg_ph;
   Double_t        H_tr_tg_ph[10];   //[Ndata.H.tr.tg_ph]
   Int_t           Ndata_H_tr_tg_th;
   Double_t        H_tr_tg_th[10];   //[Ndata.H.tr.tg_th]
   Int_t           Ndata_H_tr_tg_y;
   Double_t        H_tr_tg_y[10];   //[Ndata.H.tr.tg_y]
   Int_t           Ndata_H_tr_th;
   Double_t        H_tr_th[10];   //[Ndata.H.tr.th]
   Int_t           Ndata_H_tr_time;
   Double_t        H_tr_time[10];   //[Ndata.H.tr.time]
   Int_t           Ndata_H_tr_vx;
   Double_t        H_tr_vx[10];   //[Ndata.H.tr.vx]
   Int_t           Ndata_H_tr_vy;
   Double_t        H_tr_vy[10];   //[Ndata.H.tr.vy]
   Int_t           Ndata_H_tr_vz;
   Double_t        H_tr_vz[10];   //[Ndata.H.tr.vz]
   Int_t           Ndata_H_tr_x;
   Double_t        H_tr_x[10];   //[Ndata.H.tr.x]
   Int_t           Ndata_H_tr_y;
   Double_t        H_tr_y[10];   //[Ndata.H.tr.y]
   Int_t           Ndata_S_cal_1pr_aneg;
   Double_t        S_cal_1pr_aneg[11];   //[Ndata.S.cal.1pr.aneg]
   Int_t           Ndata_S_cal_1pr_aneg_p;
   Double_t        S_cal_1pr_aneg_p[11];   //[Ndata.S.cal.1pr.aneg_p]
   Int_t           Ndata_S_cal_1pr_apos;
   Double_t        S_cal_1pr_apos[11];   //[Ndata.S.cal.1pr.apos]
   Int_t           Ndata_S_cal_1pr_apos_p;
   Double_t        S_cal_1pr_apos_p[11];   //[Ndata.S.cal.1pr.apos_p]
   Int_t           Ndata_S_cal_1pr_emean;
   Double_t        S_cal_1pr_emean[11];   //[Ndata.S.cal.1pr.emean]
   Int_t           Ndata_S_cal_1pr_eneg;
   Double_t        S_cal_1pr_eneg[11];   //[Ndata.S.cal.1pr.eneg]
   Int_t           Ndata_S_cal_1pr_epos;
   Double_t        S_cal_1pr_epos[11];   //[Ndata.S.cal.1pr.epos]
   Int_t           Ndata_S_cal_1pr_negadchits;
   Double_t        S_cal_1pr_negadchits[5];   //[Ndata.S.cal.1pr.negadchits]
   Int_t           Ndata_S_cal_1pr_posadchits;
   Double_t        S_cal_1pr_posadchits[4];   //[Ndata.S.cal.1pr.posadchits]
   Int_t           Ndata_S_cal_2ta_aneg;
   Double_t        S_cal_2ta_aneg[11];   //[Ndata.S.cal.2ta.aneg]
   Int_t           Ndata_S_cal_2ta_aneg_p;
   Double_t        S_cal_2ta_aneg_p[11];   //[Ndata.S.cal.2ta.aneg_p]
   Int_t           Ndata_S_cal_2ta_apos;
   Double_t        S_cal_2ta_apos[11];   //[Ndata.S.cal.2ta.apos]
   Int_t           Ndata_S_cal_2ta_apos_p;
   Double_t        S_cal_2ta_apos_p[11];   //[Ndata.S.cal.2ta.apos_p]
   Int_t           Ndata_S_cal_2ta_emean;
   Double_t        S_cal_2ta_emean[11];   //[Ndata.S.cal.2ta.emean]
   Int_t           Ndata_S_cal_2ta_eneg;
   Double_t        S_cal_2ta_eneg[11];   //[Ndata.S.cal.2ta.eneg]
   Int_t           Ndata_S_cal_2ta_epos;
   Double_t        S_cal_2ta_epos[11];   //[Ndata.S.cal.2ta.epos]
   Int_t           Ndata_S_cal_2ta_negadchits;
   Double_t        S_cal_2ta_negadchits[4];   //[Ndata.S.cal.2ta.negadchits]
   Int_t           Ndata_S_cal_2ta_posadchits;
   Double_t        S_cal_2ta_posadchits[4];   //[Ndata.S.cal.2ta.posadchits]
   Int_t           Ndata_S_cal_3ta_aneg;
   Double_t        S_cal_3ta_aneg[11];   //[Ndata.S.cal.3ta.aneg]
   Int_t           Ndata_S_cal_3ta_aneg_p;
   Double_t        S_cal_3ta_aneg_p[11];   //[Ndata.S.cal.3ta.aneg_p]
   Int_t           Ndata_S_cal_3ta_apos;
   Double_t        S_cal_3ta_apos[11];   //[Ndata.S.cal.3ta.apos]
   Int_t           Ndata_S_cal_3ta_apos_p;
   Double_t        S_cal_3ta_apos_p[11];   //[Ndata.S.cal.3ta.apos_p]
   Int_t           Ndata_S_cal_3ta_emean;
   Double_t        S_cal_3ta_emean[11];   //[Ndata.S.cal.3ta.emean]
   Int_t           Ndata_S_cal_3ta_eneg;
   Double_t        S_cal_3ta_eneg[11];   //[Ndata.S.cal.3ta.eneg]
   Int_t           Ndata_S_cal_3ta_epos;
   Double_t        S_cal_3ta_epos[11];   //[Ndata.S.cal.3ta.epos]
   Int_t           Ndata_S_cal_3ta_negadchits;
   Double_t        S_cal_3ta_negadchits[1];   //[Ndata.S.cal.3ta.negadchits]
   Int_t           Ndata_S_cal_3ta_posadchits;
   Double_t        S_cal_3ta_posadchits[3];   //[Ndata.S.cal.3ta.posadchits]
   Int_t           Ndata_S_cal_4ta_aneg;
   Double_t        S_cal_4ta_aneg[11];   //[Ndata.S.cal.4ta.aneg]
   Int_t           Ndata_S_cal_4ta_aneg_p;
   Double_t        S_cal_4ta_aneg_p[11];   //[Ndata.S.cal.4ta.aneg_p]
   Int_t           Ndata_S_cal_4ta_apos;
   Double_t        S_cal_4ta_apos[11];   //[Ndata.S.cal.4ta.apos]
   Int_t           Ndata_S_cal_4ta_apos_p;
   Double_t        S_cal_4ta_apos_p[11];   //[Ndata.S.cal.4ta.apos_p]
   Int_t           Ndata_S_cal_4ta_emean;
   Double_t        S_cal_4ta_emean[11];   //[Ndata.S.cal.4ta.emean]
   Int_t           Ndata_S_cal_4ta_eneg;
   Double_t        S_cal_4ta_eneg[11];   //[Ndata.S.cal.4ta.eneg]
   Int_t           Ndata_S_cal_4ta_epos;
   Double_t        S_cal_4ta_epos[11];   //[Ndata.S.cal.4ta.epos]
   Int_t           Ndata_S_cal_4ta_negadchits;
   Double_t        S_cal_4ta_negadchits[1];   //[Ndata.S.cal.4ta.negadchits]
   Int_t           Ndata_S_cal_4ta_posadchits;
   Double_t        S_cal_4ta_posadchits[4];   //[Ndata.S.cal.4ta.posadchits]
   Int_t           Ndata_S_dc_1u1_dist;
   Double_t        S_dc_1u1_dist[8];   //[Ndata.S.dc.1u1.dist]
   Int_t           Ndata_S_dc_1u1_rawtdc;
   Double_t        S_dc_1u1_rawtdc[8];   //[Ndata.S.dc.1u1.rawtdc]
   Int_t           Ndata_S_dc_1u1_tdchits;
   Double_t        S_dc_1u1_tdchits[8];   //[Ndata.S.dc.1u1.tdchits]
   Int_t           Ndata_S_dc_1u1_time;
   Double_t        S_dc_1u1_time[8];   //[Ndata.S.dc.1u1.time]
   Int_t           Ndata_S_dc_1u2_dist;
   Double_t        S_dc_1u2_dist[7];   //[Ndata.S.dc.1u2.dist]
   Int_t           Ndata_S_dc_1u2_rawtdc;
   Double_t        S_dc_1u2_rawtdc[7];   //[Ndata.S.dc.1u2.rawtdc]
   Int_t           Ndata_S_dc_1u2_tdchits;
   Double_t        S_dc_1u2_tdchits[7];   //[Ndata.S.dc.1u2.tdchits]
   Int_t           Ndata_S_dc_1u2_time;
   Double_t        S_dc_1u2_time[7];   //[Ndata.S.dc.1u2.time]
   Int_t           Ndata_S_dc_1v1_dist;
   Double_t        S_dc_1v1_dist[6];   //[Ndata.S.dc.1v1.dist]
   Int_t           Ndata_S_dc_1v1_rawtdc;
   Double_t        S_dc_1v1_rawtdc[6];   //[Ndata.S.dc.1v1.rawtdc]
   Int_t           Ndata_S_dc_1v1_tdchits;
   Double_t        S_dc_1v1_tdchits[6];   //[Ndata.S.dc.1v1.tdchits]
   Int_t           Ndata_S_dc_1v1_time;
   Double_t        S_dc_1v1_time[6];   //[Ndata.S.dc.1v1.time]
   Int_t           Ndata_S_dc_1v2_dist;
   Double_t        S_dc_1v2_dist[6];   //[Ndata.S.dc.1v2.dist]
   Int_t           Ndata_S_dc_1v2_rawtdc;
   Double_t        S_dc_1v2_rawtdc[6];   //[Ndata.S.dc.1v2.rawtdc]
   Int_t           Ndata_S_dc_1v2_tdchits;
   Double_t        S_dc_1v2_tdchits[6];   //[Ndata.S.dc.1v2.tdchits]
   Int_t           Ndata_S_dc_1v2_time;
   Double_t        S_dc_1v2_time[6];   //[Ndata.S.dc.1v2.time]
   Int_t           Ndata_S_dc_1x1_dist;
   Double_t        S_dc_1x1_dist[9];   //[Ndata.S.dc.1x1.dist]
   Int_t           Ndata_S_dc_1x1_rawtdc;
   Double_t        S_dc_1x1_rawtdc[9];   //[Ndata.S.dc.1x1.rawtdc]
   Int_t           Ndata_S_dc_1x1_tdchits;
   Double_t        S_dc_1x1_tdchits[9];   //[Ndata.S.dc.1x1.tdchits]
   Int_t           Ndata_S_dc_1x1_time;
   Double_t        S_dc_1x1_time[9];   //[Ndata.S.dc.1x1.time]
   Int_t           Ndata_S_dc_1x2_dist;
   Double_t        S_dc_1x2_dist[10];   //[Ndata.S.dc.1x2.dist]
   Int_t           Ndata_S_dc_1x2_rawtdc;
   Double_t        S_dc_1x2_rawtdc[10];   //[Ndata.S.dc.1x2.rawtdc]
   Int_t           Ndata_S_dc_1x2_tdchits;
   Double_t        S_dc_1x2_tdchits[10];   //[Ndata.S.dc.1x2.tdchits]
   Int_t           Ndata_S_dc_1x2_time;
   Double_t        S_dc_1x2_time[10];   //[Ndata.S.dc.1x2.time]
   Int_t           Ndata_S_dc_2u1_dist;
   Double_t        S_dc_2u1_dist[5];   //[Ndata.S.dc.2u1.dist]
   Int_t           Ndata_S_dc_2u1_rawtdc;
   Double_t        S_dc_2u1_rawtdc[5];   //[Ndata.S.dc.2u1.rawtdc]
   Int_t           Ndata_S_dc_2u1_tdchits;
   Double_t        S_dc_2u1_tdchits[5];   //[Ndata.S.dc.2u1.tdchits]
   Int_t           Ndata_S_dc_2u1_time;
   Double_t        S_dc_2u1_time[5];   //[Ndata.S.dc.2u1.time]
   Int_t           Ndata_S_dc_2u2_dist;
   Double_t        S_dc_2u2_dist[5];   //[Ndata.S.dc.2u2.dist]
   Int_t           Ndata_S_dc_2u2_rawtdc;
   Double_t        S_dc_2u2_rawtdc[5];   //[Ndata.S.dc.2u2.rawtdc]
   Int_t           Ndata_S_dc_2u2_tdchits;
   Double_t        S_dc_2u2_tdchits[5];   //[Ndata.S.dc.2u2.tdchits]
   Int_t           Ndata_S_dc_2u2_time;
   Double_t        S_dc_2u2_time[5];   //[Ndata.S.dc.2u2.time]
   Int_t           Ndata_S_dc_2v1_dist;
   Double_t        S_dc_2v1_dist[8];   //[Ndata.S.dc.2v1.dist]
   Int_t           Ndata_S_dc_2v1_rawtdc;
   Double_t        S_dc_2v1_rawtdc[8];   //[Ndata.S.dc.2v1.rawtdc]
   Int_t           Ndata_S_dc_2v1_tdchits;
   Double_t        S_dc_2v1_tdchits[8];   //[Ndata.S.dc.2v1.tdchits]
   Int_t           Ndata_S_dc_2v1_time;
   Double_t        S_dc_2v1_time[8];   //[Ndata.S.dc.2v1.time]
   Int_t           Ndata_S_dc_2v2_dist;
   Double_t        S_dc_2v2_dist[5];   //[Ndata.S.dc.2v2.dist]
   Int_t           Ndata_S_dc_2v2_rawtdc;
   Double_t        S_dc_2v2_rawtdc[5];   //[Ndata.S.dc.2v2.rawtdc]
   Int_t           Ndata_S_dc_2v2_tdchits;
   Double_t        S_dc_2v2_tdchits[5];   //[Ndata.S.dc.2v2.tdchits]
   Int_t           Ndata_S_dc_2v2_time;
   Double_t        S_dc_2v2_time[5];   //[Ndata.S.dc.2v2.time]
   Int_t           Ndata_S_dc_2x1_dist;
   Double_t        S_dc_2x1_dist[4];   //[Ndata.S.dc.2x1.dist]
   Int_t           Ndata_S_dc_2x1_rawtdc;
   Double_t        S_dc_2x1_rawtdc[4];   //[Ndata.S.dc.2x1.rawtdc]
   Int_t           Ndata_S_dc_2x1_tdchits;
   Double_t        S_dc_2x1_tdchits[4];   //[Ndata.S.dc.2x1.tdchits]
   Int_t           Ndata_S_dc_2x1_time;
   Double_t        S_dc_2x1_time[4];   //[Ndata.S.dc.2x1.time]
   Int_t           Ndata_S_dc_2x2_dist;
   Double_t        S_dc_2x2_dist[14];   //[Ndata.S.dc.2x2.dist]
   Int_t           Ndata_S_dc_2x2_rawtdc;
   Double_t        S_dc_2x2_rawtdc[14];   //[Ndata.S.dc.2x2.rawtdc]
   Int_t           Ndata_S_dc_2x2_tdchits;
   Double_t        S_dc_2x2_tdchits[14];   //[Ndata.S.dc.2x2.tdchits]
   Int_t           Ndata_S_dc_2x2_time;
   Double_t        S_dc_2x2_time[14];   //[Ndata.S.dc.2x2.time]
   Int_t           Ndata_S_dc_residual;
   Double_t        S_dc_residual[12];   //[Ndata.S.dc.residual]
   Int_t           Ndata_S_dc_x;
   Double_t        S_dc_x[10];   //[Ndata.S.dc.x]
   Int_t           Ndata_S_dc_xp;
   Double_t        S_dc_xp[10];   //[Ndata.S.dc.xp]
   Int_t           Ndata_S_dc_y;
   Double_t        S_dc_y[10];   //[Ndata.S.dc.y]
   Int_t           Ndata_S_dc_yp;
   Double_t        S_dc_yp[10];   //[Ndata.S.dc.yp]
   Int_t           Ndata_S_hod_1x_negadchits;
   Double_t        S_hod_1x_negadchits[1];   //[Ndata.S.hod.1x.negadchits]
   Int_t           Ndata_S_hod_1x_negtdchits;
   Double_t        S_hod_1x_negtdchits[1];   //[Ndata.S.hod.1x.negtdchits]
   Int_t           Ndata_S_hod_1x_posadchits;
   Double_t        S_hod_1x_posadchits[1];   //[Ndata.S.hod.1x.posadchits]
   Int_t           Ndata_S_hod_1x_postdchits;
   Double_t        S_hod_1x_postdchits[1];   //[Ndata.S.hod.1x.postdchits]
   Int_t           Ndata_S_hod_1y_negadchits;
   Double_t        S_hod_1y_negadchits[1];   //[Ndata.S.hod.1y.negadchits]
   Int_t           Ndata_S_hod_1y_negtdchits;
   Double_t        S_hod_1y_negtdchits[1];   //[Ndata.S.hod.1y.negtdchits]
   Int_t           Ndata_S_hod_1y_posadchits;
   Double_t        S_hod_1y_posadchits[1];   //[Ndata.S.hod.1y.posadchits]
   Int_t           Ndata_S_hod_1y_postdchits;
   Double_t        S_hod_1y_postdchits[1];   //[Ndata.S.hod.1y.postdchits]
   Int_t           Ndata_S_hod_2x_negadchits;
   Double_t        S_hod_2x_negadchits[1];   //[Ndata.S.hod.2x.negadchits]
   Int_t           Ndata_S_hod_2x_negtdchits;
   Double_t        S_hod_2x_negtdchits[1];   //[Ndata.S.hod.2x.negtdchits]
   Int_t           Ndata_S_hod_2x_posadchits;
   Double_t        S_hod_2x_posadchits[1];   //[Ndata.S.hod.2x.posadchits]
   Int_t           Ndata_S_hod_2x_postdchits;
   Double_t        S_hod_2x_postdchits[1];   //[Ndata.S.hod.2x.postdchits]
   Int_t           Ndata_S_hod_2y_negadchits;
   Double_t        S_hod_2y_negadchits[1];   //[Ndata.S.hod.2y.negadchits]
   Int_t           Ndata_S_hod_2y_negtdchits;
   Double_t        S_hod_2y_negtdchits[1];   //[Ndata.S.hod.2y.negtdchits]
   Int_t           Ndata_S_hod_2y_posadchits;
   Double_t        S_hod_2y_posadchits[1];   //[Ndata.S.hod.2y.posadchits]
   Int_t           Ndata_S_hod_2y_postdchits;
   Double_t        S_hod_2y_postdchits[1];   //[Ndata.S.hod.2y.postdchits]
   Int_t           Ndata_S_tr_beta;
   Double_t        S_tr_beta[9];   //[Ndata.S.tr.beta]
   Int_t           Ndata_S_tr_chi2;
   Double_t        S_tr_chi2[9];   //[Ndata.S.tr.chi2]
   Int_t           Ndata_S_tr_d_ph;
   Double_t        S_tr_d_ph[9];   //[Ndata.S.tr.d_ph]
   Int_t           Ndata_S_tr_d_th;
   Double_t        S_tr_d_th[9];   //[Ndata.S.tr.d_th]
   Int_t           Ndata_S_tr_d_x;
   Double_t        S_tr_d_x[9];   //[Ndata.S.tr.d_x]
   Int_t           Ndata_S_tr_d_y;
   Double_t        S_tr_d_y[9];   //[Ndata.S.tr.d_y]
   Int_t           Ndata_S_tr_dbeta;
   Double_t        S_tr_dbeta[9];   //[Ndata.S.tr.dbeta]
   Int_t           Ndata_S_tr_dtime;
   Double_t        S_tr_dtime[9];   //[Ndata.S.tr.dtime]
   Int_t           Ndata_S_tr_flag;
   Double_t        S_tr_flag[9];   //[Ndata.S.tr.flag]
   Int_t           Ndata_S_tr_ndof;
   Double_t        S_tr_ndof[9];   //[Ndata.S.tr.ndof]
   Int_t           Ndata_S_tr_p;
   Double_t        S_tr_p[9];   //[Ndata.S.tr.p]
   Int_t           Ndata_S_tr_pathl;
   Double_t        S_tr_pathl[9];   //[Ndata.S.tr.pathl]
   Int_t           Ndata_S_tr_ph;
   Double_t        S_tr_ph[9];   //[Ndata.S.tr.ph]
   Int_t           Ndata_S_tr_px;
   Double_t        S_tr_px[9];   //[Ndata.S.tr.px]
   Int_t           Ndata_S_tr_py;
   Double_t        S_tr_py[9];   //[Ndata.S.tr.py]
   Int_t           Ndata_S_tr_pz;
   Double_t        S_tr_pz[9];   //[Ndata.S.tr.pz]
   Int_t           Ndata_S_tr_r_ph;
   Double_t        S_tr_r_ph[9];   //[Ndata.S.tr.r_ph]
   Int_t           Ndata_S_tr_r_th;
   Double_t        S_tr_r_th[9];   //[Ndata.S.tr.r_th]
   Int_t           Ndata_S_tr_r_x;
   Double_t        S_tr_r_x[9];   //[Ndata.S.tr.r_x]
   Int_t           Ndata_S_tr_r_y;
   Double_t        S_tr_r_y[9];   //[Ndata.S.tr.r_y]
   Int_t           Ndata_S_tr_tg_dp;
   Double_t        S_tr_tg_dp[9];   //[Ndata.S.tr.tg_dp]
   Int_t           Ndata_S_tr_tg_ph;
   Double_t        S_tr_tg_ph[9];   //[Ndata.S.tr.tg_ph]
   Int_t           Ndata_S_tr_tg_th;
   Double_t        S_tr_tg_th[9];   //[Ndata.S.tr.tg_th]
   Int_t           Ndata_S_tr_tg_y;
   Double_t        S_tr_tg_y[9];   //[Ndata.S.tr.tg_y]
   Int_t           Ndata_S_tr_th;
   Double_t        S_tr_th[9];   //[Ndata.S.tr.th]
   Int_t           Ndata_S_tr_time;
   Double_t        S_tr_time[9];   //[Ndata.S.tr.time]
   Int_t           Ndata_S_tr_vx;
   Double_t        S_tr_vx[9];   //[Ndata.S.tr.vx]
   Int_t           Ndata_S_tr_vy;
   Double_t        S_tr_vy[9];   //[Ndata.S.tr.vy]
   Int_t           Ndata_S_tr_vz;
   Double_t        S_tr_vz[9];   //[Ndata.S.tr.vz]
   Int_t           Ndata_S_tr_x;
   Double_t        S_tr_x[9];   //[Ndata.S.tr.x]
   Int_t           Ndata_S_tr_y;
   Double_t        S_tr_y[9];   //[Ndata.S.tr.y]
   Double_t        H_aero_neg_npe_sum;
   Double_t        H_aero_ngood_hits;
   Double_t        H_aero_npe_sum;
   Double_t        H_aero_ntdc_neg_hits;
   Double_t        H_aero_ntdc_pos_hits;
   Double_t        H_aero_pos_npe_sum;
   Double_t        H_cal_1pr_eplane;
   Double_t        H_cal_1pr_eplane_neg;
   Double_t        H_cal_1pr_eplane_pos;
   Double_t        H_cal_2ta_eplane;
   Double_t        H_cal_2ta_eplane_neg;
   Double_t        H_cal_2ta_eplane_pos;
   Double_t        H_cal_3ta_eplane;
   Double_t        H_cal_3ta_eplane_neg;
   Double_t        H_cal_3ta_eplane_pos;
   Double_t        H_cal_4ta_eplane;
   Double_t        H_cal_4ta_eplane_neg;
   Double_t        H_cal_4ta_eplane_pos;
   Double_t        H_cal_emax;
   Double_t        H_cal_eprmax;
   Double_t        H_cal_mult;
   Double_t        H_cal_nclust;
   Double_t        H_cal_nhits;
   Double_t        H_cal_tre;
   Double_t        H_cal_trecor;
   Double_t        H_cal_treplcor;
   Double_t        H_cal_trepr;
   Double_t        H_cal_treprcor;
   Double_t        H_cal_trx;
   Double_t        H_cal_try;
   Double_t        H_cal_xmax;
   Double_t        H_cher_ncherhit;
   Double_t        H_cher_npesum;
   Double_t        H_dc_1u1_nhit;
   Double_t        H_dc_1v1_nhit;
   Double_t        H_dc_1x1_nhit;
   Double_t        H_dc_1x2_nhit;
   Double_t        H_dc_1y1_nhit;
   Double_t        H_dc_1y2_nhit;
   Double_t        H_dc_2u1_nhit;
   Double_t        H_dc_2v1_nhit;
   Double_t        H_dc_2x1_nhit;
   Double_t        H_dc_2x2_nhit;
   Double_t        H_dc_2y1_nhit;
   Double_t        H_dc_2y2_nhit;
   Double_t        H_dc_nhit;
   Double_t        H_dc_nsp;
   Double_t        H_dc_ntrack;
   Double_t        H_dc_tnhit;
   Double_t        H_dc_trawhit;
   Double_t        H_gold_dp;
   Double_t        H_gold_index;
   Double_t        H_gold_ok;
   Double_t        H_gold_p;
   Double_t        H_gold_ph;
   Double_t        H_gold_px;
   Double_t        H_gold_py;
   Double_t        H_gold_pz;
   Double_t        H_gold_th;
   Double_t        H_gold_x;
   Double_t        H_gold_y;
   Double_t        H_hod_1x_fptime;
   Double_t        H_hod_1y_fptime;
   Double_t        H_hod_2x_fptime;
   Double_t        H_hod_2y_fptime;
   Double_t        H_hod_hgoodstarttime;
   Double_t        H_hod_starttime;
   Double_t        H_tr_n;
   Double_t        S_cal_1pr_eplane;
   Double_t        S_cal_1pr_eplane_neg;
   Double_t        S_cal_1pr_eplane_pos;
   Double_t        S_cal_2ta_eplane;
   Double_t        S_cal_2ta_eplane_neg;
   Double_t        S_cal_2ta_eplane_pos;
   Double_t        S_cal_3ta_eplane;
   Double_t        S_cal_3ta_eplane_neg;
   Double_t        S_cal_3ta_eplane_pos;
   Double_t        S_cal_4ta_eplane;
   Double_t        S_cal_4ta_eplane_neg;
   Double_t        S_cal_4ta_eplane_pos;
   Double_t        S_cal_emax;
   Double_t        S_cal_eprmax;
   Double_t        S_cal_mult;
   Double_t        S_cal_nclust;
   Double_t        S_cal_nhits;
   Double_t        S_cal_tre;
   Double_t        S_cal_trecor;
   Double_t        S_cal_treplcor;
   Double_t        S_cal_trepr;
   Double_t        S_cal_treprcor;
   Double_t        S_cal_trx;
   Double_t        S_cal_try;
   Double_t        S_cal_xmax;
   Double_t        S_dc_1u1_nhit;
   Double_t        S_dc_1u2_nhit;
   Double_t        S_dc_1v1_nhit;
   Double_t        S_dc_1v2_nhit;
   Double_t        S_dc_1x1_nhit;
   Double_t        S_dc_1x2_nhit;
   Double_t        S_dc_2u1_nhit;
   Double_t        S_dc_2u2_nhit;
   Double_t        S_dc_2v1_nhit;
   Double_t        S_dc_2v2_nhit;
   Double_t        S_dc_2x1_nhit;
   Double_t        S_dc_2x2_nhit;
   Double_t        S_dc_nhit;
   Double_t        S_dc_nsp;
   Double_t        S_dc_ntrack;
   Double_t        S_hod_1x_fptime;
   Double_t        S_hod_1y_fptime;
   Double_t        S_hod_2x_fptime;
   Double_t        S_hod_2y_fptime;
   Double_t        S_hod_hgoodstarttime;
   Double_t        S_hod_starttime;
   Double_t        S_tr_n;
   Double_t        RB_raster_frx_raw_adc;
   Double_t        RB_raster_fry_raw_adc;
   Double_t        RB_raster_frx_adc;
   Double_t        RB_raster_fry_adc;
   Double_t        RB_raster_frx;
   Double_t        RB_raster_fry;
   Double_t        g_evnum;
 //THaEvent        *Event_Branch;
   ULong64_t       fEvtHdr_fEvtTime;
   UInt_t          fEvtHdr_fEvtNum;
   Int_t           fEvtHdr_fEvtType;
   Int_t           fEvtHdr_fEvtLen;
   Int_t           fEvtHdr_fHelicity;
   Int_t           fEvtHdr_fTargetPol;
   Int_t           fEvtHdr_fRun;

   // List of branches
   TBranch        *b_Ndata_S_tr_beta;   //!
   TBranch        *b_S_tr_beta;   //!
   TBranch        *b_Ndata_S_tr_chi2;   //!
   TBranch        *b_S_tr_chi2;   //!
   TBranch        *b_Ndata_S_tr_d_ph;   //!
   TBranch        *b_S_tr_d_ph;   //!
   TBranch        *b_Ndata_S_tr_d_th;   //!
   TBranch        *b_S_tr_d_th;   //!
   TBranch        *b_Ndata_S_tr_d_x;   //!
   TBranch        *b_S_tr_d_x;   //!
   TBranch        *b_Ndata_S_tr_d_y;   //!
   TBranch        *b_S_tr_d_y;   //!
   TBranch        *b_Ndata_S_tr_dbeta;   //!
   TBranch        *b_S_tr_dbeta;   //!
   TBranch        *b_Ndata_S_tr_dtime;   //!
   TBranch        *b_S_tr_dtime;   //!
   TBranch        *b_Ndata_S_tr_flag;   //!
   TBranch        *b_S_tr_flag;   //!
   TBranch        *b_Ndata_S_tr_ndof;   //!
   TBranch        *b_S_tr_ndof;   //!
   TBranch        *b_Ndata_S_tr_p;   //!
   TBranch        *b_S_tr_p;   //!
   TBranch        *b_Ndata_S_tr_pathl;   //!
   TBranch        *b_S_tr_pathl;   //!
   TBranch        *b_Ndata_S_tr_ph;   //!
   TBranch        *b_S_tr_ph;   //!
   TBranch        *b_Ndata_S_tr_px;   //!
   TBranch        *b_S_tr_px;   //!
   TBranch        *b_Ndata_S_tr_py;   //!
   TBranch        *b_S_tr_py;   //!
   TBranch        *b_Ndata_S_tr_pz;   //!
   TBranch        *b_S_tr_pz;   //!
   TBranch        *b_Ndata_S_tr_r_ph;   //!
   TBranch        *b_S_tr_r_ph;   //!
   TBranch        *b_Ndata_S_tr_r_th;   //!
   TBranch        *b_S_tr_r_th;   //!
   TBranch        *b_Ndata_S_tr_r_x;   //!
   TBranch        *b_S_tr_r_x;   //!
   TBranch        *b_Ndata_S_tr_r_y;   //!
   TBranch        *b_S_tr_r_y;   //!
   TBranch        *b_Ndata_S_tr_tg_dp;   //!
   TBranch        *b_S_tr_tg_dp;   //!
   TBranch        *b_Ndata_S_tr_tg_ph;   //!
   TBranch        *b_S_tr_tg_ph;   //!
   TBranch        *b_Ndata_S_tr_tg_th;   //!
   TBranch        *b_S_tr_tg_th;   //!
   TBranch        *b_Ndata_S_tr_tg_y;   //!
   TBranch        *b_S_tr_tg_y;   //!
   TBranch        *b_Ndata_S_tr_th;   //!
   TBranch        *b_S_tr_th;   //!
   TBranch        *b_Ndata_S_tr_time;   //!
   TBranch        *b_S_tr_time;   //!
   TBranch        *b_Ndata_S_tr_vx;   //!
   TBranch        *b_S_tr_vx;   //!
   TBranch        *b_Ndata_S_tr_vy;   //!
   TBranch        *b_S_tr_vy;   //!
   TBranch        *b_Ndata_S_tr_vz;   //!
   TBranch        *b_S_tr_vz;   //!
   TBranch        *b_Ndata_S_tr_x;   //!
   TBranch        *b_S_tr_x;   //!
   TBranch        *b_Ndata_S_tr_y;   //!
   TBranch        *b_S_tr_y;   //!
   TBranch        *b_Ndata_H_aero_aneg;   //!
   TBranch        *b_H_aero_aneg;   //!
   TBranch        *b_Ndata_H_aero_aneg_p;   //!
   TBranch        *b_H_aero_aneg_p;   //!
   TBranch        *b_Ndata_H_aero_apos;   //!
   TBranch        *b_H_aero_apos;   //!
   TBranch        *b_Ndata_H_aero_apos_p;   //!
   TBranch        *b_H_aero_apos_p;   //!
   TBranch        *b_Ndata_H_aero_neg_npe;   //!
   TBranch        *b_H_aero_neg_npe;   //!
   TBranch        *b_Ndata_H_aero_negadchits;   //!
   TBranch        *b_H_aero_negadchits;   //!
   TBranch        *b_Ndata_H_aero_negtdchits;   //!
   TBranch        *b_H_aero_negtdchits;   //!
   TBranch        *b_Ndata_H_aero_pos_npe;   //!
   TBranch        *b_H_aero_pos_npe;   //!
   TBranch        *b_Ndata_H_aero_posadchits;   //!
   TBranch        *b_H_aero_posadchits;   //!
   TBranch        *b_Ndata_H_aero_postdchits;   //!
   TBranch        *b_H_aero_postdchits;   //!
   TBranch        *b_Ndata_H_aero_tneg;   //!
   TBranch        *b_H_aero_tneg;   //!
   TBranch        *b_Ndata_H_aero_tpos;   //!
   TBranch        *b_H_aero_tpos;   //!
   TBranch        *b_Ndata_H_cal_1pr_aneg;   //!
   TBranch        *b_H_cal_1pr_aneg;   //!
   TBranch        *b_Ndata_H_cal_1pr_aneg_p;   //!
   TBranch        *b_H_cal_1pr_aneg_p;   //!
   TBranch        *b_Ndata_H_cal_1pr_apos;   //!
   TBranch        *b_H_cal_1pr_apos;   //!
   TBranch        *b_Ndata_H_cal_1pr_apos_p;   //!
   TBranch        *b_H_cal_1pr_apos_p;   //!
   TBranch        *b_Ndata_H_cal_1pr_emean;   //!
   TBranch        *b_H_cal_1pr_emean;   //!
   TBranch        *b_Ndata_H_cal_1pr_eneg;   //!
   TBranch        *b_H_cal_1pr_eneg;   //!
   TBranch        *b_Ndata_H_cal_1pr_epos;   //!
   TBranch        *b_H_cal_1pr_epos;   //!
   TBranch        *b_Ndata_H_cal_1pr_negadchits;   //!
   TBranch        *b_H_cal_1pr_negadchits;   //!
   TBranch        *b_Ndata_H_cal_1pr_posadchits;   //!
   TBranch        *b_H_cal_1pr_posadchits;   //!
   TBranch        *b_Ndata_H_cal_2ta_aneg;   //!
   TBranch        *b_H_cal_2ta_aneg;   //!
   TBranch        *b_Ndata_H_cal_2ta_aneg_p;   //!
   TBranch        *b_H_cal_2ta_aneg_p;   //!
   TBranch        *b_Ndata_H_cal_2ta_apos;   //!
   TBranch        *b_H_cal_2ta_apos;   //!
   TBranch        *b_Ndata_H_cal_2ta_apos_p;   //!
   TBranch        *b_H_cal_2ta_apos_p;   //!
   TBranch        *b_Ndata_H_cal_2ta_emean;   //!
   TBranch        *b_H_cal_2ta_emean;   //!
   TBranch        *b_Ndata_H_cal_2ta_eneg;   //!
   TBranch        *b_H_cal_2ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_2ta_epos;   //!
   TBranch        *b_H_cal_2ta_epos;   //!
   TBranch        *b_Ndata_H_cal_2ta_negadchits;   //!
   TBranch        *b_H_cal_2ta_negadchits;   //!
   TBranch        *b_Ndata_H_cal_2ta_posadchits;   //!
   TBranch        *b_H_cal_2ta_posadchits;   //!
   TBranch        *b_Ndata_H_cal_3ta_aneg;   //!
   TBranch        *b_H_cal_3ta_aneg;   //!
   TBranch        *b_Ndata_H_cal_3ta_aneg_p;   //!
   TBranch        *b_H_cal_3ta_aneg_p;   //!
   TBranch        *b_Ndata_H_cal_3ta_apos;   //!
   TBranch        *b_H_cal_3ta_apos;   //!
   TBranch        *b_Ndata_H_cal_3ta_apos_p;   //!
   TBranch        *b_H_cal_3ta_apos_p;   //!
   TBranch        *b_Ndata_H_cal_3ta_emean;   //!
   TBranch        *b_H_cal_3ta_emean;   //!
   TBranch        *b_Ndata_H_cal_3ta_eneg;   //!
   TBranch        *b_H_cal_3ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_3ta_epos;   //!
   TBranch        *b_H_cal_3ta_epos;   //!
   TBranch        *b_Ndata_H_cal_3ta_negadchits;   //!
   TBranch        *b_H_cal_3ta_negadchits;   //!
   TBranch        *b_Ndata_H_cal_3ta_posadchits;   //!
   TBranch        *b_H_cal_3ta_posadchits;   //!
   TBranch        *b_Ndata_H_cal_4ta_aneg;   //!
   TBranch        *b_H_cal_4ta_aneg;   //!
   TBranch        *b_Ndata_H_cal_4ta_aneg_p;   //!
   TBranch        *b_H_cal_4ta_aneg_p;   //!
   TBranch        *b_Ndata_H_cal_4ta_apos;   //!
   TBranch        *b_H_cal_4ta_apos;   //!
   TBranch        *b_Ndata_H_cal_4ta_apos_p;   //!
   TBranch        *b_H_cal_4ta_apos_p;   //!
   TBranch        *b_Ndata_H_cal_4ta_emean;   //!
   TBranch        *b_H_cal_4ta_emean;   //!
   TBranch        *b_Ndata_H_cal_4ta_eneg;   //!
   TBranch        *b_H_cal_4ta_eneg;   //!
   TBranch        *b_Ndata_H_cal_4ta_epos;   //!
   TBranch        *b_H_cal_4ta_epos;   //!
   TBranch        *b_Ndata_H_cal_4ta_negadchits;   //!
   TBranch        *b_H_cal_4ta_negadchits;   //!
   TBranch        *b_Ndata_H_cal_4ta_posadchits;   //!
   TBranch        *b_H_cal_4ta_posadchits;   //!
   TBranch        *b_Ndata_H_cher_adc;   //!
   TBranch        *b_H_cher_adc;   //!
   TBranch        *b_Ndata_H_cher_adc_p;   //!
   TBranch        *b_H_cher_adc_p;   //!
   TBranch        *b_Ndata_H_cher_npe;   //!
   TBranch        *b_H_cher_npe;   //!
   TBranch        *b_Ndata_H_cher_phototubes;   //!
   TBranch        *b_H_cher_phototubes;   //!
   TBranch        *b_Ndata_H_dc_1u1_dist;   //!
   TBranch        *b_H_dc_1u1_dist;   //!
   TBranch        *b_Ndata_H_dc_1u1_rawtdc;   //!
   TBranch        *b_H_dc_1u1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1u1_tdchits;   //!
   TBranch        *b_H_dc_1u1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1u1_time;   //!
   TBranch        *b_H_dc_1u1_time;   //!
   TBranch        *b_Ndata_H_dc_1v1_dist;   //!
   TBranch        *b_H_dc_1v1_dist;   //!
   TBranch        *b_Ndata_H_dc_1v1_rawtdc;   //!
   TBranch        *b_H_dc_1v1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1v1_tdchits;   //!
   TBranch        *b_H_dc_1v1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1v1_time;   //!
   TBranch        *b_H_dc_1v1_time;   //!
   TBranch        *b_Ndata_H_dc_1x1_dist;   //!
   TBranch        *b_H_dc_1x1_dist;   //!
   TBranch        *b_Ndata_H_dc_1x1_rawtdc;   //!
   TBranch        *b_H_dc_1x1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1x1_tdchits;   //!
   TBranch        *b_H_dc_1x1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1x1_time;   //!
   TBranch        *b_H_dc_1x1_time;   //!
   TBranch        *b_Ndata_H_dc_1x2_dist;   //!
   TBranch        *b_H_dc_1x2_dist;   //!
   TBranch        *b_Ndata_H_dc_1x2_rawtdc;   //!
   TBranch        *b_H_dc_1x2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1x2_tdchits;   //!
   TBranch        *b_H_dc_1x2_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1x2_time;   //!
   TBranch        *b_H_dc_1x2_time;   //!
   TBranch        *b_Ndata_H_dc_1y1_dist;   //!
   TBranch        *b_H_dc_1y1_dist;   //!
   TBranch        *b_Ndata_H_dc_1y1_rawtdc;   //!
   TBranch        *b_H_dc_1y1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1y1_tdchits;   //!
   TBranch        *b_H_dc_1y1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1y1_time;   //!
   TBranch        *b_H_dc_1y1_time;   //!
   TBranch        *b_Ndata_H_dc_1y2_dist;   //!
   TBranch        *b_H_dc_1y2_dist;   //!
   TBranch        *b_Ndata_H_dc_1y2_rawtdc;   //!
   TBranch        *b_H_dc_1y2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_1y2_tdchits;   //!
   TBranch        *b_H_dc_1y2_tdchits;   //!
   TBranch        *b_Ndata_H_dc_1y2_time;   //!
   TBranch        *b_H_dc_1y2_time;   //!
   TBranch        *b_Ndata_H_dc_2u1_dist;   //!
   TBranch        *b_H_dc_2u1_dist;   //!
   TBranch        *b_Ndata_H_dc_2u1_rawtdc;   //!
   TBranch        *b_H_dc_2u1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2u1_tdchits;   //!
   TBranch        *b_H_dc_2u1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2u1_time;   //!
   TBranch        *b_H_dc_2u1_time;   //!
   TBranch        *b_Ndata_H_dc_2v1_dist;   //!
   TBranch        *b_H_dc_2v1_dist;   //!
   TBranch        *b_Ndata_H_dc_2v1_rawtdc;   //!
   TBranch        *b_H_dc_2v1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2v1_tdchits;   //!
   TBranch        *b_H_dc_2v1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2v1_time;   //!
   TBranch        *b_H_dc_2v1_time;   //!
   TBranch        *b_Ndata_H_dc_2x1_dist;   //!
   TBranch        *b_H_dc_2x1_dist;   //!
   TBranch        *b_Ndata_H_dc_2x1_rawtdc;   //!
   TBranch        *b_H_dc_2x1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2x1_tdchits;   //!
   TBranch        *b_H_dc_2x1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2x1_time;   //!
   TBranch        *b_H_dc_2x1_time;   //!
   TBranch        *b_Ndata_H_dc_2x2_dist;   //!
   TBranch        *b_H_dc_2x2_dist;   //!
   TBranch        *b_Ndata_H_dc_2x2_rawtdc;   //!
   TBranch        *b_H_dc_2x2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2x2_tdchits;   //!
   TBranch        *b_H_dc_2x2_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2x2_time;   //!
   TBranch        *b_H_dc_2x2_time;   //!
   TBranch        *b_Ndata_H_dc_2y1_dist;   //!
   TBranch        *b_H_dc_2y1_dist;   //!
   TBranch        *b_Ndata_H_dc_2y1_rawtdc;   //!
   TBranch        *b_H_dc_2y1_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2y1_tdchits;   //!
   TBranch        *b_H_dc_2y1_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2y1_time;   //!
   TBranch        *b_H_dc_2y1_time;   //!
   TBranch        *b_Ndata_H_dc_2y2_dist;   //!
   TBranch        *b_H_dc_2y2_dist;   //!
   TBranch        *b_Ndata_H_dc_2y2_rawtdc;   //!
   TBranch        *b_H_dc_2y2_rawtdc;   //!
   TBranch        *b_Ndata_H_dc_2y2_tdchits;   //!
   TBranch        *b_H_dc_2y2_tdchits;   //!
   TBranch        *b_Ndata_H_dc_2y2_time;   //!
   TBranch        *b_H_dc_2y2_time;   //!
   TBranch        *b_Ndata_H_dc_residual;   //!
   TBranch        *b_H_dc_residual;   //!
   TBranch        *b_Ndata_H_dc_x;   //!
   TBranch        *b_H_dc_x;   //!
   TBranch        *b_Ndata_H_dc_xp;   //!
   TBranch        *b_H_dc_xp;   //!
   TBranch        *b_Ndata_H_dc_y;   //!
   TBranch        *b_H_dc_y;   //!
   TBranch        *b_Ndata_H_dc_yp;   //!
   TBranch        *b_H_dc_yp;   //!
   TBranch        *b_Ndata_H_hod_1x_negadchits;   //!
   TBranch        *b_H_hod_1x_negadchits;   //!
   TBranch        *b_Ndata_H_hod_1x_negtdchits;   //!
   TBranch        *b_H_hod_1x_negtdchits;   //!
   TBranch        *b_Ndata_H_hod_1x_posadchits;   //!
   TBranch        *b_H_hod_1x_posadchits;   //!
   TBranch        *b_Ndata_H_hod_1x_postdchits;   //!
   TBranch        *b_H_hod_1x_postdchits;   //!
   TBranch        *b_Ndata_H_hod_1y_negadchits;   //!
   TBranch        *b_H_hod_1y_negadchits;   //!
   TBranch        *b_Ndata_H_hod_1y_negtdchits;   //!
   TBranch        *b_H_hod_1y_negtdchits;   //!
   TBranch        *b_Ndata_H_hod_1y_posadchits;   //!
   TBranch        *b_H_hod_1y_posadchits;   //!
   TBranch        *b_Ndata_H_hod_1y_postdchits;   //!
   TBranch        *b_H_hod_1y_postdchits;   //!
   TBranch        *b_Ndata_H_hod_2x_negadchits;   //!
   TBranch        *b_H_hod_2x_negadchits;   //!
   TBranch        *b_Ndata_H_hod_2x_negtdchits;   //!
   TBranch        *b_H_hod_2x_negtdchits;   //!
   TBranch        *b_Ndata_H_hod_2x_posadchits;   //!
   TBranch        *b_H_hod_2x_posadchits;   //!
   TBranch        *b_Ndata_H_hod_2x_postdchits;   //!
   TBranch        *b_H_hod_2x_postdchits;   //!
   TBranch        *b_Ndata_H_hod_2y_negadchits;   //!
   TBranch        *b_H_hod_2y_negadchits;   //!
   TBranch        *b_Ndata_H_hod_2y_negtdchits;   //!
   TBranch        *b_H_hod_2y_negtdchits;   //!
   TBranch        *b_Ndata_H_hod_2y_posadchits;   //!
   TBranch        *b_H_hod_2y_posadchits;   //!
   TBranch        *b_Ndata_H_hod_2y_postdchits;   //!
   TBranch        *b_H_hod_2y_postdchits;   //!
   TBranch        *b_Ndata_H_tr_beta;   //!
   TBranch        *b_H_tr_beta;   //!
   TBranch        *b_Ndata_H_tr_chi2;   //!
   TBranch        *b_H_tr_chi2;   //!
   TBranch        *b_Ndata_H_tr_d_ph;   //!
   TBranch        *b_H_tr_d_ph;   //!
   TBranch        *b_Ndata_H_tr_d_th;   //!
   TBranch        *b_H_tr_d_th;   //!
   TBranch        *b_Ndata_H_tr_d_x;   //!
   TBranch        *b_H_tr_d_x;   //!
   TBranch        *b_Ndata_H_tr_d_y;   //!
   TBranch        *b_H_tr_d_y;   //!
   TBranch        *b_Ndata_H_tr_dbeta;   //!
   TBranch        *b_H_tr_dbeta;   //!
   TBranch        *b_Ndata_H_tr_dtime;   //!
   TBranch        *b_H_tr_dtime;   //!
   TBranch        *b_Ndata_H_tr_flag;   //!
   TBranch        *b_H_tr_flag;   //!
   TBranch        *b_Ndata_H_tr_ndof;   //!
   TBranch        *b_H_tr_ndof;   //!
   TBranch        *b_Ndata_H_tr_p;   //!
   TBranch        *b_H_tr_p;   //!
   TBranch        *b_Ndata_H_tr_pathl;   //!
   TBranch        *b_H_tr_pathl;   //!
   TBranch        *b_Ndata_H_tr_ph;   //!
   TBranch        *b_H_tr_ph;   //!
   TBranch        *b_Ndata_H_tr_px;   //!
   TBranch        *b_H_tr_px;   //!
   TBranch        *b_Ndata_H_tr_py;   //!
   TBranch        *b_H_tr_py;   //!
   TBranch        *b_Ndata_H_tr_pz;   //!
   TBranch        *b_H_tr_pz;   //!
   TBranch        *b_Ndata_H_tr_r_ph;   //!
   TBranch        *b_H_tr_r_ph;   //!
   TBranch        *b_Ndata_H_tr_r_th;   //!
   TBranch        *b_H_tr_r_th;   //!
   TBranch        *b_Ndata_H_tr_r_x;   //!
   TBranch        *b_H_tr_r_x;   //!
   TBranch        *b_Ndata_H_tr_r_y;   //!
   TBranch        *b_H_tr_r_y;   //!
   TBranch        *b_Ndata_H_tr_tg_dp;   //!
   TBranch        *b_H_tr_tg_dp;   //!
   TBranch        *b_Ndata_H_tr_tg_ph;   //!
   TBranch        *b_H_tr_tg_ph;   //!
   TBranch        *b_Ndata_H_tr_tg_th;   //!
   TBranch        *b_H_tr_tg_th;   //!
   TBranch        *b_Ndata_H_tr_tg_y;   //!
   TBranch        *b_H_tr_tg_y;   //!
   TBranch        *b_Ndata_H_tr_th;   //!
   TBranch        *b_H_tr_th;   //!
   TBranch        *b_Ndata_H_tr_time;   //!
   TBranch        *b_H_tr_time;   //!
   TBranch        *b_Ndata_H_tr_vx;   //!
   TBranch        *b_H_tr_vx;   //!
   TBranch        *b_Ndata_H_tr_vy;   //!
   TBranch        *b_H_tr_vy;   //!
   TBranch        *b_Ndata_H_tr_vz;   //!
   TBranch        *b_H_tr_vz;   //!
   TBranch        *b_Ndata_H_tr_x;   //!
   TBranch        *b_H_tr_x;   //!
   TBranch        *b_Ndata_H_tr_y;   //!
   TBranch        *b_H_tr_y;   //!
   TBranch        *b_Ndata_S_cal_1pr_aneg;   //!
   TBranch        *b_S_cal_1pr_aneg;   //!
   TBranch        *b_Ndata_S_cal_1pr_aneg_p;   //!
   TBranch        *b_S_cal_1pr_aneg_p;   //!
   TBranch        *b_Ndata_S_cal_1pr_apos;   //!
   TBranch        *b_S_cal_1pr_apos;   //!
   TBranch        *b_Ndata_S_cal_1pr_apos_p;   //!
   TBranch        *b_S_cal_1pr_apos_p;   //!
   TBranch        *b_Ndata_S_cal_1pr_emean;   //!
   TBranch        *b_S_cal_1pr_emean;   //!
   TBranch        *b_Ndata_S_cal_1pr_eneg;   //!
   TBranch        *b_S_cal_1pr_eneg;   //!
   TBranch        *b_Ndata_S_cal_1pr_epos;   //!
   TBranch        *b_S_cal_1pr_epos;   //!
   TBranch        *b_Ndata_S_cal_1pr_negadchits;   //!
   TBranch        *b_S_cal_1pr_negadchits;   //!
   TBranch        *b_Ndata_S_cal_1pr_posadchits;   //!
   TBranch        *b_S_cal_1pr_posadchits;   //!
   TBranch        *b_Ndata_S_cal_2ta_aneg;   //!
   TBranch        *b_S_cal_2ta_aneg;   //!
   TBranch        *b_Ndata_S_cal_2ta_aneg_p;   //!
   TBranch        *b_S_cal_2ta_aneg_p;   //!
   TBranch        *b_Ndata_S_cal_2ta_apos;   //!
   TBranch        *b_S_cal_2ta_apos;   //!
   TBranch        *b_Ndata_S_cal_2ta_apos_p;   //!
   TBranch        *b_S_cal_2ta_apos_p;   //!
   TBranch        *b_Ndata_S_cal_2ta_emean;   //!
   TBranch        *b_S_cal_2ta_emean;   //!
   TBranch        *b_Ndata_S_cal_2ta_eneg;   //!
   TBranch        *b_S_cal_2ta_eneg;   //!
   TBranch        *b_Ndata_S_cal_2ta_epos;   //!
   TBranch        *b_S_cal_2ta_epos;   //!
   TBranch        *b_Ndata_S_cal_2ta_negadchits;   //!
   TBranch        *b_S_cal_2ta_negadchits;   //!
   TBranch        *b_Ndata_S_cal_2ta_posadchits;   //!
   TBranch        *b_S_cal_2ta_posadchits;   //!
   TBranch        *b_Ndata_S_cal_3ta_aneg;   //!
   TBranch        *b_S_cal_3ta_aneg;   //!
   TBranch        *b_Ndata_S_cal_3ta_aneg_p;   //!
   TBranch        *b_S_cal_3ta_aneg_p;   //!
   TBranch        *b_Ndata_S_cal_3ta_apos;   //!
   TBranch        *b_S_cal_3ta_apos;   //!
   TBranch        *b_Ndata_S_cal_3ta_apos_p;   //!
   TBranch        *b_S_cal_3ta_apos_p;   //!
   TBranch        *b_Ndata_S_cal_3ta_emean;   //!
   TBranch        *b_S_cal_3ta_emean;   //!
   TBranch        *b_Ndata_S_cal_3ta_eneg;   //!
   TBranch        *b_S_cal_3ta_eneg;   //!
   TBranch        *b_Ndata_S_cal_3ta_epos;   //!
   TBranch        *b_S_cal_3ta_epos;   //!
   TBranch        *b_Ndata_S_cal_3ta_negadchits;   //!
   TBranch        *b_S_cal_3ta_negadchits;   //!
   TBranch        *b_Ndata_S_cal_3ta_posadchits;   //!
   TBranch        *b_S_cal_3ta_posadchits;   //!
   TBranch        *b_Ndata_S_cal_4ta_aneg;   //!
   TBranch        *b_S_cal_4ta_aneg;   //!
   TBranch        *b_Ndata_S_cal_4ta_aneg_p;   //!
   TBranch        *b_S_cal_4ta_aneg_p;   //!
   TBranch        *b_Ndata_S_cal_4ta_apos;   //!
   TBranch        *b_S_cal_4ta_apos;   //!
   TBranch        *b_Ndata_S_cal_4ta_apos_p;   //!
   TBranch        *b_S_cal_4ta_apos_p;   //!
   TBranch        *b_Ndata_S_cal_4ta_emean;   //!
   TBranch        *b_S_cal_4ta_emean;   //!
   TBranch        *b_Ndata_S_cal_4ta_eneg;   //!
   TBranch        *b_S_cal_4ta_eneg;   //!
   TBranch        *b_Ndata_S_cal_4ta_epos;   //!
   TBranch        *b_S_cal_4ta_epos;   //!
   TBranch        *b_Ndata_S_cal_4ta_negadchits;   //!
   TBranch        *b_S_cal_4ta_negadchits;   //!
   TBranch        *b_Ndata_S_cal_4ta_posadchits;   //!
   TBranch        *b_S_cal_4ta_posadchits;   //!
   TBranch        *b_Ndata_S_dc_1u1_dist;   //!
   TBranch        *b_S_dc_1u1_dist;   //!
   TBranch        *b_Ndata_S_dc_1u1_rawtdc;   //!
   TBranch        *b_S_dc_1u1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1u1_tdchits;   //!
   TBranch        *b_S_dc_1u1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1u1_time;   //!
   TBranch        *b_S_dc_1u1_time;   //!
   TBranch        *b_Ndata_S_dc_1u2_dist;   //!
   TBranch        *b_S_dc_1u2_dist;   //!
   TBranch        *b_Ndata_S_dc_1u2_rawtdc;   //!
   TBranch        *b_S_dc_1u2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1u2_tdchits;   //!
   TBranch        *b_S_dc_1u2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1u2_time;   //!
   TBranch        *b_S_dc_1u2_time;   //!
   TBranch        *b_Ndata_S_dc_1v1_dist;   //!
   TBranch        *b_S_dc_1v1_dist;   //!
   TBranch        *b_Ndata_S_dc_1v1_rawtdc;   //!
   TBranch        *b_S_dc_1v1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1v1_tdchits;   //!
   TBranch        *b_S_dc_1v1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1v1_time;   //!
   TBranch        *b_S_dc_1v1_time;   //!
   TBranch        *b_Ndata_S_dc_1v2_dist;   //!
   TBranch        *b_S_dc_1v2_dist;   //!
   TBranch        *b_Ndata_S_dc_1v2_rawtdc;   //!
   TBranch        *b_S_dc_1v2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1v2_tdchits;   //!
   TBranch        *b_S_dc_1v2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1v2_time;   //!
   TBranch        *b_S_dc_1v2_time;   //!
   TBranch        *b_Ndata_S_dc_1x1_dist;   //!
   TBranch        *b_S_dc_1x1_dist;   //!
   TBranch        *b_Ndata_S_dc_1x1_rawtdc;   //!
   TBranch        *b_S_dc_1x1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1x1_tdchits;   //!
   TBranch        *b_S_dc_1x1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1x1_time;   //!
   TBranch        *b_S_dc_1x1_time;   //!
   TBranch        *b_Ndata_S_dc_1x2_dist;   //!
   TBranch        *b_S_dc_1x2_dist;   //!
   TBranch        *b_Ndata_S_dc_1x2_rawtdc;   //!
   TBranch        *b_S_dc_1x2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_1x2_tdchits;   //!
   TBranch        *b_S_dc_1x2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_1x2_time;   //!
   TBranch        *b_S_dc_1x2_time;   //!
   TBranch        *b_Ndata_S_dc_2u1_dist;   //!
   TBranch        *b_S_dc_2u1_dist;   //!
   TBranch        *b_Ndata_S_dc_2u1_rawtdc;   //!
   TBranch        *b_S_dc_2u1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2u1_tdchits;   //!
   TBranch        *b_S_dc_2u1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2u1_time;   //!
   TBranch        *b_S_dc_2u1_time;   //!
   TBranch        *b_Ndata_S_dc_2u2_dist;   //!
   TBranch        *b_S_dc_2u2_dist;   //!
   TBranch        *b_Ndata_S_dc_2u2_rawtdc;   //!
   TBranch        *b_S_dc_2u2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2u2_tdchits;   //!
   TBranch        *b_S_dc_2u2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2u2_time;   //!
   TBranch        *b_S_dc_2u2_time;   //!
   TBranch        *b_Ndata_S_dc_2v1_dist;   //!
   TBranch        *b_S_dc_2v1_dist;   //!
   TBranch        *b_Ndata_S_dc_2v1_rawtdc;   //!
   TBranch        *b_S_dc_2v1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2v1_tdchits;   //!
   TBranch        *b_S_dc_2v1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2v1_time;   //!
   TBranch        *b_S_dc_2v1_time;   //!
   TBranch        *b_Ndata_S_dc_2v2_dist;   //!
   TBranch        *b_S_dc_2v2_dist;   //!
   TBranch        *b_Ndata_S_dc_2v2_rawtdc;   //!
   TBranch        *b_S_dc_2v2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2v2_tdchits;   //!
   TBranch        *b_S_dc_2v2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2v2_time;   //!
   TBranch        *b_S_dc_2v2_time;   //!
   TBranch        *b_Ndata_S_dc_2x1_dist;   //!
   TBranch        *b_S_dc_2x1_dist;   //!
   TBranch        *b_Ndata_S_dc_2x1_rawtdc;   //!
   TBranch        *b_S_dc_2x1_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2x1_tdchits;   //!
   TBranch        *b_S_dc_2x1_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2x1_time;   //!
   TBranch        *b_S_dc_2x1_time;   //!
   TBranch        *b_Ndata_S_dc_2x2_dist;   //!
   TBranch        *b_S_dc_2x2_dist;   //!
   TBranch        *b_Ndata_S_dc_2x2_rawtdc;   //!
   TBranch        *b_S_dc_2x2_rawtdc;   //!
   TBranch        *b_Ndata_S_dc_2x2_tdchits;   //!
   TBranch        *b_S_dc_2x2_tdchits;   //!
   TBranch        *b_Ndata_S_dc_2x2_time;   //!
   TBranch        *b_S_dc_2x2_time;   //!
   TBranch        *b_Ndata_S_dc_residual;   //!
   TBranch        *b_S_dc_residual;   //!
   TBranch        *b_Ndata_S_dc_x;   //!
   TBranch        *b_S_dc_x;   //!
   TBranch        *b_Ndata_S_dc_xp;   //!
   TBranch        *b_S_dc_xp;   //!
   TBranch        *b_Ndata_S_dc_y;   //!
   TBranch        *b_S_dc_y;   //!
   TBranch        *b_Ndata_S_dc_yp;   //!
   TBranch        *b_S_dc_yp;   //!
   TBranch        *b_Ndata_S_hod_1x_negadchits;   //!
   TBranch        *b_S_hod_1x_negadchits;   //!
   TBranch        *b_Ndata_S_hod_1x_negtdchits;   //!
   TBranch        *b_S_hod_1x_negtdchits;   //!
   TBranch        *b_Ndata_S_hod_1x_posadchits;   //!
   TBranch        *b_S_hod_1x_posadchits;   //!
   TBranch        *b_Ndata_S_hod_1x_postdchits;   //!
   TBranch        *b_S_hod_1x_postdchits;   //!
   TBranch        *b_Ndata_S_hod_1y_negadchits;   //!
   TBranch        *b_S_hod_1y_negadchits;   //!
   TBranch        *b_Ndata_S_hod_1y_negtdchits;   //!
   TBranch        *b_S_hod_1y_negtdchits;   //!
   TBranch        *b_Ndata_S_hod_1y_posadchits;   //!
   TBranch        *b_S_hod_1y_posadchits;   //!
   TBranch        *b_Ndata_S_hod_1y_postdchits;   //!
   TBranch        *b_S_hod_1y_postdchits;   //!
   TBranch        *b_Ndata_S_hod_2x_negadchits;   //!
   TBranch        *b_S_hod_2x_negadchits;   //!
   TBranch        *b_Ndata_S_hod_2x_negtdchits;   //!
   TBranch        *b_S_hod_2x_negtdchits;   //!
   TBranch        *b_Ndata_S_hod_2x_posadchits;   //!
   TBranch        *b_S_hod_2x_posadchits;   //!
   TBranch        *b_Ndata_S_hod_2x_postdchits;   //!
   TBranch        *b_S_hod_2x_postdchits;   //!
   TBranch        *b_Ndata_S_hod_2y_negadchits;   //!
   TBranch        *b_S_hod_2y_negadchits;   //!
   TBranch        *b_Ndata_S_hod_2y_negtdchits;   //!
   TBranch        *b_S_hod_2y_negtdchits;   //!
   TBranch        *b_Ndata_S_hod_2y_posadchits;   //!
   TBranch        *b_S_hod_2y_posadchits;   //!
   TBranch        *b_Ndata_S_hod_2y_postdchits;   //!
   TBranch        *b_S_hod_2y_postdchits;   //!
   TBranch        *b_H_aero_neg_npe_sum;   //!
   TBranch        *b_H_aero_ngood_hits;   //!
   TBranch        *b_H_aero_npe_sum;   //!
   TBranch        *b_H_aero_ntdc_neg_hits;   //!
   TBranch        *b_H_aero_ntdc_pos_hits;   //!
   TBranch        *b_H_aero_pos_npe_sum;   //!
   TBranch        *b_H_cal_1pr_eplane;   //!
   TBranch        *b_H_cal_1pr_eplane_neg;   //!
   TBranch        *b_H_cal_1pr_eplane_pos;   //!
   TBranch        *b_H_cal_2ta_eplane;   //!
   TBranch        *b_H_cal_2ta_eplane_neg;   //!
   TBranch        *b_H_cal_2ta_eplane_pos;   //!
   TBranch        *b_H_cal_3ta_eplane;   //!
   TBranch        *b_H_cal_3ta_eplane_neg;   //!
   TBranch        *b_H_cal_3ta_eplane_pos;   //!
   TBranch        *b_H_cal_4ta_eplane;   //!
   TBranch        *b_H_cal_4ta_eplane_neg;   //!
   TBranch        *b_H_cal_4ta_eplane_pos;   //!
   TBranch        *b_H_cal_emax;   //!
   TBranch        *b_H_cal_eprmax;   //!
   TBranch        *b_H_cal_mult;   //!
   TBranch        *b_H_cal_nclust;   //!
   TBranch        *b_H_cal_nhits;   //!
   TBranch        *b_H_cal_tre;   //!
   TBranch        *b_H_cal_trecor;   //!
   TBranch        *b_H_cal_treplcor;   //!
   TBranch        *b_H_cal_trepr;   //!
   TBranch        *b_H_cal_treprcor;   //!
   TBranch        *b_H_cal_trx;   //!
   TBranch        *b_H_cal_try;   //!
   TBranch        *b_H_cal_xmax;   //!
   TBranch        *b_H_cher_ncherhit;   //!
   TBranch        *b_H_cher_npesum;   //!
   TBranch        *b_H_dc_1u1_nhit;   //!
   TBranch        *b_H_dc_1v1_nhit;   //!
   TBranch        *b_H_dc_1x1_nhit;   //!
   TBranch        *b_H_dc_1x2_nhit;   //!
   TBranch        *b_H_dc_1y1_nhit;   //!
   TBranch        *b_H_dc_1y2_nhit;   //!
   TBranch        *b_H_dc_2u1_nhit;   //!
   TBranch        *b_H_dc_2v1_nhit;   //!
   TBranch        *b_H_dc_2x1_nhit;   //!
   TBranch        *b_H_dc_2x2_nhit;   //!
   TBranch        *b_H_dc_2y1_nhit;   //!
   TBranch        *b_H_dc_2y2_nhit;   //!
   TBranch        *b_H_dc_nhit;   //!
   TBranch        *b_H_dc_nsp;   //!
   TBranch        *b_H_dc_ntrack;   //!
   TBranch        *b_H_dc_tnhit;   //!
   TBranch        *b_H_dc_trawhit;   //!
   TBranch        *b_H_gold_dp;   //!
   TBranch        *b_H_gold_index;   //!
   TBranch        *b_H_gold_ok;   //!
   TBranch        *b_H_gold_p;   //!
   TBranch        *b_H_gold_ph;   //!
   TBranch        *b_H_gold_px;   //!
   TBranch        *b_H_gold_py;   //!
   TBranch        *b_H_gold_pz;   //!
   TBranch        *b_H_gold_th;   //!
   TBranch        *b_H_gold_x;   //!
   TBranch        *b_H_gold_y;   //!
   TBranch        *b_H_hod_1x_fptime;   //!
   TBranch        *b_H_hod_1y_fptime;   //!
   TBranch        *b_H_hod_2x_fptime;   //!
   TBranch        *b_H_hod_2y_fptime;   //!
   TBranch        *b_H_hod_hgoodstarttime;   //!
   TBranch        *b_H_hod_starttime;   //!
   TBranch        *b_H_tr_n;   //!
   TBranch        *b_S_cal_1pr_eplane;   //!
   TBranch        *b_S_cal_1pr_eplane_neg;   //!
   TBranch        *b_S_cal_1pr_eplane_pos;   //!
   TBranch        *b_S_cal_2ta_eplane;   //!
   TBranch        *b_S_cal_2ta_eplane_neg;   //!
   TBranch        *b_S_cal_2ta_eplane_pos;   //!
   TBranch        *b_S_cal_3ta_eplane;   //!
   TBranch        *b_S_cal_3ta_eplane_neg;   //!
   TBranch        *b_S_cal_3ta_eplane_pos;   //!
   TBranch        *b_S_cal_4ta_eplane;   //!
   TBranch        *b_S_cal_4ta_eplane_neg;   //!
   TBranch        *b_S_cal_4ta_eplane_pos;   //!
   TBranch        *b_S_cal_emax;   //!
   TBranch        *b_S_cal_eprmax;   //!
   TBranch        *b_S_cal_mult;   //!
   TBranch        *b_S_cal_nclust;   //!
   TBranch        *b_S_cal_nhits;   //!
   TBranch        *b_S_cal_tre;   //!
   TBranch        *b_S_cal_trecor;   //!
   TBranch        *b_S_cal_treplcor;   //!
   TBranch        *b_S_cal_trepr;   //!
   TBranch        *b_S_cal_treprcor;   //!
   TBranch        *b_S_cal_trx;   //!
   TBranch        *b_S_cal_try;   //!
   TBranch        *b_S_cal_xmax;   //!
   TBranch        *b_S_dc_1u1_nhit;   //!
   TBranch        *b_S_dc_1u2_nhit;   //!
   TBranch        *b_S_dc_1v1_nhit;   //!
   TBranch        *b_S_dc_1v2_nhit;   //!
   TBranch        *b_S_dc_1x1_nhit;   //!
   TBranch        *b_S_dc_1x2_nhit;   //!
   TBranch        *b_S_dc_2u1_nhit;   //!
   TBranch        *b_S_dc_2u2_nhit;   //!
   TBranch        *b_S_dc_2v1_nhit;   //!
   TBranch        *b_S_dc_2v2_nhit;   //!
   TBranch        *b_S_dc_2x1_nhit;   //!
   TBranch        *b_S_dc_2x2_nhit;   //!
   TBranch        *b_S_dc_nhit;   //!
   TBranch        *b_S_dc_nsp;   //!
   TBranch        *b_S_dc_ntrack;   //!
   TBranch        *b_S_hod_1x_fptime;   //!
   TBranch        *b_S_hod_1y_fptime;   //!
   TBranch        *b_S_hod_2x_fptime;   //!
   TBranch        *b_S_hod_2y_fptime;   //!
   TBranch        *b_S_hod_hgoodstarttime;   //!
   TBranch        *b_S_hod_starttime;   //!
   TBranch        *b_S_tr_n;   //!
   TBranch        *b_g_evnum;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtTime;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtNum;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtType;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fEvtLen;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fHelicity;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fTargetPol;   //!
   TBranch        *b_Event_Branch_fEvtHdr_fRun;   //!
   TBranch        *b_RB_raster_frx_raw_adc;
   TBranch        *b_RB_raster_fry_raw_adc;
   TBranch        *b_RB_raster_frx_adc;
   TBranch        *b_RB_raster_fry_adc;
   TBranch        *b_RB_raster_frx;
   TBranch        *b_RB_raster_fry;

   analyze_hcana_tree(TString ifile,TTree *tree=0);
   virtual ~analyze_hcana_tree();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
   virtual void     PrintTrack(Long64_t entry = -1);
};

#endif

#ifdef analyze_hcana_tree_cxx
analyze_hcana_tree::analyze_hcana_tree(TString ifile,TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(ifile);
      if (!f || !f->IsOpen()) {
         f = new TFile(ifile);
      }
      f->GetObject("T",tree);

   }
   Init(tree);
}

analyze_hcana_tree::~analyze_hcana_tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analyze_hcana_tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analyze_hcana_tree::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void analyze_hcana_tree::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("Ndata.S.tr.beta", &Ndata_S_tr_beta, &b_Ndata_S_tr_beta);
   fChain->SetBranchAddress("S.tr.beta", S_tr_beta, &b_S_tr_beta);
   fChain->SetBranchAddress("Ndata.S.tr.chi2", &Ndata_S_tr_chi2, &b_Ndata_S_tr_chi2);
   fChain->SetBranchAddress("S.tr.chi2", S_tr_chi2, &b_S_tr_chi2);
   fChain->SetBranchAddress("Ndata.S.tr.d_ph", &Ndata_S_tr_d_ph, &b_Ndata_S_tr_d_ph);
   fChain->SetBranchAddress("S.tr.d_ph", S_tr_d_ph, &b_S_tr_d_ph);
   fChain->SetBranchAddress("Ndata.S.tr.d_th", &Ndata_S_tr_d_th, &b_Ndata_S_tr_d_th);
   fChain->SetBranchAddress("S.tr.d_th", S_tr_d_th, &b_S_tr_d_th);
   fChain->SetBranchAddress("Ndata.S.tr.d_x", &Ndata_S_tr_d_x, &b_Ndata_S_tr_d_x);
   fChain->SetBranchAddress("S.tr.d_x", S_tr_d_x, &b_S_tr_d_x);
   fChain->SetBranchAddress("Ndata.S.tr.d_y", &Ndata_S_tr_d_y, &b_Ndata_S_tr_d_y);
   fChain->SetBranchAddress("S.tr.d_y", S_tr_d_y, &b_S_tr_d_y);
   fChain->SetBranchAddress("Ndata.S.tr.dbeta", &Ndata_S_tr_dbeta, &b_Ndata_S_tr_dbeta);
   fChain->SetBranchAddress("S.tr.dbeta", S_tr_dbeta, &b_S_tr_dbeta);
   fChain->SetBranchAddress("Ndata.S.tr.dtime", &Ndata_S_tr_dtime, &b_Ndata_S_tr_dtime);
   fChain->SetBranchAddress("S.tr.dtime", S_tr_dtime, &b_S_tr_dtime);
   fChain->SetBranchAddress("Ndata.S.tr.flag", &Ndata_S_tr_flag, &b_Ndata_S_tr_flag);
   fChain->SetBranchAddress("S.tr.flag", S_tr_flag, &b_S_tr_flag);
   fChain->SetBranchAddress("Ndata.S.tr.ndof", &Ndata_S_tr_ndof, &b_Ndata_S_tr_ndof);
   fChain->SetBranchAddress("S.tr.ndof", S_tr_ndof, &b_S_tr_ndof);
   fChain->SetBranchAddress("Ndata.S.tr.p", &Ndata_S_tr_p, &b_Ndata_S_tr_p);
   fChain->SetBranchAddress("S.tr.p", S_tr_p, &b_S_tr_p);
   fChain->SetBranchAddress("Ndata.S.tr.pathl", &Ndata_S_tr_pathl, &b_Ndata_S_tr_pathl);
   fChain->SetBranchAddress("S.tr.pathl", S_tr_pathl, &b_S_tr_pathl);
   fChain->SetBranchAddress("Ndata.S.tr.ph", &Ndata_S_tr_ph, &b_Ndata_S_tr_ph);
   fChain->SetBranchAddress("S.tr.ph", S_tr_ph, &b_S_tr_ph);
   fChain->SetBranchAddress("Ndata.S.tr.px", &Ndata_S_tr_px, &b_Ndata_S_tr_px);
   fChain->SetBranchAddress("S.tr.px", S_tr_px, &b_S_tr_px);
   fChain->SetBranchAddress("Ndata.S.tr.py", &Ndata_S_tr_py, &b_Ndata_S_tr_py);
   fChain->SetBranchAddress("S.tr.py", S_tr_py, &b_S_tr_py);
   fChain->SetBranchAddress("Ndata.S.tr.pz", &Ndata_S_tr_pz, &b_Ndata_S_tr_pz);
   fChain->SetBranchAddress("S.tr.pz", S_tr_pz, &b_S_tr_pz);
   fChain->SetBranchAddress("Ndata.S.tr.r_ph", &Ndata_S_tr_r_ph, &b_Ndata_S_tr_r_ph);
   fChain->SetBranchAddress("S.tr.r_ph", S_tr_r_ph, &b_S_tr_r_ph);
   fChain->SetBranchAddress("Ndata.S.tr.r_th", &Ndata_S_tr_r_th, &b_Ndata_S_tr_r_th);
   fChain->SetBranchAddress("S.tr.r_th", S_tr_r_th, &b_S_tr_r_th);
   fChain->SetBranchAddress("Ndata.S.tr.r_x", &Ndata_S_tr_r_x, &b_Ndata_S_tr_r_x);
   fChain->SetBranchAddress("S.tr.r_x", S_tr_r_x, &b_S_tr_r_x);
   fChain->SetBranchAddress("Ndata.S.tr.r_y", &Ndata_S_tr_r_y, &b_Ndata_S_tr_r_y);
   fChain->SetBranchAddress("S.tr.r_y", S_tr_r_y, &b_S_tr_r_y);
   fChain->SetBranchAddress("Ndata.S.tr.tg_dp", &Ndata_S_tr_tg_dp, &b_Ndata_S_tr_tg_dp);
   fChain->SetBranchAddress("S.tr.tg_dp", S_tr_tg_dp, &b_S_tr_tg_dp);
   fChain->SetBranchAddress("Ndata.S.tr.tg_ph", &Ndata_S_tr_tg_ph, &b_Ndata_S_tr_tg_ph);
   fChain->SetBranchAddress("S.tr.tg_ph", S_tr_tg_ph, &b_S_tr_tg_ph);
   fChain->SetBranchAddress("Ndata.S.tr.tg_th", &Ndata_S_tr_tg_th, &b_Ndata_S_tr_tg_th);
   fChain->SetBranchAddress("S.tr.tg_th", S_tr_tg_th, &b_S_tr_tg_th);
   fChain->SetBranchAddress("Ndata.S.tr.tg_y", &Ndata_S_tr_tg_y, &b_Ndata_S_tr_tg_y);
   fChain->SetBranchAddress("S.tr.tg_y", S_tr_tg_y, &b_S_tr_tg_y);
   fChain->SetBranchAddress("Ndata.S.tr.th", &Ndata_S_tr_th, &b_Ndata_S_tr_th);
   fChain->SetBranchAddress("S.tr.th", S_tr_th, &b_S_tr_th);
   fChain->SetBranchAddress("Ndata.S.tr.time", &Ndata_S_tr_time, &b_Ndata_S_tr_time);
   fChain->SetBranchAddress("S.tr.time", S_tr_time, &b_S_tr_time);
   fChain->SetBranchAddress("Ndata.S.tr.vx", &Ndata_S_tr_vx, &b_Ndata_S_tr_vx);
   fChain->SetBranchAddress("S.tr.vx", S_tr_vx, &b_S_tr_vx);
   fChain->SetBranchAddress("Ndata.S.tr.vy", &Ndata_S_tr_vy, &b_Ndata_S_tr_vy);
   fChain->SetBranchAddress("S.tr.vy", S_tr_vy, &b_S_tr_vy);
   fChain->SetBranchAddress("Ndata.S.tr.vz", &Ndata_S_tr_vz, &b_Ndata_S_tr_vz);
   fChain->SetBranchAddress("S.tr.vz", S_tr_vz, &b_S_tr_vz);
   fChain->SetBranchAddress("Ndata.S.tr.x", &Ndata_S_tr_x, &b_Ndata_S_tr_x);
   fChain->SetBranchAddress("S.tr.x", S_tr_x, &b_S_tr_x);
   fChain->SetBranchAddress("Ndata.S.tr.y", &Ndata_S_tr_y, &b_Ndata_S_tr_y);
   fChain->SetBranchAddress("S.tr.y", S_tr_y, &b_S_tr_y);
   fChain->SetBranchAddress("Ndata.H.aero.aneg", &Ndata_H_aero_aneg, &b_Ndata_H_aero_aneg);
   fChain->SetBranchAddress("H.aero.aneg", H_aero_aneg, &b_H_aero_aneg);
   fChain->SetBranchAddress("Ndata.H.aero.aneg_p", &Ndata_H_aero_aneg_p, &b_Ndata_H_aero_aneg_p);
   fChain->SetBranchAddress("H.aero.aneg_p", H_aero_aneg_p, &b_H_aero_aneg_p);
   fChain->SetBranchAddress("Ndata.H.aero.apos", &Ndata_H_aero_apos, &b_Ndata_H_aero_apos);
   fChain->SetBranchAddress("H.aero.apos", H_aero_apos, &b_H_aero_apos);
   fChain->SetBranchAddress("Ndata.H.aero.apos_p", &Ndata_H_aero_apos_p, &b_Ndata_H_aero_apos_p);
   fChain->SetBranchAddress("H.aero.apos_p", H_aero_apos_p, &b_H_aero_apos_p);
   fChain->SetBranchAddress("Ndata.H.aero.neg_npe", &Ndata_H_aero_neg_npe, &b_Ndata_H_aero_neg_npe);
   fChain->SetBranchAddress("H.aero.neg_npe", H_aero_neg_npe, &b_H_aero_neg_npe);
   fChain->SetBranchAddress("Ndata.H.aero.negadchits", &Ndata_H_aero_negadchits, &b_Ndata_H_aero_negadchits);
   fChain->SetBranchAddress("H.aero.negadchits", &H_aero_negadchits, &b_H_aero_negadchits);
   fChain->SetBranchAddress("Ndata.H.aero.negtdchits", &Ndata_H_aero_negtdchits, &b_Ndata_H_aero_negtdchits);
   fChain->SetBranchAddress("H.aero.negtdchits", &H_aero_negtdchits, &b_H_aero_negtdchits);
   fChain->SetBranchAddress("Ndata.H.aero.pos_npe", &Ndata_H_aero_pos_npe, &b_Ndata_H_aero_pos_npe);
   fChain->SetBranchAddress("H.aero.pos_npe", H_aero_pos_npe, &b_H_aero_pos_npe);
   fChain->SetBranchAddress("Ndata.H.aero.posadchits", &Ndata_H_aero_posadchits, &b_Ndata_H_aero_posadchits);
   fChain->SetBranchAddress("H.aero.posadchits", &H_aero_posadchits, &b_H_aero_posadchits);
   fChain->SetBranchAddress("Ndata.H.aero.postdchits", &Ndata_H_aero_postdchits, &b_Ndata_H_aero_postdchits);
   fChain->SetBranchAddress("H.aero.postdchits", &H_aero_postdchits, &b_H_aero_postdchits);
   fChain->SetBranchAddress("Ndata.H.aero.tneg", &Ndata_H_aero_tneg, &b_Ndata_H_aero_tneg);
   fChain->SetBranchAddress("H.aero.tneg", H_aero_tneg, &b_H_aero_tneg);
   fChain->SetBranchAddress("Ndata.H.aero.tpos", &Ndata_H_aero_tpos, &b_Ndata_H_aero_tpos);
   fChain->SetBranchAddress("H.aero.tpos", H_aero_tpos, &b_H_aero_tpos);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.aneg", &Ndata_H_cal_1pr_aneg, &b_Ndata_H_cal_1pr_aneg);
   fChain->SetBranchAddress("H.cal.1pr.aneg", H_cal_1pr_aneg, &b_H_cal_1pr_aneg);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.aneg_p", &Ndata_H_cal_1pr_aneg_p, &b_Ndata_H_cal_1pr_aneg_p);
   fChain->SetBranchAddress("H.cal.1pr.aneg_p", H_cal_1pr_aneg_p, &b_H_cal_1pr_aneg_p);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.apos", &Ndata_H_cal_1pr_apos, &b_Ndata_H_cal_1pr_apos);
   fChain->SetBranchAddress("H.cal.1pr.apos", H_cal_1pr_apos, &b_H_cal_1pr_apos);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.apos_p", &Ndata_H_cal_1pr_apos_p, &b_Ndata_H_cal_1pr_apos_p);
   fChain->SetBranchAddress("H.cal.1pr.apos_p", H_cal_1pr_apos_p, &b_H_cal_1pr_apos_p);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.emean", &Ndata_H_cal_1pr_emean, &b_Ndata_H_cal_1pr_emean);
   fChain->SetBranchAddress("H.cal.1pr.emean", H_cal_1pr_emean, &b_H_cal_1pr_emean);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.eneg", &Ndata_H_cal_1pr_eneg, &b_Ndata_H_cal_1pr_eneg);
   fChain->SetBranchAddress("H.cal.1pr.eneg", H_cal_1pr_eneg, &b_H_cal_1pr_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.epos", &Ndata_H_cal_1pr_epos, &b_Ndata_H_cal_1pr_epos);
   fChain->SetBranchAddress("H.cal.1pr.epos", H_cal_1pr_epos, &b_H_cal_1pr_epos);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.negadchits", &Ndata_H_cal_1pr_negadchits, &b_Ndata_H_cal_1pr_negadchits);
   fChain->SetBranchAddress("H.cal.1pr.negadchits", &H_cal_1pr_negadchits, &b_H_cal_1pr_negadchits);
   fChain->SetBranchAddress("Ndata.H.cal.1pr.posadchits", &Ndata_H_cal_1pr_posadchits, &b_Ndata_H_cal_1pr_posadchits);
   fChain->SetBranchAddress("H.cal.1pr.posadchits", &H_cal_1pr_posadchits, &b_H_cal_1pr_posadchits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.aneg", &Ndata_H_cal_2ta_aneg, &b_Ndata_H_cal_2ta_aneg);
   fChain->SetBranchAddress("H.cal.2ta.aneg", H_cal_2ta_aneg, &b_H_cal_2ta_aneg);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.aneg_p", &Ndata_H_cal_2ta_aneg_p, &b_Ndata_H_cal_2ta_aneg_p);
   fChain->SetBranchAddress("H.cal.2ta.aneg_p", H_cal_2ta_aneg_p, &b_H_cal_2ta_aneg_p);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.apos", &Ndata_H_cal_2ta_apos, &b_Ndata_H_cal_2ta_apos);
   fChain->SetBranchAddress("H.cal.2ta.apos", H_cal_2ta_apos, &b_H_cal_2ta_apos);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.apos_p", &Ndata_H_cal_2ta_apos_p, &b_Ndata_H_cal_2ta_apos_p);
   fChain->SetBranchAddress("H.cal.2ta.apos_p", H_cal_2ta_apos_p, &b_H_cal_2ta_apos_p);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.emean", &Ndata_H_cal_2ta_emean, &b_Ndata_H_cal_2ta_emean);
   fChain->SetBranchAddress("H.cal.2ta.emean", H_cal_2ta_emean, &b_H_cal_2ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.eneg", &Ndata_H_cal_2ta_eneg, &b_Ndata_H_cal_2ta_eneg);
   fChain->SetBranchAddress("H.cal.2ta.eneg", H_cal_2ta_eneg, &b_H_cal_2ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.epos", &Ndata_H_cal_2ta_epos, &b_Ndata_H_cal_2ta_epos);
   fChain->SetBranchAddress("H.cal.2ta.epos", H_cal_2ta_epos, &b_H_cal_2ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.negadchits", &Ndata_H_cal_2ta_negadchits, &b_Ndata_H_cal_2ta_negadchits);
   fChain->SetBranchAddress("H.cal.2ta.negadchits", &H_cal_2ta_negadchits, &b_H_cal_2ta_negadchits);
   fChain->SetBranchAddress("Ndata.H.cal.2ta.posadchits", &Ndata_H_cal_2ta_posadchits, &b_Ndata_H_cal_2ta_posadchits);
   fChain->SetBranchAddress("H.cal.2ta.posadchits", &H_cal_2ta_posadchits, &b_H_cal_2ta_posadchits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.aneg", &Ndata_H_cal_3ta_aneg, &b_Ndata_H_cal_3ta_aneg);
   fChain->SetBranchAddress("H.cal.3ta.aneg", H_cal_3ta_aneg, &b_H_cal_3ta_aneg);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.aneg_p", &Ndata_H_cal_3ta_aneg_p, &b_Ndata_H_cal_3ta_aneg_p);
   fChain->SetBranchAddress("H.cal.3ta.aneg_p", H_cal_3ta_aneg_p, &b_H_cal_3ta_aneg_p);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.apos", &Ndata_H_cal_3ta_apos, &b_Ndata_H_cal_3ta_apos);
   fChain->SetBranchAddress("H.cal.3ta.apos", H_cal_3ta_apos, &b_H_cal_3ta_apos);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.apos_p", &Ndata_H_cal_3ta_apos_p, &b_Ndata_H_cal_3ta_apos_p);
   fChain->SetBranchAddress("H.cal.3ta.apos_p", H_cal_3ta_apos_p, &b_H_cal_3ta_apos_p);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.emean", &Ndata_H_cal_3ta_emean, &b_Ndata_H_cal_3ta_emean);
   fChain->SetBranchAddress("H.cal.3ta.emean", H_cal_3ta_emean, &b_H_cal_3ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.eneg", &Ndata_H_cal_3ta_eneg, &b_Ndata_H_cal_3ta_eneg);
   fChain->SetBranchAddress("H.cal.3ta.eneg", H_cal_3ta_eneg, &b_H_cal_3ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.epos", &Ndata_H_cal_3ta_epos, &b_Ndata_H_cal_3ta_epos);
   fChain->SetBranchAddress("H.cal.3ta.epos", H_cal_3ta_epos, &b_H_cal_3ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.negadchits", &Ndata_H_cal_3ta_negadchits, &b_Ndata_H_cal_3ta_negadchits);
   fChain->SetBranchAddress("H.cal.3ta.negadchits", &H_cal_3ta_negadchits, &b_H_cal_3ta_negadchits);
   fChain->SetBranchAddress("Ndata.H.cal.3ta.posadchits", &Ndata_H_cal_3ta_posadchits, &b_Ndata_H_cal_3ta_posadchits);
   fChain->SetBranchAddress("H.cal.3ta.posadchits", &H_cal_3ta_posadchits, &b_H_cal_3ta_posadchits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.aneg", &Ndata_H_cal_4ta_aneg, &b_Ndata_H_cal_4ta_aneg);
   fChain->SetBranchAddress("H.cal.4ta.aneg", H_cal_4ta_aneg, &b_H_cal_4ta_aneg);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.aneg_p", &Ndata_H_cal_4ta_aneg_p, &b_Ndata_H_cal_4ta_aneg_p);
   fChain->SetBranchAddress("H.cal.4ta.aneg_p", H_cal_4ta_aneg_p, &b_H_cal_4ta_aneg_p);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.apos", &Ndata_H_cal_4ta_apos, &b_Ndata_H_cal_4ta_apos);
   fChain->SetBranchAddress("H.cal.4ta.apos", H_cal_4ta_apos, &b_H_cal_4ta_apos);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.apos_p", &Ndata_H_cal_4ta_apos_p, &b_Ndata_H_cal_4ta_apos_p);
   fChain->SetBranchAddress("H.cal.4ta.apos_p", H_cal_4ta_apos_p, &b_H_cal_4ta_apos_p);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.emean", &Ndata_H_cal_4ta_emean, &b_Ndata_H_cal_4ta_emean);
   fChain->SetBranchAddress("H.cal.4ta.emean", H_cal_4ta_emean, &b_H_cal_4ta_emean);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.eneg", &Ndata_H_cal_4ta_eneg, &b_Ndata_H_cal_4ta_eneg);
   fChain->SetBranchAddress("H.cal.4ta.eneg", H_cal_4ta_eneg, &b_H_cal_4ta_eneg);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.epos", &Ndata_H_cal_4ta_epos, &b_Ndata_H_cal_4ta_epos);
   fChain->SetBranchAddress("H.cal.4ta.epos", H_cal_4ta_epos, &b_H_cal_4ta_epos);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.negadchits", &Ndata_H_cal_4ta_negadchits, &b_Ndata_H_cal_4ta_negadchits);
   fChain->SetBranchAddress("H.cal.4ta.negadchits", &H_cal_4ta_negadchits, &b_H_cal_4ta_negadchits);
   fChain->SetBranchAddress("Ndata.H.cal.4ta.posadchits", &Ndata_H_cal_4ta_posadchits, &b_Ndata_H_cal_4ta_posadchits);
   fChain->SetBranchAddress("H.cal.4ta.posadchits", &H_cal_4ta_posadchits, &b_H_cal_4ta_posadchits);
   fChain->SetBranchAddress("Ndata.H.cher.adc", &Ndata_H_cher_adc, &b_Ndata_H_cher_adc);
   fChain->SetBranchAddress("H.cher.adc", H_cher_adc, &b_H_cher_adc);
   fChain->SetBranchAddress("Ndata.H.cher.adc_p", &Ndata_H_cher_adc_p, &b_Ndata_H_cher_adc_p);
   fChain->SetBranchAddress("H.cher.adc_p", H_cher_adc_p, &b_H_cher_adc_p);
   fChain->SetBranchAddress("Ndata.H.cher.npe", &Ndata_H_cher_npe, &b_Ndata_H_cher_npe);
   fChain->SetBranchAddress("H.cher.npe", H_cher_npe, &b_H_cher_npe);
   fChain->SetBranchAddress("Ndata.H.cher.phototubes", &Ndata_H_cher_phototubes, &b_Ndata_H_cher_phototubes);
   fChain->SetBranchAddress("H.cher.phototubes", H_cher_phototubes, &b_H_cher_phototubes);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.dist", &Ndata_H_dc_1u1_dist, &b_Ndata_H_dc_1u1_dist);
   fChain->SetBranchAddress("H.dc.1u1.dist", &H_dc_1u1_dist, &b_H_dc_1u1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.rawtdc", &Ndata_H_dc_1u1_rawtdc, &b_Ndata_H_dc_1u1_rawtdc);
   fChain->SetBranchAddress("H.dc.1u1.rawtdc", &H_dc_1u1_rawtdc, &b_H_dc_1u1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.tdchits", &Ndata_H_dc_1u1_tdchits, &b_Ndata_H_dc_1u1_tdchits);
   fChain->SetBranchAddress("H.dc.1u1.tdchits", &H_dc_1u1_tdchits, &b_H_dc_1u1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1u1.time", &Ndata_H_dc_1u1_time, &b_Ndata_H_dc_1u1_time);
   fChain->SetBranchAddress("H.dc.1u1.time", &H_dc_1u1_time, &b_H_dc_1u1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.dist", &Ndata_H_dc_1v1_dist, &b_Ndata_H_dc_1v1_dist);
   fChain->SetBranchAddress("H.dc.1v1.dist", &H_dc_1v1_dist, &b_H_dc_1v1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.rawtdc", &Ndata_H_dc_1v1_rawtdc, &b_Ndata_H_dc_1v1_rawtdc);
   fChain->SetBranchAddress("H.dc.1v1.rawtdc", &H_dc_1v1_rawtdc, &b_H_dc_1v1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.tdchits", &Ndata_H_dc_1v1_tdchits, &b_Ndata_H_dc_1v1_tdchits);
   fChain->SetBranchAddress("H.dc.1v1.tdchits", &H_dc_1v1_tdchits, &b_H_dc_1v1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1v1.time", &Ndata_H_dc_1v1_time, &b_Ndata_H_dc_1v1_time);
   fChain->SetBranchAddress("H.dc.1v1.time", &H_dc_1v1_time, &b_H_dc_1v1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.dist", &Ndata_H_dc_1x1_dist, &b_Ndata_H_dc_1x1_dist);
   fChain->SetBranchAddress("H.dc.1x1.dist", &H_dc_1x1_dist, &b_H_dc_1x1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.rawtdc", &Ndata_H_dc_1x1_rawtdc, &b_Ndata_H_dc_1x1_rawtdc);
   fChain->SetBranchAddress("H.dc.1x1.rawtdc", &H_dc_1x1_rawtdc, &b_H_dc_1x1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.tdchits", &Ndata_H_dc_1x1_tdchits, &b_Ndata_H_dc_1x1_tdchits);
   fChain->SetBranchAddress("H.dc.1x1.tdchits", &H_dc_1x1_tdchits, &b_H_dc_1x1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1x1.time", &Ndata_H_dc_1x1_time, &b_Ndata_H_dc_1x1_time);
   fChain->SetBranchAddress("H.dc.1x1.time", &H_dc_1x1_time, &b_H_dc_1x1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.dist", &Ndata_H_dc_1x2_dist, &b_Ndata_H_dc_1x2_dist);
   fChain->SetBranchAddress("H.dc.1x2.dist", &H_dc_1x2_dist, &b_H_dc_1x2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.rawtdc", &Ndata_H_dc_1x2_rawtdc, &b_Ndata_H_dc_1x2_rawtdc);
   fChain->SetBranchAddress("H.dc.1x2.rawtdc", &H_dc_1x2_rawtdc, &b_H_dc_1x2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.tdchits", &Ndata_H_dc_1x2_tdchits, &b_Ndata_H_dc_1x2_tdchits);
   fChain->SetBranchAddress("H.dc.1x2.tdchits", &H_dc_1x2_tdchits, &b_H_dc_1x2_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1x2.time", &Ndata_H_dc_1x2_time, &b_Ndata_H_dc_1x2_time);
   fChain->SetBranchAddress("H.dc.1x2.time", &H_dc_1x2_time, &b_H_dc_1x2_time);
   fChain->SetBranchAddress("Ndata.H.dc.1y1.dist", &Ndata_H_dc_1y1_dist, &b_Ndata_H_dc_1y1_dist);
   fChain->SetBranchAddress("H.dc.1y1.dist", &H_dc_1y1_dist, &b_H_dc_1y1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1y1.rawtdc", &Ndata_H_dc_1y1_rawtdc, &b_Ndata_H_dc_1y1_rawtdc);
   fChain->SetBranchAddress("H.dc.1y1.rawtdc", &H_dc_1y1_rawtdc, &b_H_dc_1y1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1y1.tdchits", &Ndata_H_dc_1y1_tdchits, &b_Ndata_H_dc_1y1_tdchits);
   fChain->SetBranchAddress("H.dc.1y1.tdchits", &H_dc_1y1_tdchits, &b_H_dc_1y1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1y1.time", &Ndata_H_dc_1y1_time, &b_Ndata_H_dc_1y1_time);
   fChain->SetBranchAddress("H.dc.1y1.time", &H_dc_1y1_time, &b_H_dc_1y1_time);
   fChain->SetBranchAddress("Ndata.H.dc.1y2.dist", &Ndata_H_dc_1y2_dist, &b_Ndata_H_dc_1y2_dist);
   fChain->SetBranchAddress("H.dc.1y2.dist", &H_dc_1y2_dist, &b_H_dc_1y2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.1y2.rawtdc", &Ndata_H_dc_1y2_rawtdc, &b_Ndata_H_dc_1y2_rawtdc);
   fChain->SetBranchAddress("H.dc.1y2.rawtdc", &H_dc_1y2_rawtdc, &b_H_dc_1y2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.1y2.tdchits", &Ndata_H_dc_1y2_tdchits, &b_Ndata_H_dc_1y2_tdchits);
   fChain->SetBranchAddress("H.dc.1y2.tdchits", &H_dc_1y2_tdchits, &b_H_dc_1y2_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.1y2.time", &Ndata_H_dc_1y2_time, &b_Ndata_H_dc_1y2_time);
   fChain->SetBranchAddress("H.dc.1y2.time", &H_dc_1y2_time, &b_H_dc_1y2_time);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.dist", &Ndata_H_dc_2u1_dist, &b_Ndata_H_dc_2u1_dist);
   fChain->SetBranchAddress("H.dc.2u1.dist", &H_dc_2u1_dist, &b_H_dc_2u1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.rawtdc", &Ndata_H_dc_2u1_rawtdc, &b_Ndata_H_dc_2u1_rawtdc);
   fChain->SetBranchAddress("H.dc.2u1.rawtdc", &H_dc_2u1_rawtdc, &b_H_dc_2u1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.tdchits", &Ndata_H_dc_2u1_tdchits, &b_Ndata_H_dc_2u1_tdchits);
   fChain->SetBranchAddress("H.dc.2u1.tdchits", &H_dc_2u1_tdchits, &b_H_dc_2u1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2u1.time", &Ndata_H_dc_2u1_time, &b_Ndata_H_dc_2u1_time);
   fChain->SetBranchAddress("H.dc.2u1.time", &H_dc_2u1_time, &b_H_dc_2u1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.dist", &Ndata_H_dc_2v1_dist, &b_Ndata_H_dc_2v1_dist);
   fChain->SetBranchAddress("H.dc.2v1.dist", &H_dc_2v1_dist, &b_H_dc_2v1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.rawtdc", &Ndata_H_dc_2v1_rawtdc, &b_Ndata_H_dc_2v1_rawtdc);
   fChain->SetBranchAddress("H.dc.2v1.rawtdc", &H_dc_2v1_rawtdc, &b_H_dc_2v1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.tdchits", &Ndata_H_dc_2v1_tdchits, &b_Ndata_H_dc_2v1_tdchits);
   fChain->SetBranchAddress("H.dc.2v1.tdchits", &H_dc_2v1_tdchits, &b_H_dc_2v1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2v1.time", &Ndata_H_dc_2v1_time, &b_Ndata_H_dc_2v1_time);
   fChain->SetBranchAddress("H.dc.2v1.time", &H_dc_2v1_time, &b_H_dc_2v1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.dist", &Ndata_H_dc_2x1_dist, &b_Ndata_H_dc_2x1_dist);
   fChain->SetBranchAddress("H.dc.2x1.dist", &H_dc_2x1_dist, &b_H_dc_2x1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.rawtdc", &Ndata_H_dc_2x1_rawtdc, &b_Ndata_H_dc_2x1_rawtdc);
   fChain->SetBranchAddress("H.dc.2x1.rawtdc", &H_dc_2x1_rawtdc, &b_H_dc_2x1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.tdchits", &Ndata_H_dc_2x1_tdchits, &b_Ndata_H_dc_2x1_tdchits);
   fChain->SetBranchAddress("H.dc.2x1.tdchits", &H_dc_2x1_tdchits, &b_H_dc_2x1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2x1.time", &Ndata_H_dc_2x1_time, &b_Ndata_H_dc_2x1_time);
   fChain->SetBranchAddress("H.dc.2x1.time", &H_dc_2x1_time, &b_H_dc_2x1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.dist", &Ndata_H_dc_2x2_dist, &b_Ndata_H_dc_2x2_dist);
   fChain->SetBranchAddress("H.dc.2x2.dist", &H_dc_2x2_dist, &b_H_dc_2x2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.rawtdc", &Ndata_H_dc_2x2_rawtdc, &b_Ndata_H_dc_2x2_rawtdc);
   fChain->SetBranchAddress("H.dc.2x2.rawtdc", &H_dc_2x2_rawtdc, &b_H_dc_2x2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.tdchits", &Ndata_H_dc_2x2_tdchits, &b_Ndata_H_dc_2x2_tdchits);
   fChain->SetBranchAddress("H.dc.2x2.tdchits", &H_dc_2x2_tdchits, &b_H_dc_2x2_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2x2.time", &Ndata_H_dc_2x2_time, &b_Ndata_H_dc_2x2_time);
   fChain->SetBranchAddress("H.dc.2x2.time", &H_dc_2x2_time, &b_H_dc_2x2_time);
   fChain->SetBranchAddress("Ndata.H.dc.2y1.dist", &Ndata_H_dc_2y1_dist, &b_Ndata_H_dc_2y1_dist);
   fChain->SetBranchAddress("H.dc.2y1.dist", &H_dc_2y1_dist, &b_H_dc_2y1_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2y1.rawtdc", &Ndata_H_dc_2y1_rawtdc, &b_Ndata_H_dc_2y1_rawtdc);
   fChain->SetBranchAddress("H.dc.2y1.rawtdc", &H_dc_2y1_rawtdc, &b_H_dc_2y1_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2y1.tdchits", &Ndata_H_dc_2y1_tdchits, &b_Ndata_H_dc_2y1_tdchits);
   fChain->SetBranchAddress("H.dc.2y1.tdchits", &H_dc_2y1_tdchits, &b_H_dc_2y1_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2y1.time", &Ndata_H_dc_2y1_time, &b_Ndata_H_dc_2y1_time);
   fChain->SetBranchAddress("H.dc.2y1.time", &H_dc_2y1_time, &b_H_dc_2y1_time);
   fChain->SetBranchAddress("Ndata.H.dc.2y2.dist", &Ndata_H_dc_2y2_dist, &b_Ndata_H_dc_2y2_dist);
   fChain->SetBranchAddress("H.dc.2y2.dist", &H_dc_2y2_dist, &b_H_dc_2y2_dist);
   fChain->SetBranchAddress("Ndata.H.dc.2y2.rawtdc", &Ndata_H_dc_2y2_rawtdc, &b_Ndata_H_dc_2y2_rawtdc);
   fChain->SetBranchAddress("H.dc.2y2.rawtdc", &H_dc_2y2_rawtdc, &b_H_dc_2y2_rawtdc);
   fChain->SetBranchAddress("Ndata.H.dc.2y2.tdchits", &Ndata_H_dc_2y2_tdchits, &b_Ndata_H_dc_2y2_tdchits);
   fChain->SetBranchAddress("H.dc.2y2.tdchits", &H_dc_2y2_tdchits, &b_H_dc_2y2_tdchits);
   fChain->SetBranchAddress("Ndata.H.dc.2y2.time", &Ndata_H_dc_2y2_time, &b_Ndata_H_dc_2y2_time);
   fChain->SetBranchAddress("H.dc.2y2.time", &H_dc_2y2_time, &b_H_dc_2y2_time);
   fChain->SetBranchAddress("Ndata.H.dc.residual", &Ndata_H_dc_residual, &b_Ndata_H_dc_residual);
   fChain->SetBranchAddress("H.dc.residual", H_dc_residual, &b_H_dc_residual);
   fChain->SetBranchAddress("Ndata.H.dc.x", &Ndata_H_dc_x, &b_Ndata_H_dc_x);
   fChain->SetBranchAddress("H.dc.x", &H_dc_x, &b_H_dc_x);
   fChain->SetBranchAddress("Ndata.H.dc.xp", &Ndata_H_dc_xp, &b_Ndata_H_dc_xp);
   fChain->SetBranchAddress("H.dc.xp", &H_dc_xp, &b_H_dc_xp);
   fChain->SetBranchAddress("Ndata.H.dc.y", &Ndata_H_dc_y, &b_Ndata_H_dc_y);
   fChain->SetBranchAddress("H.dc.y", &H_dc_y, &b_H_dc_y);
   fChain->SetBranchAddress("Ndata.H.dc.yp", &Ndata_H_dc_yp, &b_Ndata_H_dc_yp);
   fChain->SetBranchAddress("H.dc.yp", &H_dc_yp, &b_H_dc_yp);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negadchits", &Ndata_H_hod_1x_negadchits, &b_Ndata_H_hod_1x_negadchits);
   fChain->SetBranchAddress("H.hod.1x.negadchits", &H_hod_1x_negadchits, &b_H_hod_1x_negadchits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.negtdchits", &Ndata_H_hod_1x_negtdchits, &b_Ndata_H_hod_1x_negtdchits);
   fChain->SetBranchAddress("H.hod.1x.negtdchits", &H_hod_1x_negtdchits, &b_H_hod_1x_negtdchits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.posadchits", &Ndata_H_hod_1x_posadchits, &b_Ndata_H_hod_1x_posadchits);
   fChain->SetBranchAddress("H.hod.1x.posadchits", &H_hod_1x_posadchits, &b_H_hod_1x_posadchits);
   fChain->SetBranchAddress("Ndata.H.hod.1x.postdchits", &Ndata_H_hod_1x_postdchits, &b_Ndata_H_hod_1x_postdchits);
   fChain->SetBranchAddress("H.hod.1x.postdchits", &H_hod_1x_postdchits, &b_H_hod_1x_postdchits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negadchits", &Ndata_H_hod_1y_negadchits, &b_Ndata_H_hod_1y_negadchits);
   fChain->SetBranchAddress("H.hod.1y.negadchits", &H_hod_1y_negadchits, &b_H_hod_1y_negadchits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.negtdchits", &Ndata_H_hod_1y_negtdchits, &b_Ndata_H_hod_1y_negtdchits);
   fChain->SetBranchAddress("H.hod.1y.negtdchits", &H_hod_1y_negtdchits, &b_H_hod_1y_negtdchits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.posadchits", &Ndata_H_hod_1y_posadchits, &b_Ndata_H_hod_1y_posadchits);
   fChain->SetBranchAddress("H.hod.1y.posadchits", &H_hod_1y_posadchits, &b_H_hod_1y_posadchits);
   fChain->SetBranchAddress("Ndata.H.hod.1y.postdchits", &Ndata_H_hod_1y_postdchits, &b_Ndata_H_hod_1y_postdchits);
   fChain->SetBranchAddress("H.hod.1y.postdchits", &H_hod_1y_postdchits, &b_H_hod_1y_postdchits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negadchits", &Ndata_H_hod_2x_negadchits, &b_Ndata_H_hod_2x_negadchits);
   fChain->SetBranchAddress("H.hod.2x.negadchits", &H_hod_2x_negadchits, &b_H_hod_2x_negadchits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.negtdchits", &Ndata_H_hod_2x_negtdchits, &b_Ndata_H_hod_2x_negtdchits);
   fChain->SetBranchAddress("H.hod.2x.negtdchits", &H_hod_2x_negtdchits, &b_H_hod_2x_negtdchits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.posadchits", &Ndata_H_hod_2x_posadchits, &b_Ndata_H_hod_2x_posadchits);
   fChain->SetBranchAddress("H.hod.2x.posadchits", &H_hod_2x_posadchits, &b_H_hod_2x_posadchits);
   fChain->SetBranchAddress("Ndata.H.hod.2x.postdchits", &Ndata_H_hod_2x_postdchits, &b_Ndata_H_hod_2x_postdchits);
   fChain->SetBranchAddress("H.hod.2x.postdchits", &H_hod_2x_postdchits, &b_H_hod_2x_postdchits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negadchits", &Ndata_H_hod_2y_negadchits, &b_Ndata_H_hod_2y_negadchits);
   fChain->SetBranchAddress("H.hod.2y.negadchits", &H_hod_2y_negadchits, &b_H_hod_2y_negadchits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.negtdchits", &Ndata_H_hod_2y_negtdchits, &b_Ndata_H_hod_2y_negtdchits);
   fChain->SetBranchAddress("H.hod.2y.negtdchits", &H_hod_2y_negtdchits, &b_H_hod_2y_negtdchits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.posadchits", &Ndata_H_hod_2y_posadchits, &b_Ndata_H_hod_2y_posadchits);
   fChain->SetBranchAddress("H.hod.2y.posadchits", &H_hod_2y_posadchits, &b_H_hod_2y_posadchits);
   fChain->SetBranchAddress("Ndata.H.hod.2y.postdchits", &Ndata_H_hod_2y_postdchits, &b_Ndata_H_hod_2y_postdchits);
   fChain->SetBranchAddress("H.hod.2y.postdchits", &H_hod_2y_postdchits, &b_H_hod_2y_postdchits);
   fChain->SetBranchAddress("Ndata.H.tr.beta", &Ndata_H_tr_beta, &b_Ndata_H_tr_beta);
   fChain->SetBranchAddress("H.tr.beta", &H_tr_beta, &b_H_tr_beta);
   fChain->SetBranchAddress("Ndata.H.tr.chi2", &Ndata_H_tr_chi2, &b_Ndata_H_tr_chi2);
   fChain->SetBranchAddress("H.tr.chi2", &H_tr_chi2, &b_H_tr_chi2);
   fChain->SetBranchAddress("Ndata.H.tr.d_ph", &Ndata_H_tr_d_ph, &b_Ndata_H_tr_d_ph);
   fChain->SetBranchAddress("H.tr.d_ph", &H_tr_d_ph, &b_H_tr_d_ph);
   fChain->SetBranchAddress("Ndata.H.tr.d_th", &Ndata_H_tr_d_th, &b_Ndata_H_tr_d_th);
   fChain->SetBranchAddress("H.tr.d_th", &H_tr_d_th, &b_H_tr_d_th);
   fChain->SetBranchAddress("Ndata.H.tr.d_x", &Ndata_H_tr_d_x, &b_Ndata_H_tr_d_x);
   fChain->SetBranchAddress("H.tr.d_x", &H_tr_d_x, &b_H_tr_d_x);
   fChain->SetBranchAddress("Ndata.H.tr.d_y", &Ndata_H_tr_d_y, &b_Ndata_H_tr_d_y);
   fChain->SetBranchAddress("H.tr.d_y", &H_tr_d_y, &b_H_tr_d_y);
   fChain->SetBranchAddress("Ndata.H.tr.dbeta", &Ndata_H_tr_dbeta, &b_Ndata_H_tr_dbeta);
   fChain->SetBranchAddress("H.tr.dbeta", &H_tr_dbeta, &b_H_tr_dbeta);
   fChain->SetBranchAddress("Ndata.H.tr.dtime", &Ndata_H_tr_dtime, &b_Ndata_H_tr_dtime);
   fChain->SetBranchAddress("H.tr.dtime", &H_tr_dtime, &b_H_tr_dtime);
   fChain->SetBranchAddress("Ndata.H.tr.flag", &Ndata_H_tr_flag, &b_Ndata_H_tr_flag);
   fChain->SetBranchAddress("H.tr.flag", &H_tr_flag, &b_H_tr_flag);
   fChain->SetBranchAddress("Ndata.H.tr.ndof", &Ndata_H_tr_ndof, &b_Ndata_H_tr_ndof);
   fChain->SetBranchAddress("H.tr.ndof", &H_tr_ndof, &b_H_tr_ndof);
   fChain->SetBranchAddress("Ndata.H.tr.p", &Ndata_H_tr_p, &b_Ndata_H_tr_p);
   fChain->SetBranchAddress("H.tr.p", &H_tr_p, &b_H_tr_p);
   fChain->SetBranchAddress("Ndata.H.tr.pathl", &Ndata_H_tr_pathl, &b_Ndata_H_tr_pathl);
   fChain->SetBranchAddress("H.tr.pathl", &H_tr_pathl, &b_H_tr_pathl);
   fChain->SetBranchAddress("Ndata.H.tr.ph", &Ndata_H_tr_ph, &b_Ndata_H_tr_ph);
   fChain->SetBranchAddress("H.tr.ph", &H_tr_ph, &b_H_tr_ph);
   fChain->SetBranchAddress("Ndata.H.tr.px", &Ndata_H_tr_px, &b_Ndata_H_tr_px);
   fChain->SetBranchAddress("H.tr.px", &H_tr_px, &b_H_tr_px);
   fChain->SetBranchAddress("Ndata.H.tr.py", &Ndata_H_tr_py, &b_Ndata_H_tr_py);
   fChain->SetBranchAddress("H.tr.py", &H_tr_py, &b_H_tr_py);
   fChain->SetBranchAddress("Ndata.H.tr.pz", &Ndata_H_tr_pz, &b_Ndata_H_tr_pz);
   fChain->SetBranchAddress("H.tr.pz", &H_tr_pz, &b_H_tr_pz);
   fChain->SetBranchAddress("Ndata.H.tr.r_ph", &Ndata_H_tr_r_ph, &b_Ndata_H_tr_r_ph);
   fChain->SetBranchAddress("H.tr.r_ph", &H_tr_r_ph, &b_H_tr_r_ph);
   fChain->SetBranchAddress("Ndata.H.tr.r_th", &Ndata_H_tr_r_th, &b_Ndata_H_tr_r_th);
   fChain->SetBranchAddress("H.tr.r_th", &H_tr_r_th, &b_H_tr_r_th);
   fChain->SetBranchAddress("Ndata.H.tr.r_x", &Ndata_H_tr_r_x, &b_Ndata_H_tr_r_x);
   fChain->SetBranchAddress("H.tr.r_x", &H_tr_r_x, &b_H_tr_r_x);
   fChain->SetBranchAddress("Ndata.H.tr.r_y", &Ndata_H_tr_r_y, &b_Ndata_H_tr_r_y);
   fChain->SetBranchAddress("H.tr.r_y", &H_tr_r_y, &b_H_tr_r_y);
   fChain->SetBranchAddress("Ndata.H.tr.tg_dp", &Ndata_H_tr_tg_dp, &b_Ndata_H_tr_tg_dp);
   fChain->SetBranchAddress("H.tr.tg_dp", &H_tr_tg_dp, &b_H_tr_tg_dp);
   fChain->SetBranchAddress("Ndata.H.tr.tg_ph", &Ndata_H_tr_tg_ph, &b_Ndata_H_tr_tg_ph);
   fChain->SetBranchAddress("H.tr.tg_ph", &H_tr_tg_ph, &b_H_tr_tg_ph);
   fChain->SetBranchAddress("Ndata.H.tr.tg_th", &Ndata_H_tr_tg_th, &b_Ndata_H_tr_tg_th);
   fChain->SetBranchAddress("H.tr.tg_th", &H_tr_tg_th, &b_H_tr_tg_th);
   fChain->SetBranchAddress("Ndata.H.tr.tg_y", &Ndata_H_tr_tg_y, &b_Ndata_H_tr_tg_y);
   fChain->SetBranchAddress("H.tr.tg_y", &H_tr_tg_y, &b_H_tr_tg_y);
   fChain->SetBranchAddress("Ndata.H.tr.th", &Ndata_H_tr_th, &b_Ndata_H_tr_th);
   fChain->SetBranchAddress("H.tr.th", &H_tr_th, &b_H_tr_th);
   fChain->SetBranchAddress("Ndata.H.tr.time", &Ndata_H_tr_time, &b_Ndata_H_tr_time);
   fChain->SetBranchAddress("H.tr.time", &H_tr_time, &b_H_tr_time);
   fChain->SetBranchAddress("Ndata.H.tr.vx", &Ndata_H_tr_vx, &b_Ndata_H_tr_vx);
   fChain->SetBranchAddress("H.tr.vx", &H_tr_vx, &b_H_tr_vx);
   fChain->SetBranchAddress("Ndata.H.tr.vy", &Ndata_H_tr_vy, &b_Ndata_H_tr_vy);
   fChain->SetBranchAddress("H.tr.vy", &H_tr_vy, &b_H_tr_vy);
   fChain->SetBranchAddress("Ndata.H.tr.vz", &Ndata_H_tr_vz, &b_Ndata_H_tr_vz);
   fChain->SetBranchAddress("H.tr.vz", &H_tr_vz, &b_H_tr_vz);
   fChain->SetBranchAddress("Ndata.H.tr.x", &Ndata_H_tr_x, &b_Ndata_H_tr_x);
   fChain->SetBranchAddress("H.tr.x", &H_tr_x, &b_H_tr_x);
   fChain->SetBranchAddress("Ndata.H.tr.y", &Ndata_H_tr_y, &b_Ndata_H_tr_y);
   fChain->SetBranchAddress("H.tr.y", &H_tr_y, &b_H_tr_y);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.aneg", &Ndata_S_cal_1pr_aneg, &b_Ndata_S_cal_1pr_aneg);
   fChain->SetBranchAddress("S.cal.1pr.aneg", S_cal_1pr_aneg, &b_S_cal_1pr_aneg);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.aneg_p", &Ndata_S_cal_1pr_aneg_p, &b_Ndata_S_cal_1pr_aneg_p);
   fChain->SetBranchAddress("S.cal.1pr.aneg_p", S_cal_1pr_aneg_p, &b_S_cal_1pr_aneg_p);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.apos", &Ndata_S_cal_1pr_apos, &b_Ndata_S_cal_1pr_apos);
   fChain->SetBranchAddress("S.cal.1pr.apos", S_cal_1pr_apos, &b_S_cal_1pr_apos);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.apos_p", &Ndata_S_cal_1pr_apos_p, &b_Ndata_S_cal_1pr_apos_p);
   fChain->SetBranchAddress("S.cal.1pr.apos_p", S_cal_1pr_apos_p, &b_S_cal_1pr_apos_p);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.emean", &Ndata_S_cal_1pr_emean, &b_Ndata_S_cal_1pr_emean);
   fChain->SetBranchAddress("S.cal.1pr.emean", S_cal_1pr_emean, &b_S_cal_1pr_emean);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.eneg", &Ndata_S_cal_1pr_eneg, &b_Ndata_S_cal_1pr_eneg);
   fChain->SetBranchAddress("S.cal.1pr.eneg", S_cal_1pr_eneg, &b_S_cal_1pr_eneg);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.epos", &Ndata_S_cal_1pr_epos, &b_Ndata_S_cal_1pr_epos);
   fChain->SetBranchAddress("S.cal.1pr.epos", S_cal_1pr_epos, &b_S_cal_1pr_epos);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.negadchits", &Ndata_S_cal_1pr_negadchits, &b_Ndata_S_cal_1pr_negadchits);
   fChain->SetBranchAddress("S.cal.1pr.negadchits", S_cal_1pr_negadchits, &b_S_cal_1pr_negadchits);
   fChain->SetBranchAddress("Ndata.S.cal.1pr.posadchits", &Ndata_S_cal_1pr_posadchits, &b_Ndata_S_cal_1pr_posadchits);
   fChain->SetBranchAddress("S.cal.1pr.posadchits", S_cal_1pr_posadchits, &b_S_cal_1pr_posadchits);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.aneg", &Ndata_S_cal_2ta_aneg, &b_Ndata_S_cal_2ta_aneg);
   fChain->SetBranchAddress("S.cal.2ta.aneg", S_cal_2ta_aneg, &b_S_cal_2ta_aneg);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.aneg_p", &Ndata_S_cal_2ta_aneg_p, &b_Ndata_S_cal_2ta_aneg_p);
   fChain->SetBranchAddress("S.cal.2ta.aneg_p", S_cal_2ta_aneg_p, &b_S_cal_2ta_aneg_p);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.apos", &Ndata_S_cal_2ta_apos, &b_Ndata_S_cal_2ta_apos);
   fChain->SetBranchAddress("S.cal.2ta.apos", S_cal_2ta_apos, &b_S_cal_2ta_apos);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.apos_p", &Ndata_S_cal_2ta_apos_p, &b_Ndata_S_cal_2ta_apos_p);
   fChain->SetBranchAddress("S.cal.2ta.apos_p", S_cal_2ta_apos_p, &b_S_cal_2ta_apos_p);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.emean", &Ndata_S_cal_2ta_emean, &b_Ndata_S_cal_2ta_emean);
   fChain->SetBranchAddress("S.cal.2ta.emean", S_cal_2ta_emean, &b_S_cal_2ta_emean);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.eneg", &Ndata_S_cal_2ta_eneg, &b_Ndata_S_cal_2ta_eneg);
   fChain->SetBranchAddress("S.cal.2ta.eneg", S_cal_2ta_eneg, &b_S_cal_2ta_eneg);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.epos", &Ndata_S_cal_2ta_epos, &b_Ndata_S_cal_2ta_epos);
   fChain->SetBranchAddress("S.cal.2ta.epos", S_cal_2ta_epos, &b_S_cal_2ta_epos);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.negadchits", &Ndata_S_cal_2ta_negadchits, &b_Ndata_S_cal_2ta_negadchits);
   fChain->SetBranchAddress("S.cal.2ta.negadchits", S_cal_2ta_negadchits, &b_S_cal_2ta_negadchits);
   fChain->SetBranchAddress("Ndata.S.cal.2ta.posadchits", &Ndata_S_cal_2ta_posadchits, &b_Ndata_S_cal_2ta_posadchits);
   fChain->SetBranchAddress("S.cal.2ta.posadchits", S_cal_2ta_posadchits, &b_S_cal_2ta_posadchits);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.aneg", &Ndata_S_cal_3ta_aneg, &b_Ndata_S_cal_3ta_aneg);
   fChain->SetBranchAddress("S.cal.3ta.aneg", S_cal_3ta_aneg, &b_S_cal_3ta_aneg);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.aneg_p", &Ndata_S_cal_3ta_aneg_p, &b_Ndata_S_cal_3ta_aneg_p);
   fChain->SetBranchAddress("S.cal.3ta.aneg_p", S_cal_3ta_aneg_p, &b_S_cal_3ta_aneg_p);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.apos", &Ndata_S_cal_3ta_apos, &b_Ndata_S_cal_3ta_apos);
   fChain->SetBranchAddress("S.cal.3ta.apos", S_cal_3ta_apos, &b_S_cal_3ta_apos);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.apos_p", &Ndata_S_cal_3ta_apos_p, &b_Ndata_S_cal_3ta_apos_p);
   fChain->SetBranchAddress("S.cal.3ta.apos_p", S_cal_3ta_apos_p, &b_S_cal_3ta_apos_p);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.emean", &Ndata_S_cal_3ta_emean, &b_Ndata_S_cal_3ta_emean);
   fChain->SetBranchAddress("S.cal.3ta.emean", S_cal_3ta_emean, &b_S_cal_3ta_emean);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.eneg", &Ndata_S_cal_3ta_eneg, &b_Ndata_S_cal_3ta_eneg);
   fChain->SetBranchAddress("S.cal.3ta.eneg", S_cal_3ta_eneg, &b_S_cal_3ta_eneg);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.epos", &Ndata_S_cal_3ta_epos, &b_Ndata_S_cal_3ta_epos);
   fChain->SetBranchAddress("S.cal.3ta.epos", S_cal_3ta_epos, &b_S_cal_3ta_epos);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.negadchits", &Ndata_S_cal_3ta_negadchits, &b_Ndata_S_cal_3ta_negadchits);
   fChain->SetBranchAddress("S.cal.3ta.negadchits", &S_cal_3ta_negadchits, &b_S_cal_3ta_negadchits);
   fChain->SetBranchAddress("Ndata.S.cal.3ta.posadchits", &Ndata_S_cal_3ta_posadchits, &b_Ndata_S_cal_3ta_posadchits);
   fChain->SetBranchAddress("S.cal.3ta.posadchits", S_cal_3ta_posadchits, &b_S_cal_3ta_posadchits);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.aneg", &Ndata_S_cal_4ta_aneg, &b_Ndata_S_cal_4ta_aneg);
   fChain->SetBranchAddress("S.cal.4ta.aneg", S_cal_4ta_aneg, &b_S_cal_4ta_aneg);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.aneg_p", &Ndata_S_cal_4ta_aneg_p, &b_Ndata_S_cal_4ta_aneg_p);
   fChain->SetBranchAddress("S.cal.4ta.aneg_p", S_cal_4ta_aneg_p, &b_S_cal_4ta_aneg_p);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.apos", &Ndata_S_cal_4ta_apos, &b_Ndata_S_cal_4ta_apos);
   fChain->SetBranchAddress("S.cal.4ta.apos", S_cal_4ta_apos, &b_S_cal_4ta_apos);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.apos_p", &Ndata_S_cal_4ta_apos_p, &b_Ndata_S_cal_4ta_apos_p);
   fChain->SetBranchAddress("S.cal.4ta.apos_p", S_cal_4ta_apos_p, &b_S_cal_4ta_apos_p);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.emean", &Ndata_S_cal_4ta_emean, &b_Ndata_S_cal_4ta_emean);
   fChain->SetBranchAddress("S.cal.4ta.emean", S_cal_4ta_emean, &b_S_cal_4ta_emean);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.eneg", &Ndata_S_cal_4ta_eneg, &b_Ndata_S_cal_4ta_eneg);
   fChain->SetBranchAddress("S.cal.4ta.eneg", S_cal_4ta_eneg, &b_S_cal_4ta_eneg);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.epos", &Ndata_S_cal_4ta_epos, &b_Ndata_S_cal_4ta_epos);
   fChain->SetBranchAddress("S.cal.4ta.epos", S_cal_4ta_epos, &b_S_cal_4ta_epos);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.negadchits", &Ndata_S_cal_4ta_negadchits, &b_Ndata_S_cal_4ta_negadchits);
   fChain->SetBranchAddress("S.cal.4ta.negadchits", &S_cal_4ta_negadchits, &b_S_cal_4ta_negadchits);
   fChain->SetBranchAddress("Ndata.S.cal.4ta.posadchits", &Ndata_S_cal_4ta_posadchits, &b_Ndata_S_cal_4ta_posadchits);
   fChain->SetBranchAddress("S.cal.4ta.posadchits", S_cal_4ta_posadchits, &b_S_cal_4ta_posadchits);
   fChain->SetBranchAddress("Ndata.S.dc.1u1.dist", &Ndata_S_dc_1u1_dist, &b_Ndata_S_dc_1u1_dist);
   fChain->SetBranchAddress("S.dc.1u1.dist", S_dc_1u1_dist, &b_S_dc_1u1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1u1.rawtdc", &Ndata_S_dc_1u1_rawtdc, &b_Ndata_S_dc_1u1_rawtdc);
   fChain->SetBranchAddress("S.dc.1u1.rawtdc", S_dc_1u1_rawtdc, &b_S_dc_1u1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1u1.tdchits", &Ndata_S_dc_1u1_tdchits, &b_Ndata_S_dc_1u1_tdchits);
   fChain->SetBranchAddress("S.dc.1u1.tdchits", S_dc_1u1_tdchits, &b_S_dc_1u1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1u1.time", &Ndata_S_dc_1u1_time, &b_Ndata_S_dc_1u1_time);
   fChain->SetBranchAddress("S.dc.1u1.time", S_dc_1u1_time, &b_S_dc_1u1_time);
   fChain->SetBranchAddress("Ndata.S.dc.1u2.dist", &Ndata_S_dc_1u2_dist, &b_Ndata_S_dc_1u2_dist);
   fChain->SetBranchAddress("S.dc.1u2.dist", S_dc_1u2_dist, &b_S_dc_1u2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1u2.rawtdc", &Ndata_S_dc_1u2_rawtdc, &b_Ndata_S_dc_1u2_rawtdc);
   fChain->SetBranchAddress("S.dc.1u2.rawtdc", S_dc_1u2_rawtdc, &b_S_dc_1u2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1u2.tdchits", &Ndata_S_dc_1u2_tdchits, &b_Ndata_S_dc_1u2_tdchits);
   fChain->SetBranchAddress("S.dc.1u2.tdchits", S_dc_1u2_tdchits, &b_S_dc_1u2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1u2.time", &Ndata_S_dc_1u2_time, &b_Ndata_S_dc_1u2_time);
   fChain->SetBranchAddress("S.dc.1u2.time", S_dc_1u2_time, &b_S_dc_1u2_time);
   fChain->SetBranchAddress("Ndata.S.dc.1v1.dist", &Ndata_S_dc_1v1_dist, &b_Ndata_S_dc_1v1_dist);
   fChain->SetBranchAddress("S.dc.1v1.dist", S_dc_1v1_dist, &b_S_dc_1v1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1v1.rawtdc", &Ndata_S_dc_1v1_rawtdc, &b_Ndata_S_dc_1v1_rawtdc);
   fChain->SetBranchAddress("S.dc.1v1.rawtdc", S_dc_1v1_rawtdc, &b_S_dc_1v1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1v1.tdchits", &Ndata_S_dc_1v1_tdchits, &b_Ndata_S_dc_1v1_tdchits);
   fChain->SetBranchAddress("S.dc.1v1.tdchits", S_dc_1v1_tdchits, &b_S_dc_1v1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1v1.time", &Ndata_S_dc_1v1_time, &b_Ndata_S_dc_1v1_time);
   fChain->SetBranchAddress("S.dc.1v1.time", S_dc_1v1_time, &b_S_dc_1v1_time);
   fChain->SetBranchAddress("Ndata.S.dc.1v2.dist", &Ndata_S_dc_1v2_dist, &b_Ndata_S_dc_1v2_dist);
   fChain->SetBranchAddress("S.dc.1v2.dist", S_dc_1v2_dist, &b_S_dc_1v2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1v2.rawtdc", &Ndata_S_dc_1v2_rawtdc, &b_Ndata_S_dc_1v2_rawtdc);
   fChain->SetBranchAddress("S.dc.1v2.rawtdc", S_dc_1v2_rawtdc, &b_S_dc_1v2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1v2.tdchits", &Ndata_S_dc_1v2_tdchits, &b_Ndata_S_dc_1v2_tdchits);
   fChain->SetBranchAddress("S.dc.1v2.tdchits", S_dc_1v2_tdchits, &b_S_dc_1v2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1v2.time", &Ndata_S_dc_1v2_time, &b_Ndata_S_dc_1v2_time);
   fChain->SetBranchAddress("S.dc.1v2.time", S_dc_1v2_time, &b_S_dc_1v2_time);
   fChain->SetBranchAddress("Ndata.S.dc.1x1.dist", &Ndata_S_dc_1x1_dist, &b_Ndata_S_dc_1x1_dist);
   fChain->SetBranchAddress("S.dc.1x1.dist", S_dc_1x1_dist, &b_S_dc_1x1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1x1.rawtdc", &Ndata_S_dc_1x1_rawtdc, &b_Ndata_S_dc_1x1_rawtdc);
   fChain->SetBranchAddress("S.dc.1x1.rawtdc", S_dc_1x1_rawtdc, &b_S_dc_1x1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1x1.tdchits", &Ndata_S_dc_1x1_tdchits, &b_Ndata_S_dc_1x1_tdchits);
   fChain->SetBranchAddress("S.dc.1x1.tdchits", S_dc_1x1_tdchits, &b_S_dc_1x1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1x1.time", &Ndata_S_dc_1x1_time, &b_Ndata_S_dc_1x1_time);
   fChain->SetBranchAddress("S.dc.1x1.time", S_dc_1x1_time, &b_S_dc_1x1_time);
   fChain->SetBranchAddress("Ndata.S.dc.1x2.dist", &Ndata_S_dc_1x2_dist, &b_Ndata_S_dc_1x2_dist);
   fChain->SetBranchAddress("S.dc.1x2.dist", S_dc_1x2_dist, &b_S_dc_1x2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.1x2.rawtdc", &Ndata_S_dc_1x2_rawtdc, &b_Ndata_S_dc_1x2_rawtdc);
   fChain->SetBranchAddress("S.dc.1x2.rawtdc", S_dc_1x2_rawtdc, &b_S_dc_1x2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.1x2.tdchits", &Ndata_S_dc_1x2_tdchits, &b_Ndata_S_dc_1x2_tdchits);
   fChain->SetBranchAddress("S.dc.1x2.tdchits", S_dc_1x2_tdchits, &b_S_dc_1x2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.1x2.time", &Ndata_S_dc_1x2_time, &b_Ndata_S_dc_1x2_time);
   fChain->SetBranchAddress("S.dc.1x2.time", S_dc_1x2_time, &b_S_dc_1x2_time);
   fChain->SetBranchAddress("Ndata.S.dc.2u1.dist", &Ndata_S_dc_2u1_dist, &b_Ndata_S_dc_2u1_dist);
   fChain->SetBranchAddress("S.dc.2u1.dist", S_dc_2u1_dist, &b_S_dc_2u1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2u1.rawtdc", &Ndata_S_dc_2u1_rawtdc, &b_Ndata_S_dc_2u1_rawtdc);
   fChain->SetBranchAddress("S.dc.2u1.rawtdc", S_dc_2u1_rawtdc, &b_S_dc_2u1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2u1.tdchits", &Ndata_S_dc_2u1_tdchits, &b_Ndata_S_dc_2u1_tdchits);
   fChain->SetBranchAddress("S.dc.2u1.tdchits", S_dc_2u1_tdchits, &b_S_dc_2u1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2u1.time", &Ndata_S_dc_2u1_time, &b_Ndata_S_dc_2u1_time);
   fChain->SetBranchAddress("S.dc.2u1.time", S_dc_2u1_time, &b_S_dc_2u1_time);
   fChain->SetBranchAddress("Ndata.S.dc.2u2.dist", &Ndata_S_dc_2u2_dist, &b_Ndata_S_dc_2u2_dist);
   fChain->SetBranchAddress("S.dc.2u2.dist", S_dc_2u2_dist, &b_S_dc_2u2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2u2.rawtdc", &Ndata_S_dc_2u2_rawtdc, &b_Ndata_S_dc_2u2_rawtdc);
   fChain->SetBranchAddress("S.dc.2u2.rawtdc", S_dc_2u2_rawtdc, &b_S_dc_2u2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2u2.tdchits", &Ndata_S_dc_2u2_tdchits, &b_Ndata_S_dc_2u2_tdchits);
   fChain->SetBranchAddress("S.dc.2u2.tdchits", S_dc_2u2_tdchits, &b_S_dc_2u2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2u2.time", &Ndata_S_dc_2u2_time, &b_Ndata_S_dc_2u2_time);
   fChain->SetBranchAddress("S.dc.2u2.time", S_dc_2u2_time, &b_S_dc_2u2_time);
   fChain->SetBranchAddress("Ndata.S.dc.2v1.dist", &Ndata_S_dc_2v1_dist, &b_Ndata_S_dc_2v1_dist);
   fChain->SetBranchAddress("S.dc.2v1.dist", S_dc_2v1_dist, &b_S_dc_2v1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2v1.rawtdc", &Ndata_S_dc_2v1_rawtdc, &b_Ndata_S_dc_2v1_rawtdc);
   fChain->SetBranchAddress("S.dc.2v1.rawtdc", S_dc_2v1_rawtdc, &b_S_dc_2v1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2v1.tdchits", &Ndata_S_dc_2v1_tdchits, &b_Ndata_S_dc_2v1_tdchits);
   fChain->SetBranchAddress("S.dc.2v1.tdchits", S_dc_2v1_tdchits, &b_S_dc_2v1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2v1.time", &Ndata_S_dc_2v1_time, &b_Ndata_S_dc_2v1_time);
   fChain->SetBranchAddress("S.dc.2v1.time", S_dc_2v1_time, &b_S_dc_2v1_time);
   fChain->SetBranchAddress("Ndata.S.dc.2v2.dist", &Ndata_S_dc_2v2_dist, &b_Ndata_S_dc_2v2_dist);
   fChain->SetBranchAddress("S.dc.2v2.dist", S_dc_2v2_dist, &b_S_dc_2v2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2v2.rawtdc", &Ndata_S_dc_2v2_rawtdc, &b_Ndata_S_dc_2v2_rawtdc);
   fChain->SetBranchAddress("S.dc.2v2.rawtdc", S_dc_2v2_rawtdc, &b_S_dc_2v2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2v2.tdchits", &Ndata_S_dc_2v2_tdchits, &b_Ndata_S_dc_2v2_tdchits);
   fChain->SetBranchAddress("S.dc.2v2.tdchits", S_dc_2v2_tdchits, &b_S_dc_2v2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2v2.time", &Ndata_S_dc_2v2_time, &b_Ndata_S_dc_2v2_time);
   fChain->SetBranchAddress("S.dc.2v2.time", S_dc_2v2_time, &b_S_dc_2v2_time);
   fChain->SetBranchAddress("Ndata.S.dc.2x1.dist", &Ndata_S_dc_2x1_dist, &b_Ndata_S_dc_2x1_dist);
   fChain->SetBranchAddress("S.dc.2x1.dist", S_dc_2x1_dist, &b_S_dc_2x1_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2x1.rawtdc", &Ndata_S_dc_2x1_rawtdc, &b_Ndata_S_dc_2x1_rawtdc);
   fChain->SetBranchAddress("S.dc.2x1.rawtdc", S_dc_2x1_rawtdc, &b_S_dc_2x1_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2x1.tdchits", &Ndata_S_dc_2x1_tdchits, &b_Ndata_S_dc_2x1_tdchits);
   fChain->SetBranchAddress("S.dc.2x1.tdchits", S_dc_2x1_tdchits, &b_S_dc_2x1_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2x1.time", &Ndata_S_dc_2x1_time, &b_Ndata_S_dc_2x1_time);
   fChain->SetBranchAddress("S.dc.2x1.time", S_dc_2x1_time, &b_S_dc_2x1_time);
   fChain->SetBranchAddress("Ndata.S.dc.2x2.dist", &Ndata_S_dc_2x2_dist, &b_Ndata_S_dc_2x2_dist);
   fChain->SetBranchAddress("S.dc.2x2.dist", S_dc_2x2_dist, &b_S_dc_2x2_dist);
   fChain->SetBranchAddress("Ndata.S.dc.2x2.rawtdc", &Ndata_S_dc_2x2_rawtdc, &b_Ndata_S_dc_2x2_rawtdc);
   fChain->SetBranchAddress("S.dc.2x2.rawtdc", S_dc_2x2_rawtdc, &b_S_dc_2x2_rawtdc);
   fChain->SetBranchAddress("Ndata.S.dc.2x2.tdchits", &Ndata_S_dc_2x2_tdchits, &b_Ndata_S_dc_2x2_tdchits);
   fChain->SetBranchAddress("S.dc.2x2.tdchits", S_dc_2x2_tdchits, &b_S_dc_2x2_tdchits);
   fChain->SetBranchAddress("Ndata.S.dc.2x2.time", &Ndata_S_dc_2x2_time, &b_Ndata_S_dc_2x2_time);
   fChain->SetBranchAddress("S.dc.2x2.time", S_dc_2x2_time, &b_S_dc_2x2_time);
   fChain->SetBranchAddress("Ndata.S.dc.residual", &Ndata_S_dc_residual, &b_Ndata_S_dc_residual);
   fChain->SetBranchAddress("S.dc.residual", S_dc_residual, &b_S_dc_residual);
   fChain->SetBranchAddress("Ndata.S.dc.x", &Ndata_S_dc_x, &b_Ndata_S_dc_x);
   fChain->SetBranchAddress("S.dc.x", S_dc_x, &b_S_dc_x);
   fChain->SetBranchAddress("Ndata.S.dc.xp", &Ndata_S_dc_xp, &b_Ndata_S_dc_xp);
   fChain->SetBranchAddress("S.dc.xp", S_dc_xp, &b_S_dc_xp);
   fChain->SetBranchAddress("Ndata.S.dc.y", &Ndata_S_dc_y, &b_Ndata_S_dc_y);
   fChain->SetBranchAddress("S.dc.y", S_dc_y, &b_S_dc_y);
   fChain->SetBranchAddress("Ndata.S.dc.yp", &Ndata_S_dc_yp, &b_Ndata_S_dc_yp);
   fChain->SetBranchAddress("S.dc.yp", S_dc_yp, &b_S_dc_yp);
   fChain->SetBranchAddress("Ndata.S.hod.1x.negadchits", &Ndata_S_hod_1x_negadchits, &b_Ndata_S_hod_1x_negadchits);
   fChain->SetBranchAddress("S.hod.1x.negadchits", &S_hod_1x_negadchits, &b_S_hod_1x_negadchits);
   fChain->SetBranchAddress("Ndata.S.hod.1x.negtdchits", &Ndata_S_hod_1x_negtdchits, &b_Ndata_S_hod_1x_negtdchits);
   fChain->SetBranchAddress("S.hod.1x.negtdchits", &S_hod_1x_negtdchits, &b_S_hod_1x_negtdchits);
   fChain->SetBranchAddress("Ndata.S.hod.1x.posadchits", &Ndata_S_hod_1x_posadchits, &b_Ndata_S_hod_1x_posadchits);
   fChain->SetBranchAddress("S.hod.1x.posadchits", &S_hod_1x_posadchits, &b_S_hod_1x_posadchits);
   fChain->SetBranchAddress("Ndata.S.hod.1x.postdchits", &Ndata_S_hod_1x_postdchits, &b_Ndata_S_hod_1x_postdchits);
   fChain->SetBranchAddress("S.hod.1x.postdchits", &S_hod_1x_postdchits, &b_S_hod_1x_postdchits);
   fChain->SetBranchAddress("Ndata.S.hod.1y.negadchits", &Ndata_S_hod_1y_negadchits, &b_Ndata_S_hod_1y_negadchits);
   fChain->SetBranchAddress("S.hod.1y.negadchits", &S_hod_1y_negadchits, &b_S_hod_1y_negadchits);
   fChain->SetBranchAddress("Ndata.S.hod.1y.negtdchits", &Ndata_S_hod_1y_negtdchits, &b_Ndata_S_hod_1y_negtdchits);
   fChain->SetBranchAddress("S.hod.1y.negtdchits", &S_hod_1y_negtdchits, &b_S_hod_1y_negtdchits);
   fChain->SetBranchAddress("Ndata.S.hod.1y.posadchits", &Ndata_S_hod_1y_posadchits, &b_Ndata_S_hod_1y_posadchits);
   fChain->SetBranchAddress("S.hod.1y.posadchits", &S_hod_1y_posadchits, &b_S_hod_1y_posadchits);
   fChain->SetBranchAddress("Ndata.S.hod.1y.postdchits", &Ndata_S_hod_1y_postdchits, &b_Ndata_S_hod_1y_postdchits);
   fChain->SetBranchAddress("S.hod.1y.postdchits", &S_hod_1y_postdchits, &b_S_hod_1y_postdchits);
   fChain->SetBranchAddress("Ndata.S.hod.2x.negadchits", &Ndata_S_hod_2x_negadchits, &b_Ndata_S_hod_2x_negadchits);
   fChain->SetBranchAddress("S.hod.2x.negadchits", &S_hod_2x_negadchits, &b_S_hod_2x_negadchits);
   fChain->SetBranchAddress("Ndata.S.hod.2x.negtdchits", &Ndata_S_hod_2x_negtdchits, &b_Ndata_S_hod_2x_negtdchits);
   fChain->SetBranchAddress("S.hod.2x.negtdchits", &S_hod_2x_negtdchits, &b_S_hod_2x_negtdchits);
   fChain->SetBranchAddress("Ndata.S.hod.2x.posadchits", &Ndata_S_hod_2x_posadchits, &b_Ndata_S_hod_2x_posadchits);
   fChain->SetBranchAddress("S.hod.2x.posadchits", &S_hod_2x_posadchits, &b_S_hod_2x_posadchits);
   fChain->SetBranchAddress("Ndata.S.hod.2x.postdchits", &Ndata_S_hod_2x_postdchits, &b_Ndata_S_hod_2x_postdchits);
   fChain->SetBranchAddress("S.hod.2x.postdchits", &S_hod_2x_postdchits, &b_S_hod_2x_postdchits);
   fChain->SetBranchAddress("Ndata.S.hod.2y.negadchits", &Ndata_S_hod_2y_negadchits, &b_Ndata_S_hod_2y_negadchits);
   fChain->SetBranchAddress("S.hod.2y.negadchits", &S_hod_2y_negadchits, &b_S_hod_2y_negadchits);
   fChain->SetBranchAddress("Ndata.S.hod.2y.negtdchits", &Ndata_S_hod_2y_negtdchits, &b_Ndata_S_hod_2y_negtdchits);
   fChain->SetBranchAddress("S.hod.2y.negtdchits", &S_hod_2y_negtdchits, &b_S_hod_2y_negtdchits);
   fChain->SetBranchAddress("Ndata.S.hod.2y.posadchits", &Ndata_S_hod_2y_posadchits, &b_Ndata_S_hod_2y_posadchits);
   fChain->SetBranchAddress("S.hod.2y.posadchits", &S_hod_2y_posadchits, &b_S_hod_2y_posadchits);
   fChain->SetBranchAddress("Ndata.S.hod.2y.postdchits", &Ndata_S_hod_2y_postdchits, &b_Ndata_S_hod_2y_postdchits);
   fChain->SetBranchAddress("S.hod.2y.postdchits", &S_hod_2y_postdchits, &b_S_hod_2y_postdchits);
   fChain->SetBranchAddress("H.aero.neg_npe_sum", &H_aero_neg_npe_sum, &b_H_aero_neg_npe_sum);
   fChain->SetBranchAddress("H.aero.ngood_hits", &H_aero_ngood_hits, &b_H_aero_ngood_hits);
   fChain->SetBranchAddress("H.aero.npe_sum", &H_aero_npe_sum, &b_H_aero_npe_sum);
   fChain->SetBranchAddress("H.aero.ntdc_neg_hits", &H_aero_ntdc_neg_hits, &b_H_aero_ntdc_neg_hits);
   fChain->SetBranchAddress("H.aero.ntdc_pos_hits", &H_aero_ntdc_pos_hits, &b_H_aero_ntdc_pos_hits);
   fChain->SetBranchAddress("H.aero.pos_npe_sum", &H_aero_pos_npe_sum, &b_H_aero_pos_npe_sum);
   fChain->SetBranchAddress("H.cal.1pr.eplane", &H_cal_1pr_eplane, &b_H_cal_1pr_eplane);
   fChain->SetBranchAddress("H.cal.1pr.eplane_neg", &H_cal_1pr_eplane_neg, &b_H_cal_1pr_eplane_neg);
   fChain->SetBranchAddress("H.cal.1pr.eplane_pos", &H_cal_1pr_eplane_pos, &b_H_cal_1pr_eplane_pos);
   fChain->SetBranchAddress("H.cal.2ta.eplane", &H_cal_2ta_eplane, &b_H_cal_2ta_eplane);
   fChain->SetBranchAddress("H.cal.2ta.eplane_neg", &H_cal_2ta_eplane_neg, &b_H_cal_2ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.2ta.eplane_pos", &H_cal_2ta_eplane_pos, &b_H_cal_2ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.3ta.eplane", &H_cal_3ta_eplane, &b_H_cal_3ta_eplane);
   fChain->SetBranchAddress("H.cal.3ta.eplane_neg", &H_cal_3ta_eplane_neg, &b_H_cal_3ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.3ta.eplane_pos", &H_cal_3ta_eplane_pos, &b_H_cal_3ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.4ta.eplane", &H_cal_4ta_eplane, &b_H_cal_4ta_eplane);
   fChain->SetBranchAddress("H.cal.4ta.eplane_neg", &H_cal_4ta_eplane_neg, &b_H_cal_4ta_eplane_neg);
   fChain->SetBranchAddress("H.cal.4ta.eplane_pos", &H_cal_4ta_eplane_pos, &b_H_cal_4ta_eplane_pos);
   fChain->SetBranchAddress("H.cal.emax", &H_cal_emax, &b_H_cal_emax);
   fChain->SetBranchAddress("H.cal.eprmax", &H_cal_eprmax, &b_H_cal_eprmax);
   fChain->SetBranchAddress("H.cal.mult", &H_cal_mult, &b_H_cal_mult);
   fChain->SetBranchAddress("H.cal.nclust", &H_cal_nclust, &b_H_cal_nclust);
   fChain->SetBranchAddress("H.cal.nhits", &H_cal_nhits, &b_H_cal_nhits);
   fChain->SetBranchAddress("H.cal.tre", &H_cal_tre, &b_H_cal_tre);
   fChain->SetBranchAddress("H.cal.trecor", &H_cal_trecor, &b_H_cal_trecor);
   fChain->SetBranchAddress("H.cal.treplcor", &H_cal_treplcor, &b_H_cal_treplcor);
   fChain->SetBranchAddress("H.cal.trepr", &H_cal_trepr, &b_H_cal_trepr);
   fChain->SetBranchAddress("H.cal.treprcor", &H_cal_treprcor, &b_H_cal_treprcor);
   fChain->SetBranchAddress("H.cal.trx", &H_cal_trx, &b_H_cal_trx);
   fChain->SetBranchAddress("H.cal.try", &H_cal_try, &b_H_cal_try);
   fChain->SetBranchAddress("H.cal.xmax", &H_cal_xmax, &b_H_cal_xmax);
   fChain->SetBranchAddress("H.cher.ncherhit", &H_cher_ncherhit, &b_H_cher_ncherhit);
   fChain->SetBranchAddress("H.cher.npesum", &H_cher_npesum, &b_H_cher_npesum);
   fChain->SetBranchAddress("H.dc.1u1.nhit", &H_dc_1u1_nhit, &b_H_dc_1u1_nhit);
   fChain->SetBranchAddress("H.dc.1v1.nhit", &H_dc_1v1_nhit, &b_H_dc_1v1_nhit);
   fChain->SetBranchAddress("H.dc.1x1.nhit", &H_dc_1x1_nhit, &b_H_dc_1x1_nhit);
   fChain->SetBranchAddress("H.dc.1x2.nhit", &H_dc_1x2_nhit, &b_H_dc_1x2_nhit);
   fChain->SetBranchAddress("H.dc.1y1.nhit", &H_dc_1y1_nhit, &b_H_dc_1y1_nhit);
   fChain->SetBranchAddress("H.dc.1y2.nhit", &H_dc_1y2_nhit, &b_H_dc_1y2_nhit);
   fChain->SetBranchAddress("H.dc.2u1.nhit", &H_dc_2u1_nhit, &b_H_dc_2u1_nhit);
   fChain->SetBranchAddress("H.dc.2v1.nhit", &H_dc_2v1_nhit, &b_H_dc_2v1_nhit);
   fChain->SetBranchAddress("H.dc.2x1.nhit", &H_dc_2x1_nhit, &b_H_dc_2x1_nhit);
   fChain->SetBranchAddress("H.dc.2x2.nhit", &H_dc_2x2_nhit, &b_H_dc_2x2_nhit);
   fChain->SetBranchAddress("H.dc.2y1.nhit", &H_dc_2y1_nhit, &b_H_dc_2y1_nhit);
   fChain->SetBranchAddress("H.dc.2y2.nhit", &H_dc_2y2_nhit, &b_H_dc_2y2_nhit);
   fChain->SetBranchAddress("H.dc.nhit", &H_dc_nhit, &b_H_dc_nhit);
   fChain->SetBranchAddress("H.dc.nsp", &H_dc_nsp, &b_H_dc_nsp);
   fChain->SetBranchAddress("H.dc.ntrack", &H_dc_ntrack, &b_H_dc_ntrack);
   fChain->SetBranchAddress("H.dc.tnhit", &H_dc_tnhit, &b_H_dc_tnhit);
   fChain->SetBranchAddress("H.dc.trawhit", &H_dc_trawhit, &b_H_dc_trawhit);
   fChain->SetBranchAddress("H.gold.dp", &H_gold_dp, &b_H_gold_dp);
   fChain->SetBranchAddress("H.gold.index", &H_gold_index, &b_H_gold_index);
   fChain->SetBranchAddress("H.gold.ok", &H_gold_ok, &b_H_gold_ok);
   fChain->SetBranchAddress("H.gold.p", &H_gold_p, &b_H_gold_p);
   fChain->SetBranchAddress("H.gold.ph", &H_gold_ph, &b_H_gold_ph);
   fChain->SetBranchAddress("H.gold.px", &H_gold_px, &b_H_gold_px);
   fChain->SetBranchAddress("H.gold.py", &H_gold_py, &b_H_gold_py);
   fChain->SetBranchAddress("H.gold.pz", &H_gold_pz, &b_H_gold_pz);
   fChain->SetBranchAddress("H.gold.th", &H_gold_th, &b_H_gold_th);
   fChain->SetBranchAddress("H.gold.x", &H_gold_x, &b_H_gold_x);
   fChain->SetBranchAddress("H.gold.y", &H_gold_y, &b_H_gold_y);
   fChain->SetBranchAddress("H.hod.1x.fptime", &H_hod_1x_fptime, &b_H_hod_1x_fptime);
   fChain->SetBranchAddress("H.hod.1y.fptime", &H_hod_1y_fptime, &b_H_hod_1y_fptime);
   fChain->SetBranchAddress("H.hod.2x.fptime", &H_hod_2x_fptime, &b_H_hod_2x_fptime);
   fChain->SetBranchAddress("H.hod.2y.fptime", &H_hod_2y_fptime, &b_H_hod_2y_fptime);
   fChain->SetBranchAddress("H.hod.hgoodstarttime", &H_hod_hgoodstarttime, &b_H_hod_hgoodstarttime);
   fChain->SetBranchAddress("H.hod.starttime", &H_hod_starttime, &b_H_hod_starttime);
   fChain->SetBranchAddress("H.tr.n", &H_tr_n, &b_H_tr_n);
   fChain->SetBranchAddress("S.cal.1pr.eplane", &S_cal_1pr_eplane, &b_S_cal_1pr_eplane);
   fChain->SetBranchAddress("S.cal.1pr.eplane_neg", &S_cal_1pr_eplane_neg, &b_S_cal_1pr_eplane_neg);
   fChain->SetBranchAddress("S.cal.1pr.eplane_pos", &S_cal_1pr_eplane_pos, &b_S_cal_1pr_eplane_pos);
   fChain->SetBranchAddress("S.cal.2ta.eplane", &S_cal_2ta_eplane, &b_S_cal_2ta_eplane);
   fChain->SetBranchAddress("S.cal.2ta.eplane_neg", &S_cal_2ta_eplane_neg, &b_S_cal_2ta_eplane_neg);
   fChain->SetBranchAddress("S.cal.2ta.eplane_pos", &S_cal_2ta_eplane_pos, &b_S_cal_2ta_eplane_pos);
   fChain->SetBranchAddress("S.cal.3ta.eplane", &S_cal_3ta_eplane, &b_S_cal_3ta_eplane);
   fChain->SetBranchAddress("S.cal.3ta.eplane_neg", &S_cal_3ta_eplane_neg, &b_S_cal_3ta_eplane_neg);
   fChain->SetBranchAddress("S.cal.3ta.eplane_pos", &S_cal_3ta_eplane_pos, &b_S_cal_3ta_eplane_pos);
   fChain->SetBranchAddress("S.cal.4ta.eplane", &S_cal_4ta_eplane, &b_S_cal_4ta_eplane);
   fChain->SetBranchAddress("S.cal.4ta.eplane_neg", &S_cal_4ta_eplane_neg, &b_S_cal_4ta_eplane_neg);
   fChain->SetBranchAddress("S.cal.4ta.eplane_pos", &S_cal_4ta_eplane_pos, &b_S_cal_4ta_eplane_pos);
   fChain->SetBranchAddress("S.cal.emax", &S_cal_emax, &b_S_cal_emax);
   fChain->SetBranchAddress("S.cal.eprmax", &S_cal_eprmax, &b_S_cal_eprmax);
   fChain->SetBranchAddress("S.cal.mult", &S_cal_mult, &b_S_cal_mult);
   fChain->SetBranchAddress("S.cal.nclust", &S_cal_nclust, &b_S_cal_nclust);
   fChain->SetBranchAddress("S.cal.nhits", &S_cal_nhits, &b_S_cal_nhits);
   fChain->SetBranchAddress("S.cal.tre", &S_cal_tre, &b_S_cal_tre);
   fChain->SetBranchAddress("S.cal.trecor", &S_cal_trecor, &b_S_cal_trecor);
   fChain->SetBranchAddress("S.cal.treplcor", &S_cal_treplcor, &b_S_cal_treplcor);
   fChain->SetBranchAddress("S.cal.trepr", &S_cal_trepr, &b_S_cal_trepr);
   fChain->SetBranchAddress("S.cal.treprcor", &S_cal_treprcor, &b_S_cal_treprcor);
   fChain->SetBranchAddress("S.cal.trx", &S_cal_trx, &b_S_cal_trx);
   fChain->SetBranchAddress("S.cal.try", &S_cal_try, &b_S_cal_try);
   fChain->SetBranchAddress("S.cal.xmax", &S_cal_xmax, &b_S_cal_xmax);
   fChain->SetBranchAddress("S.dc.1u1.nhit", &S_dc_1u1_nhit, &b_S_dc_1u1_nhit);
   fChain->SetBranchAddress("S.dc.1u2.nhit", &S_dc_1u2_nhit, &b_S_dc_1u2_nhit);
   fChain->SetBranchAddress("S.dc.1v1.nhit", &S_dc_1v1_nhit, &b_S_dc_1v1_nhit);
   fChain->SetBranchAddress("S.dc.1v2.nhit", &S_dc_1v2_nhit, &b_S_dc_1v2_nhit);
   fChain->SetBranchAddress("S.dc.1x1.nhit", &S_dc_1x1_nhit, &b_S_dc_1x1_nhit);
   fChain->SetBranchAddress("S.dc.1x2.nhit", &S_dc_1x2_nhit, &b_S_dc_1x2_nhit);
   fChain->SetBranchAddress("S.dc.2u1.nhit", &S_dc_2u1_nhit, &b_S_dc_2u1_nhit);
   fChain->SetBranchAddress("S.dc.2u2.nhit", &S_dc_2u2_nhit, &b_S_dc_2u2_nhit);
   fChain->SetBranchAddress("S.dc.2v1.nhit", &S_dc_2v1_nhit, &b_S_dc_2v1_nhit);
   fChain->SetBranchAddress("S.dc.2v2.nhit", &S_dc_2v2_nhit, &b_S_dc_2v2_nhit);
   fChain->SetBranchAddress("S.dc.2x1.nhit", &S_dc_2x1_nhit, &b_S_dc_2x1_nhit);
   fChain->SetBranchAddress("S.dc.2x2.nhit", &S_dc_2x2_nhit, &b_S_dc_2x2_nhit);
   fChain->SetBranchAddress("S.dc.nhit", &S_dc_nhit, &b_S_dc_nhit);
   fChain->SetBranchAddress("S.dc.nsp", &S_dc_nsp, &b_S_dc_nsp);
   fChain->SetBranchAddress("S.dc.ntrack", &S_dc_ntrack, &b_S_dc_ntrack);
   fChain->SetBranchAddress("S.hod.1x.fptime", &S_hod_1x_fptime, &b_S_hod_1x_fptime);
   fChain->SetBranchAddress("S.hod.1y.fptime", &S_hod_1y_fptime, &b_S_hod_1y_fptime);
   fChain->SetBranchAddress("S.hod.2x.fptime", &S_hod_2x_fptime, &b_S_hod_2x_fptime);
   fChain->SetBranchAddress("S.hod.2y.fptime", &S_hod_2y_fptime, &b_S_hod_2y_fptime);
   fChain->SetBranchAddress("S.hod.hgoodstarttime", &S_hod_hgoodstarttime, &b_S_hod_hgoodstarttime);
   fChain->SetBranchAddress("S.hod.starttime", &S_hod_starttime, &b_S_hod_starttime);
   fChain->SetBranchAddress("S.tr.n", &S_tr_n, &b_S_tr_n);
   fChain->SetBranchAddress("g.evnum", &g_evnum, &b_g_evnum);
   fChain->SetBranchAddress("fEvtHdr.fEvtTime", &fEvtHdr_fEvtTime, &b_Event_Branch_fEvtHdr_fEvtTime);
   fChain->SetBranchAddress("fEvtHdr.fEvtNum", &fEvtHdr_fEvtNum, &b_Event_Branch_fEvtHdr_fEvtNum);
   fChain->SetBranchAddress("fEvtHdr.fEvtType", &fEvtHdr_fEvtType, &b_Event_Branch_fEvtHdr_fEvtType);
   fChain->SetBranchAddress("fEvtHdr.fEvtLen", &fEvtHdr_fEvtLen, &b_Event_Branch_fEvtHdr_fEvtLen);
   fChain->SetBranchAddress("fEvtHdr.fHelicity", &fEvtHdr_fHelicity, &b_Event_Branch_fEvtHdr_fHelicity);
   fChain->SetBranchAddress("fEvtHdr.fTargetPol", &fEvtHdr_fTargetPol, &b_Event_Branch_fEvtHdr_fTargetPol);
   fChain->SetBranchAddress("fEvtHdr.fRun", &fEvtHdr_fRun, &b_Event_Branch_fEvtHdr_fRun);
   fChain->SetBranchAddress("RB.raster.frx_raw_adc", &RB_raster_frx_raw_adc, &b_RB_raster_frx_raw_adc);
   fChain->SetBranchAddress("RB.raster.fry_raw_adc", &RB_raster_fry_raw_adc, &b_RB_raster_fry_raw_adc);
   fChain->SetBranchAddress("RB.raster.frx_adc", &RB_raster_frx_adc, &b_RB_raster_frx_adc);
   fChain->SetBranchAddress("RB.raster.fry_adc", &RB_raster_fry_adc, &b_RB_raster_fry_adc);
   fChain->SetBranchAddress("RB.raster.frx", &RB_raster_frx, &b_RB_raster_frx);
   fChain->SetBranchAddress("RB.raster.fry", &RB_raster_fry, &b_RB_raster_fry);


   Notify();
}

Bool_t analyze_hcana_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analyze_hcana_tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analyze_hcana_tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
void analyze_hcana_tree::PrintTrack(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->GetEntry(entry);
   cout << " hcana event number = " << g_evnum << " event type = " << fEvtHdr_fEvtType << endl;
   if (fEvtHdr_fEvtType==1 ||fEvtHdr_fEvtType==3) { 
     cout << " number of 1x1 hits = " << Ndata_H_dc_1x1_tdchits << endl;
   cout << " HMS  Number of Total hits  = " << H_dc_nhit << endl;
   cout << " Number of Tracks  = " << H_dc_ntrack << endl;
   printf(" Track focal plane  x (cm)    y (cm)    dx/dz     dy/dz  \n");
   for (Int_t i=0;i<H_dc_ntrack;i++) {
     printf("  %3d              %8.4f  %8.4f  %8.6f  %8.6f \n",i+1,H_dc_x[i],H_dc_y[i],H_dc_xp[i],H_dc_yp[i]);
   }
      cout << " Print track focal plane is not sorted by chi-squared " << endl;
   printf(" Track target        y (cm)   dx/dz     dy/dz       delta   p   chi2 \n");
   for (Int_t i=0;i<H_dc_ntrack;i++) {
     printf(" %3d               %7.3f   %7.3f   %7.5f    %7.5f  %7.5f   %7.5f \n",i+1,H_tr_tg_y[i],H_tr_tg_th[i],H_tr_tg_ph[i],H_tr_tg_dp[i],H_tr_p[i],H_tr_chi2[i]);
   }
   cout << " Print track target info sorted by chi-squared " << endl;
   cout << " Xtar =  " << H_gold_x << " Ytar =  " <<  H_gold_y << " Xptar =  " << H_gold_th << " Yptar =  " <<  H_gold_ph << endl; 
   }
   if (fEvtHdr_fEvtType==2 ||fEvtHdr_fEvtType==3) { 
   cout << " SOS  Number of Total hits  = " << S_dc_nhit << endl;
   cout << " Number of Tracks  = " << S_dc_ntrack << endl;
   printf(" Track focal plane  x (cm)    y (cm)    dx/dz     dy/dz  \n");
   for (Int_t i=0;i<S_dc_ntrack;i++) {
     printf("  %3d              %8.4f  %8.4f  %8.6f  %8.6f \n",i+1,S_dc_x[i],S_dc_y[i],S_dc_xp[i],S_dc_yp[i]);
   }
      cout << " Print track focal plane is not sorted by chi-squared " << endl;
   printf(" Track target        y (cm)   dx/dz     dy/dz       delta   p   chi2 \n");
   for (Int_t i=0;i<S_dc_ntrack;i++) {
     printf(" %3d               %7.3f   %7.3f   %7.5f    %7.5f  %7.5f   %7.5f \n",i+1,S_tr_tg_y[i],S_tr_tg_th[i],S_tr_tg_ph[i],S_tr_tg_dp[i],S_tr_p[i],S_tr_chi2[i]);
   }
   cout << " Print track target info sorted by chi-squared " << endl;
   }
}
#endif // #ifdef analyze_hcana_tree_cxx
