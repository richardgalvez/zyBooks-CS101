#include <iostream>
using namespace std;

double MphAndMinutesToMiles(double mphAmount, double minTraveled) {
    double hoursTraveled;
    double milesTraveled;
    
    hoursTraveled = minTraveled / 60.0;
    milesTraveled = hoursTraveled * mphAmount;

    return milesTraveled;
}

int main() {
    double milesPerHour;
    double minutesTraveled;

    cin >> milesPerHour;
    cin >> minutesTraveled;

    cout << "Miles: " << MphAndMinutesToMiles(milesPerHour, minutesTraveled) << endl;

    return 0;
}