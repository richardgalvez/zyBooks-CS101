#include <iostream>
#include <string>
using namespace std;

int main() {
    string userWord = "Buck";
    int replaceIndex;

    cout << "Enter an index (0-3): ";
    cin >> replaceIndex;

    userWord.at(replaceIndex) = 'F';

    cout << "Updated string: ";
    cout << userWord << endl;

    return 0;
}