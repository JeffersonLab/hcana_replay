//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Wed Sep  4 13:54:21 2013 by ROOT version 5.34/01
// from TTree h9500/
// found on file: hms_dc_52949.root
//////////////////////////////////////////////////////////

#ifndef engine_h
#define engine_h

#include <TString.h>
#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.

// Fixed size dimensions of array or collections stored in the TTree if any.

class engine {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

   // Declaration of leaf types
   Float_t         evnum;
   Float_t         evtype;
   Int_t           dc_ntr;
   Float_t         dc_xfp[20];   //[dc_ntr]
   Float_t         dc_yfp[20];   //[dc_ntr]
   Float_t         dc_xpfp[20];   //[dc_ntr]
   Float_t         dc_ypfp[20];   //[dc_ntr]
   Float_t         dc_chi2[20];   //[dc_ntr]
   Float_t         dc_ytg[20];   //[dc_ntr]
   Float_t         dc_xptg[20];   //[dc_ntr]
   Float_t         dc_yptg[20];   //[dc_ntr]
   Float_t         dc_delta[20];   //[dc_ntr]
   Float_t         dc_ptar[20];   //[dc_ntr]

   // List of branches
   TBranch        *b_evnum;   //!
   TBranch        *b_evtype;   //!
   TBranch        *b_dc_ntr;   //!
   TBranch        *b_dc_xfp;   //!
   TBranch        *b_dc_yfp;   //!
   TBranch        *b_dc_xpfp;   //!
   TBranch        *b_dc_ypfp;   //!
   TBranch        *b_dc_chi2;   //!
   TBranch        *b_dc_ytg;   //!
   TBranch        *b_dc_xptg;   //!
   TBranch        *b_dc_yptg;   //!
   TBranch        *b_dc_delta;   //!
   TBranch        *b_dc_ptar;   //!

   engine(TString ifile="",TTree *tree=0);
   virtual ~engine();
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

#ifdef engine_cxx
engine::engine(TString ifile,TTree *tree) : fChain(0) 
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

engine::~engine()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t engine::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t engine::LoadTree(Long64_t entry)
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

void engine::Init(TTree *tree)
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
   fChain->SetBranchAddress("dc_ntr", &dc_ntr, &b_dc_ntr);
   fChain->SetBranchAddress("dc_xfp", dc_xfp, &b_dc_xfp);
   fChain->SetBranchAddress("dc_yfp", dc_yfp, &b_dc_yfp);
   fChain->SetBranchAddress("dc_xpfp", dc_xpfp, &b_dc_xpfp);
   fChain->SetBranchAddress("dc_ypfp", dc_ypfp, &b_dc_ypfp);
   fChain->SetBranchAddress("dc_chi2", dc_chi2, &b_dc_chi2);
   fChain->SetBranchAddress("dc_ytg", dc_ytg, &b_dc_ytg);
   fChain->SetBranchAddress("dc_xptg", dc_xptg, &b_dc_xptg);
   fChain->SetBranchAddress("dc_yptg", dc_yptg, &b_dc_yptg);
   fChain->SetBranchAddress("dc_delta", dc_delta, &b_dc_delta);
   fChain->SetBranchAddress("dc_ptar", dc_ptar, &b_dc_ptar);
   Notify();
}

Bool_t engine::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void engine::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}

void engine::PrintTrack(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->GetEntry(entry);
   cout << " Engine event number = " << evnum << " event type = " << evtype << endl;
   cout << " Number of Tracks  = " << dc_ntr << endl;
   printf(" Track focal plane  x (cm)    y (cm)    dx/dz     dy/dz  \n");
   for (Int_t i=0;i<dc_ntr;i++) {
     printf("  %3d              %8.4f  %8.4f  %8.6f  %8.6f \n",i+1,dc_xfp[i],dc_yfp[i],dc_xpfp[i],dc_ypfp[i]);
   }
   cout << " Print track focal plane is not sorted by chi-squared " << endl;
   printf(" Track target        y (cm)   dx/dz     dy/dz       delta   p     chi2 \n");
   for (Int_t i=0;i<dc_ntr;i++) {
     printf(" %3d               %7.3f   %7.3f   %7.5f    %7.5f   %7.5f   %7.5f \n",i+1,dc_ytg[i],dc_xptg[i],dc_yptg[i],dc_delta[i],dc_ptar[i],dc_chi2[i]);
   }
   cout << " Print track target info sorted by chi-squared " << endl;
}
Int_t engine::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef engine_cxx
