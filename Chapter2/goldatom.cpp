#include <iostream>
using namespace std;

int main() {
    double avogradosNumber = 6.02e23; // Aproxomation of atoms per mole
    double gramsPerMoleGold = 196.9665;
    double gramsGold;
    double atomsGold;

    cout << "Enter grams of gold: ";
    cin >> gramsGold;

    atomsGold = gramsGold / gramsPerMoleGold * avogradosNumber;

    cout << gramsGold << " grams of gold contains ";
    cout << atomsGold << " atoms!" << endl;

    return 0;
}