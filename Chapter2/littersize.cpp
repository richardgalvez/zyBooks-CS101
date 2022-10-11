#include <iostream>
using namespace std;

int main() {
    int litterSize;
    int yearlyLitters;
    int annualMice;

    litterSize      = 3; // Low end of litter size range
    yearlyLitters   = 5; // Low end of litters per year

    cout << "In a year, one female mouse may give birth to as little as ";
    annualMice = litterSize * yearlyLitters;
    cout << annualMice << " mice,\n";

    litterSize      = 14; // High end
    yearlyLitters   = 10; // High end

    cout << "and up to as much as ";
    annualMice = litterSize * yearlyLitters;
    cout << annualMice << " mice." << endl;

    return 0;
}