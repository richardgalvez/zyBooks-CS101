#include <iostream>
#include <ios>
#include <iomanip>
using namespace std;

int main() {
    double outsideTemperature;

    cin >> outsideTemperature;

    if (outsideTemperature < 100) {
        cout << setprecision(4) << outsideTemperature << endl;
    }
    else {
        cout << setprecision(5) << outsideTemperature << endl;
        }

   return 0;
}