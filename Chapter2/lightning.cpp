#include <iostream>
using namespace std;

int main() {
    const double SPEED_OF_SOUND     = 761.207; // Miles/hour (sea level)
    const double SECONDS_PER_HOUR   = 360.0; // Secs/hour
    double secondsBetween;
    double timeInHours;
    double distInMiles;

    cout << "Enter seconds between lightning and thunder: ";
    cin >> secondsBetween;

    timeInHours = secondsBetween / SECONDS_PER_HOUR;
    distInMiles = SPEED_OF_SOUND * timeInHours;

    cout << "Lightning strike was approximately:\n";
    cout << distInMiles << " miles away." << endl;

    return 0;
}