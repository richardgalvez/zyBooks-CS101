#include <iostream>
#include <string>
using namespace std;

/*
Many user-created passwords are simple and easy to guess. Write a program that 
takes a simple password and makes it stronger by replacing characters using the key 
below, and by appending "q*s" to the end of the input string.

i becomes !
a becomes @
m becomes M
B becomes 8
o becomes .

Ex: If the input is:
mypassword

the output is:
Myp@ssw.rdq*s
*/

int main() {
    string myPassword;
    int charIndex;

    getline(cin, myPassword);

    while (myPassword.find("i") != string::npos) {
        charIndex = myPassword.find("i");
        myPassword.replace(charIndex, 1, "!");
    }
    while (myPassword.find("a") != string::npos) {
        charIndex = myPassword.find("a");
        myPassword.replace(charIndex, 1, "@");
    }
    while (myPassword.find("m") != string::npos) {
        charIndex = myPassword.find("m");
        myPassword.replace(charIndex, 1, "M");
    }
    while (myPassword.find("B") != string::npos) {
        charIndex = myPassword.find("B");
        myPassword.replace(charIndex, 1, "8");
    }
    while (myPassword.find("o") != string::npos) {
        charIndex = myPassword.find("o");
        myPassword.replace(charIndex, 1, ".");
    }
    
    cout << myPassword << "q*s" << endl;

    return 0;
}