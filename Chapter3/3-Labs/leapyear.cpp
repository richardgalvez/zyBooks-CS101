#include <iostream>
using namespace std;

int main() {
    int inputYear;
    bool isLeapYear = false;
    int tellYear1;
    int tellYear2;
    int tellYear3;

    cin >> inputYear;

    tellYear1 = inputYear % 4;

    tellYear2 = inputYear % 400;

    tellYear3 = inputYear % 100;


    if (tellYear1 != 0){
        isLeapYear = false;
            if (isLeapYear == false){
                cout << inputYear << " - not a leap year" << endl;
            }
    }
    else if ((tellYear3 == 0) && (tellYear2 !=0)){
        isLeapYear = false;
            if (isLeapYear == false){
                cout << inputYear << " - not a leap year" << endl;
            }
    }
    else {
        cout << inputYear << " - leap year" << endl;
    }

    return 0;
}