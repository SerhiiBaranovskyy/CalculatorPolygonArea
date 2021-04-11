# CalculatorPolygonArea
Calculator of convex polygon area  (up to 17 sides) v. 1.0

CONTENTS

1. System requirements
2. About Calculator of convex polygon area (up to 17 sides)
3. User guide
4. Programmer instruction
5. About the  author

1. System requirements

Operating system: Windows.

Hardware requirements: user (programmer) requires
- RAM: 2 Mb (min);
- Hard Disc: 15 Mb (min).

2. About Calculator of convex polygon area (up to 17 sides)
The program calculates the area of a convex polygon up to 17 sides with an accuracy of 0.01%. The calculator also visualizes the construction of a polygon. To calculate the area of a polygon, enter the number of sides (angles) and alternately enter the lengths of the sides and angles between the sides, except for the last side and the last two corners.
The program also allows you to calculate the area of an equilateral polygon by entering the number of sides (angles) and the length of the side.
After entering each piece of data (the length of the side and the angle between this side and the next) is the construction of polygon lines. After entering the last portion of data, a polygon is constructed, hatched inside and the result of the area calculation is displayed in the center.
Data entry errors are displayed at the bottom of the shape rendering window.





3. User guide

a. Run file PolygonArea.exe.
b. Select the number of sides (corners) from the drop-down list.
c. Check the box if the polygon is equilateral.
d. If the polygon is equilateral, enter the side length.
e.  If the polygon is not equilateral, enter the length of the side and the angle between it and the next side.
f. Click “Add”.
Note. If incorrect data is entered, an error will be displayed.
entered, the figure will be displayed and the result of the area calculation will be displayed.g. If the polygon is equilateral, the figure will be displayed and the calculated area will be displayed.
h. If many angle is unequal you need to repeat the previous paragraph “g” until the last data is entered.
j. When the last data is 
k. If you need to enter new data - click the button “Clear”.



4. Programmer instruction

The project was written on C++.
Advantages of C++: 
Portability: C++ is one of the most used and portable to different platforms, almost any type of computer and operating system.
Brevity: code written in C++ is very short in comparison with other languages.
Modular programming: applications written on C++ can be made up of several source code files which are compiled separately and then linked together. This characteristic allows to link C++ code with the one written in  other languages (for example, Assembler).
Speed: The resulting code from a C++ compilation is very efficient due to the reduced size of the language itself.
The project used the wxDev-C++ program, which is based on wxWidgets classes.

Project consists of three classes with header files: the main class of the program PolygonAreaApp, the class of form PolygonAreaFrm, the class of drawing a figure DrawPoligon. The project also includes a form build file and a resource file.
In the main class of the program at start there is a formation of the form of the following class.
The main calculations, in addition to the display of the figure occur in the form class. Figure display - in class DrawPoligon
.

Main global variables:
int countAngles – the number of sides(angles) of the polygon;
int numberPoint – serial number of entered side;
int errorNum – the number of errors;
double areaPolygon - area of the polygon;
double arrCoordinates[2][17] – array of virtual coordinates for calculate area and draw polygon;
double **pArrCoordinates – array pointers of pointers on array of virtual coordinates;
bool equilateralPolygon – the value of the equilateral polygon;
struct Point – structure which contains length of sides and angles;
struct Controls – structure which contains pointers on text controls;
Point arrPoints[17] – array of structures Point;
Point *pArrPoints – pointer on array of structures Point;
Controls arrControls[17] – array of structures Controls;
Controls *pArrControls – pointer on array of structures Controls.

Main functions:
void CountAngleSelected(wxCommandEvent& event ) – actions are performed when selecting the number of sides (angles);
void EqPolygonClick(wxCommandEvent& event) – actions are performed when install or removing the flag of an equilateral polygon;
void VisibleTextEquilateralPolygon(bool equilateralPolygon) – establishing the visibility of the fields depending on the value of the flag of an equilateral polygon;
void ReturnOnStart() – setting values and visibility of fields in the starting position;
void ErrorOutput(int error) – decryption and output errors;
int CorrectDataVerify(int variant) – checking the data for correctness;
void InputData(int version) – data entry procedure;
void CalculationCoordinatePoint(int count) – calculation of coordinates of points on lengths of the parties and angles between them;
double CalculationArea() – calculation of area;
void TextControlsToArray() – creating an array of text controls structures;
void PolygonAreaFrmActivate(wxActivateEvent& event) – actions when activating the form;
void WxButton2Click(wxCommandEvent& event) – actions at the touch of a button “Clear”;
void WxButton1Click(wxCommandEvent& event) – actions at the touch of a button “Add”;
void buildPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area) – the calculated coordinates are scaled according to the size of the display field;
void paintPolygon(double **pArrCoordinates,int *numPoint,int *countAngles,double *area) – drawing a polygon and polygon area text;
void paintClear() – clear drawing.
                                           5. About author

This project was done by Serhii Baranovskyi – Vinnitsya IT-Academy student (group B20, April 2021).

