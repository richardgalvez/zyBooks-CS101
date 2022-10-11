#include <iostream>
using namespace std;

double PyramidVolume(double baseLength, double baseWidth, double pyramidHeight) {
    double baseVolume;
    double pVolume;

    baseVolume = baseLength * baseWidth;
    pVolume = baseVolume * pyramidHeight * (1.0/3.0);

    return pVolume;
}

int main() {
    double userLength;
    double userWidth;
    double userHeight;

    cin >> userLength;
    cin >> userWidth;
    cin >> userHeight;

    cout << "Volume: " << PyramidVolume(userLength, userWidth, userHeight) << endl;

    return 0;
}