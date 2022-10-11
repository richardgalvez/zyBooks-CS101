#include <iostream>
using namespace std;

int main() {
    int userAge;
    int insurancePrice;

    cout << "Welcome back to Not-A-Ripoff Insurance! Please enter your age: ";
    cin >> userAge;

    if (userAge < 16) {
        cout << "Nice try 3 babies in a trench coat, you're too young." << endl;
        insurancePrice = 0;
    }
    else if (userAge < 25) {
        insurancePrice = 4800;
    }
    else if (userAge < 40) {
        insurancePrice = 2350;
    }
    else {
        insurancePrice = 2100; 
    }

    cout << "Annual price will be: $" << insurancePrice << endl;

    return 0;
}