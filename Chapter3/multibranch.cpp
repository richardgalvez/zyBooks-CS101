#include <iostream>
using namespace std;

int main() {
    int userVal;
    int numItems;

    cout << "Enter a number for userVal: ";
    cin >> userVal;

    switch (userVal) {
        case 1:
            numItems = 5;
            break;
        
        case 3:
            numItems = 12;
            break;

        case 4:
            numItems = 99;
            break;

        default:
            numItems = 55;
            break;
    }

    cout << "Your numItems is: " << numItems << endl;

    return 0;
}