#include <iostream>
#include <cmath> // Include cmath library to get sqrt function
using namespace std;

int main() {
    double sideSquare;
    double areaSquare;

    cout << "Enter a number to square root: ";
    cin >> areaSquare;

    sideSquare = sqrt(areaSquare);

    cout << "Square root of " << areaSquare
         << " is " << sideSquare << "!" << endl;

    return 0;
}