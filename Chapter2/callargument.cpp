#include <iostream>
#include <cmath> // Include cmath library to get sqrt function
using namespace std;

int main() {
    double x;
    double y;
    double z;

    cout << "Enter value for x: ";
    cin >> x;
    
    cout << "Enter value for y: ";
    cin >> y;

    z = pow(2.0, pow(x,y));
    cout << "Your answer is " << z << "." << endl;

    return 0;
}