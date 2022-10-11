#include <iostream>
using namespace std;

int main() {
    int birthMonth;
    int birthYear;

    cout << "What is your birth month? ";
    cin >> birthMonth;
    cout << "What is your birth year? ";
    cin >> birthYear;
    cout << "Your birth month and year is " << birthMonth << "-" << birthYear << "." << endl;

    return 0;
}