
void compare_hodo(Int_t RunNumber=52949, Int_t FirstToReplay=1, Int_t MaxEventToReplay=11000) {

  //
  //  Steering script to test hodoscope decoding
  //
  
  //Int_t RunNumber=52949;
    //char* RunFileNamePattern="/cache/mss/hallc/daq04/raw/daq04_%d.log.0";
    char* RunFileNamePattern="/Users/brash/Dropbox/Research/daq04/daq04_%d.log.0";
  gHcParms->Define("gen_run_number", "Run Number", RunNumber);
  gHcParms->AddString("g_ctp_database_filename", "jan05.database");
  
  gHcParms->Load(gHcParms->GetString("g_ctp_database_filename"), RunNumber);

  // g_ctp_parm_filename and g_decode_map_filename should now be defined

  gHcParms->Load(gHcParms->GetString("g_ctp_kinematics_filename"));
  gHcParms->Load(gHcParms->GetString("g_ctp_parm_filename"));
  gHcParms->Load("hcana.param");

  // Constants not in ENGINE PARAM files that we want to be
  // configurable
  //gHcParms->Load(Form("PARAM/%05d/general.param",RunNumber));

  // Generate db_cratemap to correspond to map file contents
  char command[100];
  sprintf(command,"./make_cratemap.pl < %s > db_cratemap.dat",gHcParms->GetString("g_decode_map_filename"));
  system(command);

  // Load the Hall C style detector map
  gHcDetectorMap=new THcDetectorMap();
  gHcDetectorMap->Load(gHcParms->GetString("g_decode_map_filename"));

  // Set up the equipment to be analyzed.

  THaApparatus* HMS = new THcHallCSpectrometer("H","HMS");
  gHaApps->Add( HMS );

  // Add hodoscope
  HMS->AddDetector( new THcHodoscope("hod", "Hodoscope" ));
   HMS->AddDetector( new THcShower("cal", "Shower" ));
  HMS->AddDetector( new THcDC("dc", "Drift Chambers" ));
  THcAerogel* aerogel = new THcAerogel("aero", "Aerogel Cerenkov" );
  HMS->AddDetector( aerogel );

  // Set up the analyzer - we use the standard one,
  // but this could be an experiment-specific one as well.
  // The Analyzer controls the reading of the data, executes
  // tests/cuts, loops over Acpparatus's and PhysicsModules,
  // and executes the output routines.
  THaAnalyzer* analyzer = new THcAnalyzer;
  

  // A simple event class to be output to the resulting tree.
  // Creating your own descendant of THaEvent is one way of
  // defining and controlling the output.
  THaEvent* event = new THaEvent;
  
  // Define the run(s) that we want to analyze.
  // We just set up one, but this could be many.
  char RunFileName[100];
  sprintf(RunFileName,RunFileNamePattern,RunNumber);
  THaRun* run = new THaRun(RunFileName);

  // Eventually need to learn to skip over, or properly analyze
  // the pedestal events
  run->SetEventRange(FirstToReplay,MaxEventToReplay);//  Physics Event number, does not
                                // include scaler or control events

  // Define the analysis parameters
  analyzer->SetCountMode( 2 ); // 0 = counter is # of physics triggers
			       //1 = counter is # of all decode reads 
                               //2= counter is event number
  analyzer->SetEvent( event );
  analyzer->SetOutFile(Form("Rootfiles/compare_hodo_%05d.root",RunNumber));
  analyzer->SetOdefFile("output_hodo.def");
  analyzer->SetCutFile("cuts_hodo.def");        // optional
  
  // File to record cuts accounting information
  //  analyzer->SetSummaryFile("summary_example.log"); // optional
  
  analyzer->Process(run);     // start the actual analysis
}
