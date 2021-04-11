///-----------------------------------------------------------------
///
/// @file      PolygonAreaFrm.h
/// @author    Serhii
/// Created:   14.03.2021 1:15:16
/// @section   DESCRIPTION
///            PolygonAreaFrm class declaration
///
///------------------------------------------------------------------

#ifndef __POLYGONAREAFRM_H__
#define __POLYGONAREAFRM_H__

#ifdef __BORLANDC__
	#pragma hdrstop
#endif

#ifndef WX_PRECOMP
	#include <wx/wx.h>
	#include <wx/frame.h>
#else
	#include <wx/wxprec.h>
#endif

//Do not add custom headers between 
//Header Include Start and Header Include End.
//wxDev-C++ designer will remove them. Add custom headers after the block.
////Header Include Start
#include <wx/scrolwin.h>
#include <wx/button.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/combobox.h>
#include <wx/statbox.h>
#include <wx/panel.h>
////Header Include End
#include <string>
#include <iostream>
#include <wx/graphics.h>
#include <wx/dcclient.h>

#include "PolygonAreaApp.h"
#include "DrawPoligon.h"

////Dialog Style Start
#undef PolygonAreaFrm_STYLE
#define PolygonAreaFrm_STYLE wxCAPTION | wxMINIMIZE_BOX | wxCLOSE_BOX
////Dialog Style End
#define PI 3.14159265


class PolygonAreaFrm : public wxFrame
{
	private:
		DECLARE_EVENT_TABLE();
		
	public:
		PolygonAreaFrm(wxWindow *parent, wxWindowID id = 1, const wxString &title = wxT("PolygonArea"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = PolygonAreaFrm_STYLE);
		virtual ~PolygonAreaFrm();
		void CountAngleSelected(wxCommandEvent& event );
		void EqPolygonClick(wxCommandEvent& event);
		void VisibleTextEquilateralPolygon(bool equilateralPolygon);
		void ReturnOnStart();
		void ErrorOutput(int error);
		int CorrectDataVerify(int variant);
		void InputData(int version);
		void CalculationCoordinatePoint(int count);
		double CalculationArea();
        void TextControlsToArray();
		void PolygonAreaFrmActivate(wxActivateEvent& event);
		void WxButton2Click(wxCommandEvent& event);
        
       	
	private:
		//Do not add custom control declarations between
		//GUI Control Declaration Start and GUI Control Declaration End.
		//wxDev-C++ will remove them. Add custom code after the block.
		////GUI Control Declaration Start
		wxPanel *Paint;
		wxTextCtrl *OutError;
		wxPanel *WxPanel2;
		wxTextCtrl *AM13;
		wxTextCtrl *AG13;
		wxTextCtrl *L13;
		wxStaticText *T13;
		wxStaticText *T14;
		wxTextCtrl *L14;
		wxTextCtrl *AG14;
		wxTextCtrl *AM14;
		wxTextCtrl *AM15;
		wxTextCtrl *AG15;
		wxTextCtrl *L15;
		wxStaticText *T15;
		wxTextCtrl *L16;
		wxStaticText *T16;
		wxTextCtrl *AM12;
		wxTextCtrl *AG12;
		wxTextCtrl *L12;
		wxStaticText *T12;
		wxTextCtrl *AM11;
		wxTextCtrl *AG11;
		wxTextCtrl *L11;
		wxStaticText *T11;
		wxTextCtrl *AM10;
		wxTextCtrl *AG10;
		wxTextCtrl *L10;
		wxStaticText *T10;
		wxTextCtrl *AM9;
		wxTextCtrl *AG9;
		wxTextCtrl *L9;
		wxStaticText *T9;
		wxTextCtrl *AM5;
		wxTextCtrl *AM6;
		wxTextCtrl *AM7;
		wxTextCtrl *AM8;
		wxTextCtrl *AG5;
		wxTextCtrl *AG6;
		wxTextCtrl *AG7;
		wxTextCtrl *AG8;
		wxTextCtrl *L7;
		wxTextCtrl *L6;
		wxTextCtrl *L5;
		wxStaticText *T5;
		wxStaticText *T6;
		wxStaticText *T7;
		wxStaticText *T8;
		wxTextCtrl *L8;
		wxTextCtrl *AM4;
		wxTextCtrl *AG4;
		wxTextCtrl *L4;
		wxStaticText *T4;
		wxTextCtrl *AM3;
		wxTextCtrl *AG3;
		wxTextCtrl *L3;
		wxStaticText *T3;
		wxStaticText *T2;
		wxTextCtrl *L2;
		wxTextCtrl *AG2;
		wxTextCtrl *AM2;
		wxTextCtrl *AM1;
		wxTextCtrl *AG1;
		wxTextCtrl *L1;
		wxStaticText *T1;
		wxScrolledWindow *WxScrolledWindow1;
		wxButton *WxButton2;
		wxButton *WxButton1;
		wxStaticText *WxStaticText7;
		wxTextCtrl *AngleMin;
		wxStaticText *WxStaticText6;
		wxTextCtrl *AngleGrad;
		wxStaticText *WxStaticText5;
		wxStaticText *WxStaticText4;
		wxTextCtrl *LengthLine;
		wxStaticText *WxStaticText3;
		wxStaticBox *WxStaticBox2;
		wxStaticText *WxStaticText2;
		wxCheckBox *EqPolygon;
		wxStaticText *WxStaticText1;
		wxComboBox *CountAngle;
		wxStaticBox *WxStaticBox1;
		wxPanel *WxPanel1;
		////GUI Control Declaration End
		
		
        int i,countAngles,numberPoint,errorNum;
		double areaPolygon,arrCoordinates[2][17],**pArrCoordinates;
        bool equilateralPolygon;
		typedef struct {
            double length;
            int angleDegree;
            int angleMinute;
            double angleDecart;
        }Point;
        typedef struct {
            wxStaticText *pText;
            wxTextCtrl *pLength;
            wxTextCtrl *pAngleDegree;
            wxTextCtrl *pAngleMinute;
        }Controls;
        Point arrPoints[17],*pArrPoints;
        Controls arrControls[17], *pArrControls;
        
         
		void WxButton1Click(wxCommandEvent& event);
		void PolygonAreaFrmActivate0(wxActivateEvent& event);
        
		
		
		
		
	private:
		//Note: if you receive any error with these enum IDs, then you need to
		//change your old form code that are based on the #define control IDs.
		//#defines may replace a numeric value for the enum names.
		//Try copy and pasting the below block in your old form header files.
		enum
		{
			////GUI Enum Control ID Start
			ID_PAINT = 1653,
			ID_OUTERROR = 1652,
			ID_WXPANEL2 = 1651,
			ID_AM13 = 1495,
			ID_AG13 = 1494,
			ID_L13 = 1493,
			ID_T13 = 1492,
			ID_T14 = 1491,
			ID_L14 = 1490,
			ID_AG14 = 1489,
			ID_AM14 = 1488,
			ID_AM15 = 1487,
			ID_AG15 = 1486,
			ID_L15 = 1485,
			ID_T15 = 1484,
			ID_L16 = 1477,
			ID_T16 = 1476,
			ID_AM12 = 1285,
			ID_AG12 = 1284,
			ID_L12 = 1283,
			ID_T12 = 1282,
			ID_AM11 = 1275,
			ID_AG11 = 1274,
			ID_L11 = 1273,
			ID_T11 = 1272,
			ID_AM10 = 1265,
			ID_AG10 = 1264,
			ID_L10 = 1263,
			ID_T10 = 1262,
			ID_AM9 = 1255,
			ID_AG9 = 1254,
			ID_L9 = 1253,
			ID_T9 = 1252,
			ID_AM5 = 1245,
			ID_AM6 = 1244,
			ID_AM7 = 1243,
			ID_AM8 = 1242,
			ID_AG5 = 1241,
			ID_AG6 = 1240,
			ID_AG7 = 1239,
			ID_AG8 = 1238,
			ID_L7 = 1237,
			ID_L6 = 1236,
			ID_L5 = 1235,
			ID_T5 = 1234,
			ID_T6 = 1233,
			ID_T7 = 1232,
			ID_T8 = 1231,
			ID_L8 = 1230,
			ID_AM4 = 1109,
			ID_AG4 = 1108,
			ID_L4 = 1107,
			ID_T4 = 1106,
			ID_AM3 = 1105,
			ID_AG3 = 1104,
			ID_L3 = 1103,
			ID_T3 = 1102,
			ID_T2 = 1073,
			ID_L2 = 1072,
			ID_AG2 = 1071,
			ID_AM2 = 1070,
			ID_AM1 = 1069,
			ID_AG1 = 1068,
			ID_L1 = 1067,
			ID_T1 = 1066,
			ID_WXSCROLLEDWINDOW1 = 1650,
			ID_WXBUTTON2 = 1649,
			ID_WXBUTTON1 = 1648,
			ID_WXSTATICTEXT7 = 1647,
			ID_ANGLEMIN = 1646,
			ID_WXSTATICTEXT6 = 1645,
			ID_ANGLEGRAD = 1644,
			ID_WXSTATICTEXT5 = 1643,
			ID_WXSTATICTEXT4 = 1642,
			ID_LENGTHLINE = 1641,
			ID_WXSTATICTEXT3 = 1640,
			ID_WXSTATICBOX2 = 1639,
			ID_WXSTATICTEXT2 = 1638,
			ID_EQPOLYGON = 1637,
			ID_WXSTATICTEXT1 = 1636,
			ID_COUNTANGLE = 1635,
			ID_WXSTATICBOX1 = 1634,
			ID_WXPANEL1 = 1496,
			////GUI Enum Control ID End
			ID_DUMMY_VALUE_ //don't remove this value unless you have other enum values
			
		};
		
	private:
		void OnClose(wxCloseEvent& event);
		void CreateGUIControls();
};

#endif
