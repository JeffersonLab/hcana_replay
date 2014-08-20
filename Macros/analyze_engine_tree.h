//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Thu Dec 12 11:38:25 2013 by ROOT version 5.34/01
// from TTree h9500/
// found on file: hms_dc_52949.root
//////////////////////////////////////////////////////////

#ifndef analyze_engine_tree_h
#define analyze_engine_tree_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class analyze_engine_tree {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         evnum;
   Float_t         evtype;
   Int_t           hdc_ntr;
   Float_t         hdc_xfp[20];   //[hdc_ntr]
   Float_t         hdc_yfp[20];   //[hdc_ntr]
   Float_t         hdc_xpfp[20];   //[hdc_ntr]
   Float_t         hdc_ypfp[20];   //[hdc_ntr]
   Float_t         hdc_chi2[20];   //[hdc_ntr]
   Float_t         hdc_ytg[20];   //[hdc_ntr]
   Float_t         hdc_xptg[20];   //[hdc_ntr]
   Float_t         hdc_yptg[20];   //[hdc_ntr]
   Float_t         hdc_delta[20];   //[hdc_ntr]
   Float_t         hdc_ptar[20];   //[hdc_ntr]
   Float_t         hdc_chi2min;
   Float_t         hdc_x2dmin;
   Float_t         hdc_y2dmin;
   Int_t           hdc_ngoodtr;
    Float_t         hscin_starttime;
   Float_t         hscin_rfptime[4];
   Int_t           sdc_ntr;
   Float_t         sdc_xfp[20];   //[sdc_ntr]
   Float_t         sdc_yfp[20];   //[sdc_ntr]
   Float_t         sdc_xpfp[20];   //[sdc_ntr]
   Float_t         sdc_ypfp[20];   //[sdc_ntr]
   Float_t         sdc_chi2[20];   //[sdc_ntr]
   Float_t         sdc_ytg[20];   //[sdc_ntr]
   Float_t         sdc_xptg[20];   //[sdc_ntr]
   Float_t         sdc_yptg[20];   //[sdc_ntr]
   Float_t         sdc_delta[20];   //[sdc_ntr]
   Float_t         sdc_ptar[20];   //[sdc_ntr]
   Float_t         frx_raw_adc;  
   Float_t         fry_raw_adc;  
   Float_t         frx_adc;  
   Float_t         fry_adc;  
   Float_t         frx;  
   Float_t         fry;  
   // List of branches
   TBranch        *b_evnum;   //!
   TBranch        *b_evtype;   //!
   TBranch        *b_hdc_ntr;   //!
   TBranch        *b_hdc_xfp;   //!
   TBranch        *b_hdc_yfp;   //!
   TBranch        *b_hdc_xpfp;   //!
   TBranch        *b_hdc_ypfp;   //!
   TBranch        *b_hdc_chi2;   //!
   TBranch        *b_hdc_ytg;   //!
   TBranch        *b_hdc_xptg;   //!
   TBranch        *b_hdc_yptg;   //!
   TBranch        *b_hdc_delta;   //!
   TBranch        *b_hdc_ptar;   //!
   TBranch        *b_hdc_chi2min;   //!
   TBranch        *b_hdc_x2dmin;   //!
   TBranch        *b_hdc_y2dmin;   //!
   TBranch        *b_hdc_ngoodtr;   //!
    TBranch        *b_hscin_starttime;   //!
   TBranch        *b_hscin_rfptime;   //!
   TBranch        *b_sdc_ntr;   //!
   TBranch        *b_sdc_xfp;   //!
   TBranch        *b_sdc_yfp;   //!
   TBranch        *b_sdc_xpfp;   //!
   TBranch        *b_sdc_ypfp;   //!
   TBranch        *b_sdc_chi2;   //!
   TBranch        *b_sdc_ytg;   //!
   TBranch        *b_sdc_xptg;   //!
   TBranch        *b_sdc_yptg;   //!
   TBranch        *b_sdc_delta;   //!
   TBranch        *b_sdc_ptar;   //!
   TBranch        *b_frx_raw_adc;   //!
   TBranch        *b_fry_raw_adc;   //!
   TBranch        *b_frx_adc;   //!
   TBranch        *b_fry_adc;   //!
   TBranch        *b_frx;   //!
   TBranch        *b_fry;   //!

   analyze_engine_tree(TString ifile,TTree *tree=0);
   virtual ~analyze_engine_tree();
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

#ifdef analyze_engine_tree_cxx
analyze_engine_tree::analyze_engine_tree(TString ifile,TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(ifile);
      if (!f || !f->IsOpen()) {
         f = new TFile(ifile);
      }
      f->GetObject("h9500",tree);

   }
   Init(tree);
}

analyze_engine_tree::~analyze_engine_tree()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t analyze_engine_tree::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t analyze_engine_tree::LoadTree(Long64_t entry)
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

void analyze_engine_tree::Init(TTree *tree)
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

   fChain->SetBranchAddress("evnum", &evnum, &b_evnum);
   fChain->SetBranchAddress("evtype", &evtype, &b_evtype);
   fChain->SetBranchAddress("hdc_ntr", &hdc_ntr, &b_hdc_ntr);
   fChain->SetBranchAddress("hdc_xfp", hdc_xfp, &b_hdc_xfp);
   fChain->SetBranchAddress("hdc_yfp", hdc_yfp, &b_hdc_yfp);
   fChain->SetBranchAddress("hdc_xpfp", hdc_xpfp, &b_hdc_xpfp);
   fChain->SetBranchAddress("hdc_ypfp", hdc_ypfp, &b_hdc_ypfp);
   fChain->SetBranchAddress("hdc_chi2", hdc_chi2, &b_hdc_chi2);
   fChain->SetBranchAddress("hdc_ytg", hdc_ytg, &b_hdc_ytg);
   fChain->SetBranchAddress("hdc_xptg", hdc_xptg, &b_hdc_xptg);
   fChain->SetBranchAddress("hdc_yptg", hdc_yptg, &b_hdc_yptg);
   fChain->SetBranchAddress("hdc_delta", hdc_delta, &b_hdc_delta);
   fChain->SetBranchAddress("hdc_ptar", hdc_ptar, &b_hdc_ptar);
   fChain->SetBranchAddress("hdc_chi2min", &hdc_chi2min, &b_hdc_chi2min);
   fChain->SetBranchAddress("hdc_x2dmin", &hdc_x2dmin, &b_hdc_x2dmin);
   fChain->SetBranchAddress("hdc_y2dmin", &hdc_y2dmin, &b_hdc_y2dmin);
   fChain->SetBranchAddress("hdc_ngoodtr", &hdc_ngoodtr, &b_hdc_ngoodtr);
    fChain->SetBranchAddress("hscin_starttime", &hscin_starttime, &b_hscin_starttime);
   fChain->SetBranchAddress("hscin_rfptime", hscin_rfptime, &b_hscin_rfptime);
   fChain->SetBranchAddress("sdc_ntr", &sdc_ntr, &b_sdc_ntr);
   fChain->SetBranchAddress("sdc_xfp", sdc_xfp, &b_sdc_xfp);
   fChain->SetBranchAddress("sdc_yfp", sdc_yfp, &b_sdc_yfp);
   fChain->SetBranchAddress("sdc_xpfp", sdc_xpfp, &b_sdc_xpfp);
   fChain->SetBranchAddress("sdc_ypfp", sdc_ypfp, &b_sdc_ypfp);
   fChain->SetBranchAddress("sdc_chi2", sdc_chi2, &b_sdc_chi2);
   fChain->SetBranchAddress("sdc_ytg", sdc_ytg, &b_sdc_ytg);
   fChain->SetBranchAddress("sdc_xptg", sdc_xptg, &b_sdc_xptg);
   fChain->SetBranchAddress("sdc_yptg", sdc_yptg, &b_sdc_yptg);
   fChain->SetBranchAddress("sdc_delta", sdc_delta, &b_sdc_delta);
   fChain->SetBranchAddress("sdc_ptar", sdc_ptar, &b_sdc_ptar);
   fChain->SetBranchAddress("frx_raw_adc", &frx_raw_adc, &b_frx_raw_adc);
   fChain->SetBranchAddress("fry_raw_adc", &fry_raw_adc, &b_fry_raw_adc);
   fChain->SetBranchAddress("frx_adc", &frx_adc, &b_frx_adc);
   fChain->SetBranchAddress("fry_adc", &fry_adc, &b_fry_adc);
   fChain->SetBranchAddress("frx", &frx, &b_frx);
   fChain->SetBranchAddress("fry", &fry, &b_fry);
   Notify();
}

Bool_t analyze_engine_tree::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void analyze_engine_tree::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t analyze_engine_tree::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
void analyze_engine_tree::PrintTrack(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->GetEntry(entry);
   cout << "\nEngine event number = " << evnum << " event type = " << evtype << endl;
   if (evtype == 1||evtype == 3) {
   cout << "HMS  Number of Tracks  = " << hdc_ntr << endl;
   printf(" Track focal plane  x (cm)    y (cm)    dx/dz     dy/dz  \n");
   for (Int_t i=0;i<hdc_ntr;i++) {
     printf("  %3d              %8.4f  %8.4f  %8.6f  %8.6f \n",i+1,hdc_xfp[i],hdc_yfp[i],hdc_xpfp[i],hdc_ypfp[i]);
   }
   cout << " Print track focal plane is not sorted by chi-squared " << endl;
   printf(" Track target        y (cm)   dx/dz     dy/dz       delta   p     chi2 \n");
   for (Int_t i=0;i<hdc_ntr;i++) {
     printf(" %3d               %7.3f   %7.3f   %7.5f    %7.5f   %7.5f   %7.5f \n",i+1,hdc_ytg[i],hdc_xptg[i],hdc_yptg[i],hdc_delta[i],hdc_ptar[i],hdc_chi2[i]);
   }
   cout << " Print track target info sorted by chi-squared " << endl;
   cout << " Good track number = " << hdc_ngoodtr << endl;
   }
   if (evtype == 2||evtype == 3) {
   cout << "SOS  Number of Tracks  = " << sdc_ntr << endl;
   printf(" Track focal plane  x (cm)    y (cm)    dx/dz     dy/dz  \n");
   for (Int_t i=0;i<sdc_ntr;i++) {
     printf("  %3d              %8.4f  %8.4f  %8.6f  %8.6f \n",i+1,sdc_xfp[i],sdc_yfp[i],sdc_xpfp[i],sdc_ypfp[i]);
   }
   cout << " Print track focal plane is not sorted by chi-squared " << endl;
   printf(" Track target        y (cm)   dx/dz     dy/dz       delta   p     chi2 \n");
   for (Int_t i=0;i<sdc_ntr;i++) {
     printf(" %3d               %7.3f   %7.3f   %7.5f    %7.5f   %7.5f   %7.5f \n",i+1,sdc_ytg[i],sdc_xptg[i],sdc_yptg[i],sdc_delta[i],sdc_ptar[i],sdc_chi2[i]);
   }
   cout << " Print track target info sorted by chi-squared " << endl;
   }
   cout<<" Raster x_raw_adc = "<<frx_raw_adc[i]
       <<"\n        y_raw_adc = "<<fry_raw_adc[i]
       <<"\n        x_adc = "<<frx_adc[i]
       <<"\n        y_adc = "<<fry_adc[i]
       <<"\n        x = "<<frx[i]
       <<"\n        x = "<<fry[i] <<endl;

}
#endif // #ifdef analyze_engine_tree_cxx
