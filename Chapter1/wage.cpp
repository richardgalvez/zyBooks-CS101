#include <iostream>
using namespace std;

int main() {
    int wage;

    cout << "What is your hourly wage? ";
    cin >> wage;

    cout << "Based on your hourly wage, your salary would be ";
    cout << wage * 40 * 50;
    cout << " dollars!" << endl;

    return 0;
}