#include <iostream>
#include <iomanip>
using namespace std;

double DrivingCost(double drivenMiles, double milesPerGallon, double dollarsPerGallon) {
    double costToDrive;

    costToDrive = (drivenMiles / milesPerGallon) * dollarsPerGallon;

    return costToDrive;
}

int main() {
    double inputMilesPerGallon;
    double inputDollarsPerGallon;

    cin >> inputMilesPerGallon >> inputDollarsPerGallon;

    cout << fixed << setprecision(2);

    cout << DrivingCost(10, inputMilesPerGallon, inputDollarsPerGallon) << " "
    << DrivingCost(50, inputMilesPerGallon, inputDollarsPerGallon) << " "
    << DrivingCost(400, inputMilesPerGallon, inputDollarsPerGallon) << endl;

    return 0;
}