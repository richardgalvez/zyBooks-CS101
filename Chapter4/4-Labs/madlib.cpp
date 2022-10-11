#include <iostream>
#include <string>
using namespace std;

/*
Mad Libs are activities that have a person provide various words, which are then 
used to complete a short story in unexpected (and hopefully funny) ways.

Write a program that takes a string and an integer as input, and outputs a sentence 
using the input values as shown in the example below. The program repeats until the 
input string is quit and disregards the integer input that follows.

Ex: If the input is:
apples 5
shoes 2
quit 0

the output is:
Eating 5 apples a day keeps you happy and healthy.
Eating 2 shoes a day keeps you happy and healthy.
*/

int main() {
    string userText;
    int userNum;

    cin >> userText >> userNum;

    while (userText != "quit") {
        cout << "Eating " << userNum << " " << userText << 
        " a day keeps you happy and healthy."  << endl;

        cin >> userText >> userNum;
    }

    return 0;
}
