///-----------------------------------------------------------------
///
/// @file      PolygonAreaFrm.cpp
/// @author    Serhii
/// Created:   14.03.2021 1:15:16
/// @section   DESCRIPTION
///            PolygonAreaFrm class implementation
///
///------------------------------------------------------------------

#include "PolygonAreaFrm.h"

//Do not add custom headers between
//Header Include Start and Header Include End
//wxDev-C++ designer will remove them
////Header Include Start
////Header Include End

//----------------------------------------------------------------------------
// PolygonAreaFrm
//----------------------------------------------------------------------------
//Add Custom Events only in the appropriate block.
//Code added in other places will be removed by wxDev-C++
////Event Table Start
BEGIN_EVENT_TABLE(PolygonAreaFrm,wxFrame)
	////Manual Code Start
	////Manual Code End
	
	EVT_CLOSE(PolygonAreaFrm::OnClose)
	EVT_ACTIVATE(PolygonAreaFrm::PolygonAreaFrmActivate0)
	EVT_BUTTON(ID_WXBUTTON2,PolygonAreaFrm::WxButton2Click)
	EVT_BUTTON(ID_WXBUTTON1,PolygonAreaFrm::WxButton1Click)
	EVT_CHECKBOX(ID_EQPOLYGON,PolygonAreaFrm::EqPolygonClick)
	EVT_COMBOBOX(ID_COUNTANGLE,PolygonAreaFrm::CountAngleSelected)
END_EVENT_TABLE()
////Event Table End



PolygonAreaFrm::PolygonAreaFrm(wxWindow *parent, wxWindowID id, const wxString &title, const wxPoint &position, const wxSize& size, long style)
: wxFrame(parent, id, title, position, size, style)
{
	CreateGUIControls();
}

PolygonAreaFrm::~PolygonAreaFrm()
{
}



void PolygonAreaFrm::CreateGUIControls()
{
	//Do not add custom code between
	//GUI Items Creation Start and GUI Items Creation End
	//wxDev-C++ designer will remove them.
	//Add the custom code before or after the blocks
	////GUI Items Creation Start

	WxPanel1 = new wxPanel(this, ID_WXPANEL1, wxPoint(-1, 0), wxSize(275, 462));

	WxStaticBox1 = new wxStaticBox(WxPanel1, ID_WXSTATICBOX1, _("Налаштування"), wxPoint(9, 7), wxSize(257, 76));

	wxArrayString arrayStringFor_CountAngle;
	CountAngle = new wxComboBox(WxPanel1, ID_COUNTANGLE, _(""), wxPoint(217, 25), wxSize(41, 23), arrayStringFor_CountAngle, 0, wxDefaultValidator, _("CountAngle"));

	WxStaticText1 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT1, _("Кількість сторін багатокутника"), wxPoint(27, 29), wxDefaultSize, 0, _("WxStaticText1"));

	EqPolygon = new wxCheckBox(WxPanel1, ID_EQPOLYGON, _(""), wxPoint(228, 56), wxSize(17, 16), 0, wxDefaultValidator, _("EqPolygon"));

	WxStaticText2 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT2, _("Рівносторонній багатокутник"), wxPoint(28, 56), wxDefaultSize, 0, _("WxStaticText2"));

	WxStaticBox2 = new wxStaticBox(WxPanel1, ID_WXSTATICBOX2, _("Вершини багатокутника"), wxPoint(9, 87), wxSize(256, 358));

	WxStaticText3 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT3, _("Довжина сторони"), wxPoint(27, 109), wxDefaultSize, 0, _("WxStaticText3"));

	LengthLine = new wxTextCtrl(WxPanel1, ID_LENGTHLINE, _(""), wxPoint(134, 109), wxSize(50, 19), wxTE_RIGHT, wxTextValidator(wxFILTER_NUMERIC, NULL), _("LengthLine"));

	WxStaticText4 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT4, _("у.о."), wxPoint(194, 110), wxDefaultSize, 0, _("WxStaticText4"));

	WxStaticText5 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT5, _("Кут між сторонами"), wxPoint(27, 136), wxDefaultSize, 0, _("WxStaticText5"));

	AngleGrad = new wxTextCtrl(WxPanel1, ID_ANGLEGRAD, _(""), wxPoint(142, 135), wxSize(32, 19), wxTE_RIGHT, wxTextValidator(wxFILTER_NUMERIC, NULL), _("AngleGrad"));
	AngleGrad->SetMaxLength(3);

	WxStaticText6 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT6, _("о"), wxPoint(178, 129), wxDefaultSize, 0, _("WxStaticText6"));

	AngleMin = new wxTextCtrl(WxPanel1, ID_ANGLEMIN, _("0"), wxPoint(190, 135), wxSize(29, 19), wxTE_RIGHT, wxTextValidator(wxFILTER_NUMERIC, NULL), _("AngleMin"));
	AngleMin->SetMaxLength(2);

	WxStaticText7 = new wxStaticText(WxPanel1, ID_WXSTATICTEXT7, _("'"), wxPoint(224, 131), wxDefaultSize, 0, _("WxStaticText7"));

	WxButton1 = new wxButton(WxPanel1, ID_WXBUTTON1, _("Додати"), wxPoint(27, 160), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton1"));

	WxButton2 = new wxButton(WxPanel1, ID_WXBUTTON2, _("Очистити"), wxPoint(172, 160), wxSize(75, 25), 0, wxDefaultValidator, _("WxButton2"));

	WxScrolledWindow1 = new wxScrolledWindow(WxPanel1, ID_WXSCROLLEDWINDOW1, wxPoint(24, 193), wxSize(228, 241));
	WxScrolledWindow1->SetForegroundColour(wxColour(0,0,0));

	T1 = new wxStaticText(WxScrolledWindow1, ID_T1, _("1"), wxPoint(9, 12), wxDefaultSize, 0, _("T1"));

	L1 = new wxTextCtrl(WxScrolledWindow1, ID_L1, _(""), wxPoint(32, 11), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L1"));

	AG1 = new wxTextCtrl(WxScrolledWindow1, ID_AG1, _(""), wxPoint(115, 11), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG1"));

	AM1 = new wxTextCtrl(WxScrolledWindow1, ID_AM1, _(""), wxPoint(163, 11), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM1"));

	AM2 = new wxTextCtrl(WxScrolledWindow1, ID_AM2, _(""), wxPoint(163, 32), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM2"));

	AG2 = new wxTextCtrl(WxScrolledWindow1, ID_AG2, _(""), wxPoint(115, 32), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG2"));

	L2 = new wxTextCtrl(WxScrolledWindow1, ID_L2, _(""), wxPoint(32, 32), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L2"));

	T2 = new wxStaticText(WxScrolledWindow1, ID_T2, _("2"), wxPoint(9, 33), wxDefaultSize, 0, _("T2"));

	T3 = new wxStaticText(WxScrolledWindow1, ID_T3, _("3"), wxPoint(9, 54), wxDefaultSize, 0, _("T3"));

	L3 = new wxTextCtrl(WxScrolledWindow1, ID_L3, _(""), wxPoint(32, 53), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L3"));

	AG3 = new wxTextCtrl(WxScrolledWindow1, ID_AG3, _(""), wxPoint(115, 53), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG3"));

	AM3 = new wxTextCtrl(WxScrolledWindow1, ID_AM3, _(""), wxPoint(163, 53), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM3"));

	T4 = new wxStaticText(WxScrolledWindow1, ID_T4, _("4"), wxPoint(9, 75), wxDefaultSize, 0, _("T4"));

	L4 = new wxTextCtrl(WxScrolledWindow1, ID_L4, _(""), wxPoint(32, 74), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L4"));

	AG4 = new wxTextCtrl(WxScrolledWindow1, ID_AG4, _(""), wxPoint(115, 74), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG4"));

	AM4 = new wxTextCtrl(WxScrolledWindow1, ID_AM4, _(""), wxPoint(163, 74), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM4"));

	L8 = new wxTextCtrl(WxScrolledWindow1, ID_L8, _(""), wxPoint(32, 158), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L8"));

	T8 = new wxStaticText(WxScrolledWindow1, ID_T8, _("8"), wxPoint(9, 159), wxDefaultSize, 0, _("T8"));

	T7 = new wxStaticText(WxScrolledWindow1, ID_T7, _("7"), wxPoint(9, 138), wxDefaultSize, 0, _("T7"));

	T6 = new wxStaticText(WxScrolledWindow1, ID_T6, _("6"), wxPoint(9, 117), wxDefaultSize, 0, _("T6"));

	T5 = new wxStaticText(WxScrolledWindow1, ID_T5, _("5"), wxPoint(9, 96), wxDefaultSize, 0, _("T5"));

	L5 = new wxTextCtrl(WxScrolledWindow1, ID_L5, _(""), wxPoint(32, 95), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L5"));

	L6 = new wxTextCtrl(WxScrolledWindow1, ID_L6, _(""), wxPoint(32, 116), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L6"));

	L7 = new wxTextCtrl(WxScrolledWindow1, ID_L7, _(""), wxPoint(32, 137), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L7"));

	AG8 = new wxTextCtrl(WxScrolledWindow1, ID_AG8, _(""), wxPoint(115, 158), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG8"));

	AG7 = new wxTextCtrl(WxScrolledWindow1, ID_AG7, _(""), wxPoint(115, 137), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG7"));

	AG6 = new wxTextCtrl(WxScrolledWindow1, ID_AG6, _(""), wxPoint(115, 116), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG6"));

	AG5 = new wxTextCtrl(WxScrolledWindow1, ID_AG5, _(""), wxPoint(115, 95), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG5"));

	AM8 = new wxTextCtrl(WxScrolledWindow1, ID_AM8, _(""), wxPoint(163, 158), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM8"));

	AM7 = new wxTextCtrl(WxScrolledWindow1, ID_AM7, _(""), wxPoint(163, 137), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM7"));

	AM6 = new wxTextCtrl(WxScrolledWindow1, ID_AM6, _(""), wxPoint(163, 116), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM6"));

	AM5 = new wxTextCtrl(WxScrolledWindow1, ID_AM5, _(""), wxPoint(163, 95), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM5"));

	T9 = new wxStaticText(WxScrolledWindow1, ID_T9, _("9"), wxPoint(9, 180), wxDefaultSize, 0, _("T9"));

	L9 = new wxTextCtrl(WxScrolledWindow1, ID_L9, _(""), wxPoint(32, 179), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L9"));

	AG9 = new wxTextCtrl(WxScrolledWindow1, ID_AG9, _(""), wxPoint(115, 179), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG9"));

	AM9 = new wxTextCtrl(WxScrolledWindow1, ID_AM9, _(""), wxPoint(163, 179), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM9"));

	T10 = new wxStaticText(WxScrolledWindow1, ID_T10, _("10"), wxPoint(9, 201), wxDefaultSize, 0, _("T10"));

	L10 = new wxTextCtrl(WxScrolledWindow1, ID_L10, _(""), wxPoint(32, 200), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L10"));

	AG10 = new wxTextCtrl(WxScrolledWindow1, ID_AG10, _(""), wxPoint(115, 200), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG10"));

	AM10 = new wxTextCtrl(WxScrolledWindow1, ID_AM10, _(""), wxPoint(163, 200), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM10"));

	T11 = new wxStaticText(WxScrolledWindow1, ID_T11, _("11"), wxPoint(9, 222), wxDefaultSize, 0, _("T11"));

	L11 = new wxTextCtrl(WxScrolledWindow1, ID_L11, _(""), wxPoint(32, 221), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L11"));

	AG11 = new wxTextCtrl(WxScrolledWindow1, ID_AG11, _(""), wxPoint(115, 221), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG11"));

	AM11 = new wxTextCtrl(WxScrolledWindow1, ID_AM11, _(""), wxPoint(163, 221), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM11"));

	T12 = new wxStaticText(WxScrolledWindow1, ID_T12, _("12"), wxPoint(9, 243), wxDefaultSize, 0, _("T12"));

	L12 = new wxTextCtrl(WxScrolledWindow1, ID_L12, _(""), wxPoint(32, 242), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L12"));

	AG12 = new wxTextCtrl(WxScrolledWindow1, ID_AG12, _(""), wxPoint(115, 242), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG12"));

	AM12 = new wxTextCtrl(WxScrolledWindow1, ID_AM12, _(""), wxPoint(163, 242), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM12"));

	T16 = new wxStaticText(WxScrolledWindow1, ID_T16, _("16"), wxPoint(9, 327), wxDefaultSize, 0, _("T16"));

	L16 = new wxTextCtrl(WxScrolledWindow1, ID_L16, _(""), wxPoint(32, 326), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L16"));

	T15 = new wxStaticText(WxScrolledWindow1, ID_T15, _("15"), wxPoint(9, 306), wxDefaultSize, 0, _("T15"));

	L15 = new wxTextCtrl(WxScrolledWindow1, ID_L15, _(""), wxPoint(32, 305), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L15"));

	AG15 = new wxTextCtrl(WxScrolledWindow1, ID_AG15, _(""), wxPoint(115, 305), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG15"));

	AM15 = new wxTextCtrl(WxScrolledWindow1, ID_AM15, _(""), wxPoint(163, 305), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM15"));

	AM14 = new wxTextCtrl(WxScrolledWindow1, ID_AM14, _(""), wxPoint(163, 284), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM14"));

	AG14 = new wxTextCtrl(WxScrolledWindow1, ID_AG14, _(""), wxPoint(115, 284), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG14"));

	L14 = new wxTextCtrl(WxScrolledWindow1, ID_L14, _(""), wxPoint(32, 284), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L14"));

	T14 = new wxStaticText(WxScrolledWindow1, ID_T14, _("14"), wxPoint(9, 285), wxDefaultSize, 0, _("T14"));

	T13 = new wxStaticText(WxScrolledWindow1, ID_T13, _("13"), wxPoint(9, 264), wxDefaultSize, 0, _("T13"));

	L13 = new wxTextCtrl(WxScrolledWindow1, ID_L13, _(""), wxPoint(32, 263), wxSize(50, 19), wxTE_RIGHT, wxDefaultValidator, _("L13"));

	AG13 = new wxTextCtrl(WxScrolledWindow1, ID_AG13, _(""), wxPoint(115, 263), wxSize(32, 19), wxTE_RIGHT, wxDefaultValidator, _("AG13"));

	AM13 = new wxTextCtrl(WxScrolledWindow1, ID_AM13, _(""), wxPoint(163, 263), wxSize(29, 19), wxTE_RIGHT, wxDefaultValidator, _("AM13"));

	WxPanel2 = new wxPanel(this, ID_WXPANEL2, wxPoint(274, 432), wxSize(410, 30));

	OutError = new wxTextCtrl(WxPanel2, ID_OUTERROR, _(""), wxPoint(8, 4), wxSize(393, 21), wxTE_LEFT, wxDefaultValidator, _("OutError"));
	OutError->Enable(false);
	OutError->SetBackgroundColour(wxSystemSettings::GetColour(wxSYS_COLOUR_3DFACE));

	Paint = new wxPanel(this, ID_PAINT, wxPoint(272, 0), wxSize(410, 430), wxNO_BORDER);

	SetTitle(_("Площа багатокутника"));
	SetIcon(wxNullIcon);
	SetSize(8,8,694,496);
	Center();
	
	////GUI Items Creation End
      
	for(i=3;i<18;i++){
        CountAngle->Append(wxString::Format(wxT("%d"),i));         //формування списку Комбо-боксу   
    }
	equilateralPolygon=EqPolygon->GetValue();                                            //перевірка значення прапорця   
	
	pArrCoordinates=(double**)malloc(sizeof(**pArrCoordinates*2));                 //фомування масиву покажчиків на масив координат   
    *pArrCoordinates=&arrCoordinates[0][0];
    *(pArrCoordinates+1)=&arrCoordinates[1][0];
    countAngles=-1;
	numberPoint=1;
	pArrPoints=&arrPoints[0];                                                     //ініціалізація покажчика на структуру Point   
	
    TextControlsToArray();                                                          //створення масиву структур полів введених даних
    pArrControls=&arrControls[0];
	DrawPoligon *paint=(DrawPoligon *)Paint;                                    //створення екземпляру paint    
	
    ReturnOnStart();                                                                 //очищеня даних (виведеня в дефолт)
	
}

void PolygonAreaFrm::OnClose(wxCloseEvent& event)                             //подія при закритті
{
	Destroy();
}

/*
 * CountAngleSelected
 */
void PolygonAreaFrm::CountAngleSelected(wxCommandEvent& event )               //подія при вибору кількості кутів
{
	ReturnOnStart();
    countAngles=3+CountAngle->GetSelection();
    VisibleTextEquilateralPolygon(equilateralPolygon);
    DrawPoligon *paint=(DrawPoligon *)Paint;
    paint->paintClear();
}

 /* EqPolygonClick
 */
void PolygonAreaFrm::EqPolygonClick(wxCommandEvent& event)                    //подія при змінні зачення прапорця
{
	equilateralPolygon=EqPolygon->GetValue();
	ReturnOnStart();
    VisibleTextEquilateralPolygon(equilateralPolygon);
	DrawPoligon *paint=(DrawPoligon *)Paint;
    paint->paintClear();
}

void PolygonAreaFrm::VisibleTextEquilateralPolygon(bool equilateralPolygon)                              //процедура встановлення видимості полів
{                                                                               //при зміні значення прапорця               
    if(equilateralPolygon){
        WxScrolledWindow1->Show(false);
        WxStaticText5->Show(false);
        AngleGrad->Show(false);
        WxStaticText6->Show(false);
        AngleMin->Show(false);
        WxStaticText7->Show(false);
    }
    else {
        WxScrolledWindow1->Show(true);
        WxStaticText5->Show(true);
        AngleGrad->Show(true);
        WxStaticText6->Show(true);
        AngleMin->Show(true);
        WxStaticText7->Show(true);
    }
           
}

void PolygonAreaFrm::ReturnOnStart()                                               //процедура очищення значення та 
{                                                                               //встановлення видимості за замовчуванням
   	OutError->Clear();
    numberPoint=1;
   int i;
   for(i=0;i<17;i++){
        arrPoints[i].length=0.0;
        arrPoints[i].angleDegree=0;
        arrPoints[i].angleMinute=0;
        arrPoints[i].angleDecart=0.0;    
        arrCoordinates[0][i]=0.0;
        arrCoordinates[1][i]=0.0;    
    }
	pArrPoints->angleDegree=180;
    for(i=1;i<16;i++){
     ((pArrControls+i)->pText)->Show(false);
     ((pArrControls+i)->pLength)->Show(false);
     ((pArrControls+i)->pAngleDegree)->Show(false);
     ((pArrControls+i)->pAngleMinute)->Show(false);

    }
    ((pArrControls+16)->pText)->Show(false);
    ((pArrControls+16)->pLength)->Show(false);
    WxStaticText5->Show(true);
    AngleGrad->Show(true);
    WxStaticText6->Show(true);
    AngleMin->Show(true);
    WxStaticText7->Show(true);
    LengthLine->Clear();
    AngleGrad->Clear();
    AngleMin->SetValue(wxT("0"));
    WxButton1->Enable(true); 
}

void PolygonAreaFrm::InputData(int version)                                   //процедура введення даних з форми в масив
{
    if(version==0){                                                             //введення значень з кутом
        double temp;
        (pArrPoints+numberPoint)->length=wxAtof(LengthLine->GetValue());         //запис в масив структур
        (pArrPoints+numberPoint)->angleDegree=wxAtoi(AngleGrad->GetValue());
        (pArrPoints+numberPoint)->angleMinute=wxAtoi(AngleMin->GetValue());
        (pArrPoints+numberPoint)->angleDecart=(double)((pArrPoints+numberPoint-1)->angleDecart)+180.0-(double)((pArrPoints+numberPoint)->angleDegree)-(double)((pArrPoints+numberPoint)->angleMinute)/60.0;

        ((pArrControls+numberPoint)->pText)->Show(true);                        //встановлення видимості відповідних полів
        ((pArrControls+numberPoint)->pLength)->Show(true);
        ((pArrControls+numberPoint)->pAngleDegree)->Show(true);
        ((pArrControls+numberPoint)->pAngleMinute)->Show(true);
                                                                                //встановлення значення в списов введених даних
        ((pArrControls+numberPoint)->pLength)->SetValue(wxString::Format(wxT("%.2f"),(pArrPoints+numberPoint)->length));
        ((pArrControls+numberPoint)->pAngleDegree)->SetValue(wxString::Format(wxT("%d"),(pArrPoints+numberPoint)->angleDegree));
        ((pArrControls+numberPoint)->pAngleMinute)->SetValue(wxString::Format(wxT("%d"),(pArrPoints+numberPoint)->angleMinute));

        LengthLine->Clear();                                                    //очищення полів введення
        AngleGrad->Clear();
        AngleMin->SetValue(wxT("0"));
        
        if(numberPoint>11){                                                     //керування прокруткою
            WxScrolledWindow1->SetScrollRate(0,5);
            WxScrolledWindow1->SetVirtualSize(wxSize(228,(241+(numberPoint-11)*21)));
            WxScrolledWindow1->Scroll(0,(241+(numberPoint-11)*21));
        }
    }
    if(version==1){                                                             //введення даних без кута
        (pArrPoints+numberPoint)->length=wxAtof(LengthLine->GetValue());         //запис в масив структур
        (pArrPoints+numberPoint)->angleDecart=((pArrPoints+numberPoint-1)->angleDecart)+180.0-((pArrPoints+numberPoint)->angleDegree)-(((pArrPoints+numberPoint)->angleMinute))/60.0;
        
        ((pArrControls+numberPoint)->pText)->Show(true);                        //встановлення видимості відповідних полів
        ((pArrControls+numberPoint)->pLength)->Show(true);
                                                                                //встановлення значення в списов введених даних
        ((pArrControls+numberPoint)->pLength)->SetValue(wxString::Format(wxT("%.2f"),(pArrPoints+numberPoint)->length));

        LengthLine->Clear();                                                    //очищення полів введення
        WxButton1->Enable(false);
        if(numberPoint>11){                                                     //керування прокруткою
            WxScrolledWindow1->SetScrollRate(0,5);
            WxScrolledWindow1->SetVirtualSize(wxSize(228,(241+(numberPoint-11)*21)));
            WxScrolledWindow1->Scroll(0,(241+(numberPoint-11)*21));
        }
    } 
}

void PolygonAreaFrm::CalculationCoordinatePoint(int count)                    //процедура розрахунку координат точки
{
    arrCoordinates[0][count]=arrCoordinates[0][count-1]+((pArrPoints+count)->length)*cos(((pArrPoints+count-1)->angleDecart)*PI/180.0);
	arrCoordinates[1][count]=arrCoordinates[1][count-1]+((pArrPoints+count)->length)*sin(((pArrPoints+count-1)->angleDecart)*PI/180.0);
}

double PolygonAreaFrm::CalculationArea()                                    //функція розрахунку площі
{
    double vectorCCW=0, vectorCW=0;
	int i;
	for(i=0;i<countAngles-1;i++){
		vectorCCW+=arrCoordinates[0][i]*arrCoordinates[1][i+1];
		vectorCW+=arrCoordinates[0][i+1]*arrCoordinates[1][i];
	}
	return (vectorCCW-vectorCW)/2.0;
}

/*
 * WxButton2Click
 */
void PolygonAreaFrm::WxButton2Click(wxCommandEvent& event)                    //обробка події натискання кнопки "Очистити"
{
    DrawPoligon *paint=(DrawPoligon *)Paint;
    paint->paintClear();
    ReturnOnStart();
    VisibleTextEquilateralPolygon(equilateralPolygon);
}

/*
 * WxButton1Click
 */
void PolygonAreaFrm::WxButton1Click(wxCommandEvent& event)                    //обробка події натискання кнопки "Додати"
{
    OutError->Clear();
    if(!equilateralPolygon){
        if(numberPoint==countAngles-1){                                         //введення довжини і кута
            if((errorNum=CorrectDataVerify(1))==0){
                InputData(1);
                CalculationCoordinatePoint(numberPoint);
                areaPolygon=CalculationArea();
                if(numberPoint>=1){
                    DrawPoligon *paint=(DrawPoligon *)Paint;
                    paint->buildPolygon(pArrCoordinates,&numberPoint,&countAngles,&areaPolygon);
                }
            }
        }
        if(numberPoint<countAngles-1){                                          //введення тільки довжини
            if((errorNum=CorrectDataVerify(0))==0){
                InputData(0);
                CalculationCoordinatePoint(numberPoint);
                if(numberPoint>=1){
                    DrawPoligon *paint=(DrawPoligon *)Paint;
                    paint->buildPolygon(pArrCoordinates,&numberPoint,&countAngles,&areaPolygon);
                }            
            numberPoint++;
                        
               if(numberPoint==countAngles-1){                                  //встановлення видимості перед введенням останнього
                    WxStaticText5->Show(false);                                 //поля 
                    WxStaticText6->Show(false);
                    WxStaticText7->Show(false);
                    AngleGrad->Show(false);
                    AngleMin->Show(false);
               }
            }
        }
        if(numberPoint>countAngles-1){
            errorNum=CorrectDataVerify(0);
        }
    }
    if(equilateralPolygon){                                                              //введення даних і розрахунок
        if((errorNum=CorrectDataVerify(1))==0){                                 //при рівносторонньому багатокутнику
            int i; 
            double angle,angDeg,angMin;
            angle=180.0*(countAngles-2)/countAngles;
            angMin=60.0*modf(angle,&angDeg);
            numberPoint=countAngles-1;
            for(i=1;i<countAngles-1;i++){
                (pArrPoints+i)->length=wxAtof(LengthLine->GetValue());
                (pArrPoints+i)->angleDegree=angDeg;
                (pArrPoints+i)->angleMinute=angMin;
                (pArrPoints+i)->angleDecart=(double)((pArrPoints+i-1)->angleDecart)+180.0-(double)((pArrPoints+i)->angleDegree)-((double)((pArrPoints+i)->angleMinute))/60.0;
                CalculationCoordinatePoint(i);                
            }
            (pArrPoints+countAngles-1)->length=wxAtof(LengthLine->GetValue());
            (pArrPoints+countAngles-1)->angleDecart=(double)((pArrPoints+countAngles-2)->angleDecart)+180.0-(double)((pArrPoints+countAngles-1)->angleDegree)-((double)((pArrPoints+countAngles-1)->angleMinute))/60.0;
            CalculationCoordinatePoint(countAngles-1);
            areaPolygon=CalculationArea();
            WxButton1->Enable(false);
            if(numberPoint>1){
                    DrawPoligon *paint=(DrawPoligon *)Paint;
                    paint->buildPolygon(pArrCoordinates,&numberPoint,&countAngles,&areaPolygon);
            }
        }
    }
    ErrorOutput(errorNum);                                                      //виведення помилок
     
   
    
}
void PolygonAreaFrm::ErrorOutput(int error)                                   //процедура виведення помилок
{
    if(error!=0){                                                            
        char str[100],errorStr[6];
        sprintf(str,"Error(%05d):",error);
        sprintf(errorStr,"%05d\0",error);
        if(errorStr[0]=='1'){
            strcat(str,"Null Data error; ");
        }
        else{
            if(errorStr[1]=='1'){
                strcat(str,"Incorrect data; ");
            }
            else{
                if(errorStr[2]=='1') strcat(str,"Range Length Error; ");
                if(errorStr[3]=='1') strcat(str,"Range AngleDeg Error; ");
                if(errorStr[4]=='1') strcat(str,"Range AngleMin Error");
            }
        }
        OutError->SetValue(wxString::Format(wxT("%s"),str));
    }
}

int PolygonAreaFrm::CorrectDataVerify(int variant)                            //функція перевірки коректності даних
{                                                                               //та виведенння коду помилки
    using namespace std;
    wxString length, angDeg, angMin;
    int error=0;
    length=LengthLine->GetValue();
    if(variant==0){
        angDeg=AngleGrad->GetValue();
        angMin=AngleMin->GetValue();
    }
    if(variant==1){
        angDeg=(wxT("10"));
        angMin=(wxT("10"));
    }
    if(countAngles==-1||length[0]=='\0'||angDeg[0]=='\0'){
        error+=10000;  //Null Data error
    }
    if(wxAtof(length)==0.0||wxAtoi(angDeg)==0||(wxAtoi(angMin)==0&&wxStrcmp_String(angMin,wxT("0"))!=0)){
        error+=1000;           //Incorrect data
    }
    if(wxAtof(length)<=0){
        error+=100;                                              //Range Length Error
    }
    if(wxAtoi(angDeg)<=0||wxAtoi(angDeg)>=180){
        error+=10;                            //Range AngleDeg Error
    }
    if(wxAtoi(angMin)<0||wxAtoi(angMin)>=60){
        error+=1;                               //Range AngleMin Error
    }
    return error;                               
}



void PolygonAreaFrm::TextControlsToArray()                                        //процедура формування масиву структур
{                                                                               //з покажчиків на поля списку
    arrControls[1].pText=T1;   arrControls[1].pLength=L1;   arrControls[1].pAngleDegree=AG1;   arrControls[1].pAngleMinute=AM1;
    arrControls[2].pText=T2;   arrControls[2].pLength=L2;   arrControls[2].pAngleDegree=AG2;   arrControls[2].pAngleMinute=AM2;
    arrControls[3].pText=T3;   arrControls[3].pLength=L3;   arrControls[3].pAngleDegree=AG3;   arrControls[3].pAngleMinute=AM3;
    arrControls[4].pText=T4;   arrControls[4].pLength=L4;   arrControls[4].pAngleDegree=AG4;   arrControls[4].pAngleMinute=AM4;
    arrControls[5].pText=T5;   arrControls[5].pLength=L5;   arrControls[5].pAngleDegree=AG5;   arrControls[5].pAngleMinute=AM5;
    arrControls[6].pText=T6;   arrControls[6].pLength=L6;   arrControls[6].pAngleDegree=AG6;   arrControls[6].pAngleMinute=AM6;
    arrControls[7].pText=T7;   arrControls[7].pLength=L7;   arrControls[7].pAngleDegree=AG7;   arrControls[7].pAngleMinute=AM7;
    arrControls[8].pText=T8;   arrControls[8].pLength=L8;   arrControls[8].pAngleDegree=AG8;   arrControls[8].pAngleMinute=AM8;
    arrControls[9].pText=T9;   arrControls[9].pLength=L9;   arrControls[9].pAngleDegree=AG9;   arrControls[9].pAngleMinute=AM9;
    arrControls[10].pText=T10; arrControls[10].pLength=L10; arrControls[10].pAngleDegree=AG10; arrControls[10].pAngleMinute=AM10;
    arrControls[11].pText=T11; arrControls[11].pLength=L11; arrControls[11].pAngleDegree=AG11; arrControls[11].pAngleMinute=AM11;
    arrControls[12].pText=T12; arrControls[12].pLength=L12; arrControls[12].pAngleDegree=AG12; arrControls[12].pAngleMinute=AM12;
    arrControls[13].pText=T13; arrControls[13].pLength=L13; arrControls[13].pAngleDegree=AG13; arrControls[13].pAngleMinute=AM13;
    arrControls[14].pText=T14; arrControls[14].pLength=L14; arrControls[14].pAngleDegree=AG14; arrControls[14].pAngleMinute=AM14;
    arrControls[15].pText=T15; arrControls[15].pLength=L15; arrControls[15].pAngleDegree=AG15; arrControls[15].pAngleMinute=AM15;
    arrControls[16].pText=T16; arrControls[16].pLength=L16;
    
}

/*
 * PolygonAreaFrmActivate0
 */
void PolygonAreaFrm::PolygonAreaFrmActivate0(wxActivateEvent& event)
{
    if(numberPoint>1){
                    DrawPoligon *paint=(DrawPoligon *)Paint;
                    paint->buildPolygon(pArrCoordinates,&numberPoint,&countAngles,&areaPolygon);
            }
	// insert your code here
}
