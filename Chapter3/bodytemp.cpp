#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double bodyTemp;

    cout << "Enter body tempurature in Fahrenheit: ";
    cin >> bodyTemp;

    if (fabs(bodyTemp - 98.6) < 0.0001){
        cout << "Temperature is exactly normal!" << endl;
    }
    else if (bodyTemp > 98.6){
        cout << "Tempurature is above normal... Feeling any symptoms?" << endl;
    }
    else {
        cout << "Tempurature is below normal... You alive?" << endl;
    }

    return 0;
}