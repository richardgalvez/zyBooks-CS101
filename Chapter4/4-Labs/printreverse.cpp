#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

/*
Write a program that takes in a line of text as input, and outputs that line of text 
in reverse. The program repeats, ending when the user enters "Quit", "quit", or "q" 
for the line of text.

Ex: If the input is:
Hello there
Hey
quit

then the output is:
ereht olleH
yeH
*/

int main() {
    string textInput;
    int i;

    getline(cin, textInput);

    while ((textInput != "Quit") && (textInput != "quit") && (textInput != "q")) {
    reverse(textInput.begin(), textInput.end());
    cout << textInput << endl;

    getline (cin, textInput);
    }

    return 0;
}