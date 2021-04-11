#include "DrawPoligon.h"



BEGIN_EVENT_TABLE(DrawPoligon,wxPanel)
//    EVT_PAINT(DrawPoligon::paintEvent)
END_EVENT_TABLE()

DrawPoligon::DrawPoligon(wxFrame* parent) : wxPanel(parent) {}

void DrawPoligon::buildPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area) //процедура маштабування малюнку
{
    
   double arrCoordinatesRes[2][17],**pArrCoordinatesRes;
   double minX,minY,maxX,maxY,kResize,deltaX,deltaY;
    int i;
    pArrCoordinatesRes=(double**)malloc(sizeof(**pArrCoordinatesRes*2));
    *pArrCoordinatesRes=&arrCoordinatesRes[0][0];
    *(pArrCoordinatesRes+1)=&arrCoordinatesRes[1][0];
    minX=**pArrCoordinates;
    maxX=**pArrCoordinates;
    minY=**(pArrCoordinates+1);
    maxY=**(pArrCoordinates+1);
    for(i=0;i<=*numPoint;i++){
        if(minX>(*(*(pArrCoordinates)+i)))minX=(*(*(pArrCoordinates)+i));
        if(maxX<(*(*(pArrCoordinates)+i)))maxX=(*(*(pArrCoordinates)+i));
        if(minY>(*(*(pArrCoordinates+1)+i)))minY=(*(*(pArrCoordinates+1)+i));
        if(maxY<(*(*(pArrCoordinates+1)+i)))maxY=(*(*(pArrCoordinates+1)+i));
    }
    
    if(SIZE_X/(maxX-minX)<SIZE_Y/(maxY-minY))
        kResize=SIZE_X/(maxX-minX);
    else kResize=SIZE_Y/(maxY-minY);
    for(i=0;i<*numPoint+1;i++){
        arrCoordinatesRes[0][i]=(410-SIZE_X)/2+((*(*(pArrCoordinates)+i))-minX)*kResize;
        arrCoordinatesRes[1][i]=(430-SIZE_Y)/2+((*(*(pArrCoordinates+1)+i))-minY)*kResize;
    }
    paintPolygon(pArrCoordinatesRes,numPoint,countAngles,area);
 
}

void DrawPoligon::paintPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area)    //процедура виведення малюнка
{
    int i;
    wxClientDC dc(this);
    dc.Clear();
    wxPen pen(wxT("BLUE"),2,wxSOLID);
    dc.SetPen(pen);
    if(*numPoint!=*countAngles-1){                                              //виведення ліній
        wxPoint lines[*countAngles];
        for(i=0;i<=*numPoint;i++){
            (lines+i)->x=*(*pArrCoordinates+i);
            (lines+i)->y=(int)(*(*(pArrCoordinates+1)+i));
        }
        dc.DrawLines(*numPoint+1,lines);
    }
    else{                                                                       //виведення багатокутника
        wxBrush brush (wxT("GREY"),wxBRUSHSTYLE_BDIAGONAL_HATCH);
        dc.SetBrush(brush);
        wxPoint polygon[*countAngles];
        for(i=0;i<*countAngles;i++){
            (polygon+i)->x=*(*pArrCoordinates+i);
            (polygon+i)->y=*(*(pArrCoordinates+1)+i);
        }
        dc.DrawPolygon(*countAngles,polygon);
                                                                                //виведення площі багатокутника
        wxFont font(20,wxFONTFAMILY_ROMAN ,wxFONTSTYLE_NORMAL ,wxFONTWEIGHT_BOLD,false,wxT("area"),wxFONTENCODING_DEFAULT );
        dc.SetFont(font);
        wxSize sizeText = GetTextExtent(wxString::Format(wxT("S=%.2f"))); 
        dc.DrawText(wxString::Format(wxT("S=%.2f"),*area),SIZE_X/2-(sizeText.GetWidth()),SIZE_Y/2);
    
    
    }
}
void DrawPoligon::paintClear()                                                  //процедура очищення поля
{
    wxClientDC dc(this);
    dc.Clear();
}

