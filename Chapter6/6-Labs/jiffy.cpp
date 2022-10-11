#include <iostream>
#include <iomanip>
using namespace std;

double SecondsToJiffies(double userSeconds) {
    userSeconds = userSeconds * 100;

    return userSeconds;
}

int main() {
    double inputSeconds;

    cin >> inputSeconds;

    cout << fixed << setprecision(2) << SecondsToJiffies(inputSeconds) << endl;

    return 0;
}
