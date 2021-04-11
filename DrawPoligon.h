#pragma once
#include "wx/wx.h"
#include "wx/sizer.h"
#include "PolygonAreaFrm.h"
#include <string>

#define SIZE_X 350
#define SIZE_Y 350
//using namespace PolygonAreaFrm;

class DrawPoligon: public wxPanel
{
    public: DrawPoligon(wxFrame* parent);
    
    
    void buildPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area);  //struct Coordinate *pArrCoordinates,int numberPoint,int countAngles
    void paintPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area);
    void paintClear();
    DECLARE_EVENT_TABLE()
};
