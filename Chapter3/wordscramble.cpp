#include <iostream>
#include <string>
using namespace std;

int main() {
    string userWord;

    cout << "Enter a 6-letter word or number sequence: ";
    cin >> userWord;

    cout << "Scrambled version: ";
    cout << userWord.at (5);
    cout << userWord.at (2);
    cout << userWord.at (0);
    cout << userWord.at (3);
    cout << userWord.at (1);
    cout << userWord.at (4);
    cout << endl;

    return 0;
}