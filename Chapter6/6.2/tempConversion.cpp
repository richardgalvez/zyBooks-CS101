#include <iostream>
using namespace std;

double ConvertToF(double cTemp) {
    double finalTemp;

    finalTemp = (cTemp * 1.8) + 32;
    return finalTemp;
}


int main() {
    double tempF;
    double tempC;

    cout << "Enter temperature in Celsius: ";
    cin >> tempC;

    tempF = ConvertToF(tempC);

    cout << "Fahrenheit: " << tempF << endl;

    return 0;
}
