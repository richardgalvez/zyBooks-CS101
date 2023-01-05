#include <iostream>
#include "Triangle.h"
#include <cmath>
using namespace std;

/*
Given class Triangle (in files Triangle.h and Triangle.cpp), complete main() to
read and set the base and height of triangle1 and of triangle2, determine which 
triangle's area is larger, and output that triangle's info, making 
use of Triangle's relevant member functions.

Ex: If the input is:
3.0 4.0
4.0 5.0

where 3.0 is triangle1's base, 4.0 is triangle1's height, 4.0 is triangle2's base, 
and 5.0 is triangle2's height, the output is:
Triangle with larger area:
Base: 4.00
Height: 5.00
Area: 10.00
*/


int main(int argc, const char* argv[]) {
   Triangle triangle1;
   Triangle triangle2;

   double base1, height1, base2, height2;
   cin >> base1;
   cin >> height1;
   triangle1.SetBase(base1);
   triangle1.SetHeight(height1);

   cin >> base2;
   cin >> height2;

   triangle2.SetBase(base2);
   triangle2.SetHeight(height2);

   cout << "Triangle with larger area:" <<endl;
   
   if(triangle1.GetArea() > triangle2.GetArea()){
      triangle1.PrintInfo();
   }

   else {
      triangle2.PrintInfo();
   }

   return 0;
}