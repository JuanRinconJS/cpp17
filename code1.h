//I get an error using a header guard.
//#ifndef CODE1_H
//#define CODE1_H

 const double TOTAL_ANGLE = 180.00; //Angles cannot exceed 180 degrees.
 double side1 {};
 double side2 {};
 double side3 {};


 //not used at the moment
 double a {};
 double b {};
 double c {}; //hypot.

 double angle1 {};
 double angle2 {};
 double angle3 {};
 double sum {};

 double trigResult {};

 bool tri {};


double perima(double, double, double);
double pytha(double, double, double);
double trig(double,double,double);
double trig2(double,double,double);
double add(double, double, double); // function prototype for add.h -- don't forget the semicolon!
int triangle(double ,double, double);
