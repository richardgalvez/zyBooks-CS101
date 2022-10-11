#include <iostream>
using namespace std;

/* Converts a height in feet/inches to centimeters */
double HeightFtInToCm(int heightFt, int heightIn) {
    const double CM_PER_IN = 2.54;
    const int    IN_PER_FT = 12;
    int totIn;
    double cmVal;

    totIn = (heightFt * IN_PER_FT) + heightIn;  // Total inches
    cmVal = totIn * CM_PER_IN;                  // Convert inches to centimeters
    return cmVal;
}

int main() {
    int userFt;     // User defined feet
    int userIn;     // User defnied inches

    // Prompt user for feet/inches
    cout << "Enter feet: ";
    cin >> userFt;

    cout << "Enter inches: ";
    cin >> userIn;

    // Output the conversion result
    cout << "Centimeters: ";
    cout << HeightFtInToCm(userFt, userIn) << endl;

    return 0;
}