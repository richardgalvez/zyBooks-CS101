#include <iostream>
using namespace std;

int main() {
    double celsiusValue;
    double fahrenheitValue;
    char userChar;

    celsiusValue = 0.0;
    userChar = 'y';

    while (userChar == 'y') {
        fahrenheitValue = (celsiusValue * 9.0 / 5.0) + 32.0;

        cout << celsiusValue << "C is ";
        cout << fahrenheitValue << "F" << endl;

        cout << "Type y to increase by 5 and continue, submit any other key to exit: ";
        cin >> userChar;

        celsiusValue = celsiusValue + 5;
        cout << endl; 
    }
    
    cout << "Goodbye!" << endl;
 
    return 0;
}