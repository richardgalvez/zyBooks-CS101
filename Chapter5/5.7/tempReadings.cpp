#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int NUM_ELEMENTS = 3;
    vector<int> tempReadings(NUM_ELEMENTS);
    int newValue;
    unsigned int i;

    for (i = 0; i < tempReadings.size(); ++i) {
        cin >> tempReadings.at(i);
    }

    cin >> newValue;

    tempReadings.push_back(newValue);

    for (i = 0; i < tempReadings.size(); ++i) {
        cout << tempReadings.at(i) << " ";
    }
    cout << endl;

    return 0;
}