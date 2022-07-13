/*


The program will tell the user if the info entered is a triangle
S1: Define the variables[done]
S2: angles have to add to 180[done]
S3: implement methods for finding missing angles and sides.[done]
S4: Implement basic Calc to find sides and angles of non-right triangles.


// area of a right triangle is (a*b/2)

ALL FILES HAVE TO BE IN THE SAME DIR IN ORDER FOR THE PROGRAM TO WORK
*/
#include "code1.h" // Insert contents of add.h at this point.  Note use of double quotes here.
#include <iostream>
#include<iomanip>

int main()
{

std::cout <<"The result will be the perimeter, missing side and, missing angle\n\n\n";


std::cout << "Enter the sides of the triangle\n";
std::cout << "If there is an unknown side, press Enter 0\n\n";
std::cout << "A Opp: ";
std::cin >> side1;
std::cout << "B Adj: ";
std::cin >> side2;
std::cout << "C Hyp: ";
std::cin >> side3;

std::cout << "The missing side is: " << pytha(side1,side2,side3) << "\n";
std::cout << "The missing angle is: " << trig(side1,side2,side3) << " RADS" <<"\n";


    return 0;
}
