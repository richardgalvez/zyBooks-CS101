#include <iostream>
#include <string>
using namespace std;

int main() {
    string userName;
    string greetingText;
    int itemIndex;

    itemIndex = 0;

    cout << "Enter name: ";
    getline (cin, userName);

    // Combine strings using +
    greetingText = "Hello " + userName;

    // Append a period (could have used +)
    greetingText.push_back('.'); // '' not ""
    cout << greetingText << endl;

    // Insert Mr/Mrs before user's name
    greetingText.insert(6, "Mr/Ms ");
    cout << greetingText << endl;

    // Replace occurence of "Darn" by "@$#"
    if (greetingText.find("Darn") != string::npos) { // Found
        itemIndex = static_cast<int>(greetingText.find("Darn"));
        greetingText.replace(itemIndex, 4, "@$#");
    }
    cout << greetingText << endl;

    return 0;
}