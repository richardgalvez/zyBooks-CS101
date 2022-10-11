#include <iostream>
using namespace std;

int main() {
    char cityName[20] = "Forest Lake";  // Complier appends null char

    // In each cout, printing stops when reaching null char
    cout << "City: " << endl;
    cout << cityName << endl;

    return 0;
}