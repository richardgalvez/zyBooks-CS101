#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    istringstream inSS;     // Input string stream
    string lineString;      // Holds input string
    string data;

    cout << "Enter a list of names seperated by spaces here: ";

    // Entire line into lineString
    getline(cin, lineString);
    inSS.str(lineString);

    while (inSS >> data) {
        cout << data << endl;
    }

    return 0;
}