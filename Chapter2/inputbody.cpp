#include <iostream>
using namespace std;

int main() {
    char bodyChar;
    char headChar;

    cout << "Type two characters: ";
    cin >> bodyChar;
    cin >> headChar;

    // Output arrow body then head

    cout << bodyChar << bodyChar << bodyChar << headChar << endl;

    return 0;
}