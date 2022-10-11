#include <iostream>
#include <string>
using namespace std;

/*
Given a line of text as input, output the number of characters excluding 
spaces, periods, or commas.

Ex: If the input is:
Listen, Mr. Jones, calm down.

the output is:
21

Note: Account for all characters that aren't spaces, 
periods, or commas (Ex: "r", "2", "!").
*/

int main() {
    string userText;
    int inputCount;
    int charFound;

    getline(cin, userText);

    inputCount = 0;

    if ((userText != ",") ){
        for (int i = 1; i <= userText.size(); i++) {
            if ((userText[i] != 32) && (userText[i] != 44) && (userText[i] != 46)) {
                inputCount++;
            }
        }
    }
    else (inputCount = 0);


    cout << inputCount << endl;

    return 0;
}