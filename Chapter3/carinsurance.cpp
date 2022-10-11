#include <iostream>
using namespace std;

int main() {
    int userAge;
    int insurancePrice;

    cout << "Welcome to Not-A-Ripoff Insurance! Please enter your age: ";
    cin >> userAge;

    if (userAge < 25) {
        insurancePrice = 4800;
        cout << "Great! Here's your buttfucking at $" << insurancePrice << "!" << endl;
    }
    else {
        insurancePrice = 2200;
        cout << "Great! Your price is $" << insurancePrice << "." << endl;
    }

    return 0;
}