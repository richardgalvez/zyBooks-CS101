#include <iostream>
using namespace std;

// Function prints date in two styles (0:  American (default), 1: European)
void DatePrint(int currDay = 1, int currMonth = 1, int currYear = 2000, int printStyle = 0) {

    if (printStyle == 0) {      // American
        cout << currMonth << "/" << currDay << "/" << currYear;
    }
    else if (printStyle == 1) { // European
        cout << currDay << "/" << currMonth << "/" << currYear;
    }
    else {
        cout << "(invalid style)";
    }
}

int main() {

    // Print dates given various style settings
    DatePrint(30, 7, 2012, 0);
    cout << endl;

    DatePrint(30, 7, 2012, 1);
    cout << endl;

    DatePrint(30, 7, 2012); // Uses default value for printStyle
    cout << endl;

    DatePrint(30, 7);          // Defaults:                 year=2000, style=0
    cout << endl;
    DatePrint(30);             // Defaults:        month=1, year=2000, style=0 (strange, but valid)
    cout << endl;
    DatePrint();               // Defaults: day=1, month=1, year=2000, style=0
    cout << endl;

    return 0;
}