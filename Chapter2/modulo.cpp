#include <iostream>
using namespace std;

/*
This program tests integer division, which will not output fractions
*/

int main() {
    int math1;
    int math2;
    int math3;

    cout << "Hello, I am a ModBoddy! I can only evaluate with modulo! Enter a number: ";
    cin >> math1;
    cout << "Okay, type another number and I will solve it! Enter: ";
    cin >> math2;
    math3 = math1 % math2;
    cout << "Nice! Your answer is " <<  math3 << "!" << endl;

    return 0;
}