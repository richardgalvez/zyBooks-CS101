#include <iostream>
#include <string>   // Not built into C++ but available inn the standard library
using namespace std;

int main() {
    string wordRelative;
    string wordFood;
    string wordAdjective;
    string wordTimePeriod;

    // Get user's words
    cout << "Type input without spaces." << endl;

    cout << "Enter a kind of relative: " << endl;
    cin >> wordRelative;

    cout << "Enter a kind of food: " << endl;
    cin >> wordFood;

    cout << "Enter an adjective: " << endl;
    cin >> wordAdjective;

    cout << "Enter a time period: " << endl;
    cin >> wordTimePeriod;

    // Tell the story
    cout << endl;
    cout << "My " << wordRelative << " says eating " << wordFood << endl;
    cout << "will make me more " << wordAdjective << "," << endl;
    cout << "so now I will eat it every " << wordTimePeriod << "." << endl;

    return 0;
}