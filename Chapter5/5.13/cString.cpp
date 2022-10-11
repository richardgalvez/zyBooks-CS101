#include <iostream>
using namespace std;

int main() {
    char userStr[20] = "1234567890123456789";   // Input string
    int i;

    // Prompt user for string input
    cout << "Enter string (<20 chars): ";
    cin >> userStr;


    // Print string
    cout << endl << userStr << endl;

    // Look for '@'
    for (i = 0; userStr[i] != '\0'; ++i) {
        if (userStr[i] == '@') {
            cout << "Found '@' ." << endl;
        }
    }
    cout << endl;

    return 0;
}