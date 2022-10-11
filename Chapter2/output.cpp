#include <iostream>
using namespace std;

/*
This program tests integer division, which will not output fractions
*/

int main() {
    int a;
    int x;
    int y;

    cout << "Input a number: ";
    cin >> x;

    a = 2;

    y = a * x;
    y = y + 5;

    cout << x << " " << y << endl;

    return 0;
}