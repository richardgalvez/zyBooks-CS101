#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    const int NUM_COUNTRIES = 5;                    // Num countries supported
    vector<string>  countryNames(NUM_COUNTRIES);    // Country names
    vector<int>     countryMins(NUM_COUNTRIES);     // Minutes of TV watched daily
    string userCountry;                             // User-defined country
    bool foundCountry = false;                      // Match to country supported
    unsigned int i;                                 // Loop index

    // Fill vector contents
    countryNames.at(0) = "China";
    countryMins.at(0) = 155;

    countryNames.at(1) = "Sweden";
    countryMins.at(1) = 154;

    countryNames.at(2) = "Russia";
    countryMins.at(2) = 246;

    countryNames.at(3) = "UK";
    countryMins.at(3) = 216;

    countryNames.at(4) = "USA";
    countryMins.at(4) = 274;

    // Prompt user for country name
    cout << "Enter country name: ";
    cin >> userCountry;

    // Find country's index and average TV time
    foundCountry = false;
    for (i = 0; (i < countryNames.size()) && (!foundCountry); ++i) {
        if (countryNames.at(i) == userCountry) {
            foundCountry = true;
            cout << "People in " << userCountry << " watch ";
            cout << countryMins.at(i) << " minutes of TV daily." << endl;
        }
    }
    if (!foundCountry) {
        cout << "Country not found. Why not try one of these below?" << endl;
        cout << "China, Sweden, Russia, UK, and USA." << endl;
    }

    return 0;
}