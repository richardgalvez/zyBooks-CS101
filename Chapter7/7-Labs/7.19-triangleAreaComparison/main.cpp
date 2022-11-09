#include <iostream>
#include "Triangle.h"
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

   // TODO: Read and set base and height for triangle1 (use SetBase() and SetHeight())
      
   // TODO: Read and set base and height for triangle2 (use SetBase() and SetHeight())
   
   // TODO: Determine larger triangle (use GetArea())
      
   cout << "Triangle with larger area:" << endl;

   // TODO: Output larger triangle's info (use PrintInfo())
   
   return 0;
}