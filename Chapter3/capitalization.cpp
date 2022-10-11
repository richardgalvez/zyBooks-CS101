#include <iostream>
#include <string>
using namespace std;

int main() {
    string userCaption;
    char lastChar;
    int lastIndex;

    cout << "Enter a caption: ";
    getline(cin, userCaption);

    lastIndex = userCaption.size() - 1;
    lastChar = userCaption.at(lastIndex);

    if ( (lastChar != '.') && (lastChar != '!') && (lastChar != '?') ) {
        userCaption.append(".");
    }

    cout << "New: ";
    cout << userCaption << endl;

    return 0;
}