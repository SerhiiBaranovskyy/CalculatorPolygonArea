//---------------------------------------------------------------------------
//
// Name:        PolygonAreaApp.cpp
// Author:      Serhii
// Created:     14.03.2021 1:15:11
// Description: 
//
//---------------------------------------------------------------------------

#include "PolygonAreaApp.h"
#include "PolygonAreaFrm.h"




IMPLEMENT_APP(PolygonAreaFrmApp)

bool PolygonAreaFrmApp::OnInit()
{
    m_locale.Init(wxLANGUAGE_RUSSIAN);
    PolygonAreaFrm* frame = new PolygonAreaFrm(NULL);
    SetTopWindow(frame);
    frame->Show();
    

//    wxBoxSizer* sizer = new wxBoxSizer(wxHORIZONTAL);                           ////////
//    frame1 = new wxFrame((wxFrame *)NULL,-1,wxT("W"),wxPoint(50,50),wxSize(360,300));///////
//    drawPane = new DrawPoligon ((wxFrame*)frame1);                               ////////    
//    sizer->Add(drawPane, 1, wxEXPAND);                                          ////////
//    frame1->SetSizer(sizer);                                                     /////////
//    frame1->SetAutoLayout(true);                                                 ///////////
//    frame1->Show();                                                              //////////
   
    return true;
}
 
int PolygonAreaFrmApp::OnExit()
{
	return 0;
}
