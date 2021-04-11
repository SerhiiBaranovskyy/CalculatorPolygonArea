//---------------------------------------------------------------------------
//
// Name:        PolygonAreaApp.h
// Author:      Serhii
// Created:     14.03.2021 1:15:11
// Description: 
//
//---------------------------------------------------------------------------

#ifndef __POLYGONAREAFRMApp_h__
#define __POLYGONAREAFRMApp_h__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
#else
	#include <wx/wxprec.h>
#endif
#include "DrawPoligon.h"

class PolygonAreaFrmApp : public wxApp
{
	public:
		bool OnInit();
		wxLocale m_locale;
//		wxFrame *frame1;   /////////////
//		DrawPoligon *drawPane;        //////////

        int OnExit();
};

#endif
