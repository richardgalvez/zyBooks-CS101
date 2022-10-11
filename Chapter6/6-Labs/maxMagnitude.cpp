#include <iostream>
#include <cstdlib>
using namespace std;

int MaxMagnitude (int userVal1, int userVal2) {
    int magnitudeValue;

    if (abs(userVal1) > abs(userVal2)) {
        magnitudeValue = userVal1;
    }
    else {
        magnitudeValue = userVal2;
    }

    return magnitudeValue;
}

int main() {
    int inputVal1;
    int inputVal2;

    cin >> inputVal1 >> inputVal2;

    cout << MaxMagnitude(inputVal1, inputVal2) << endl;

    return 0;
}