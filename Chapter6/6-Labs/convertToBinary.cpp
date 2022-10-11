#include <iostream>
#include <string>
using namespace std;

string IntToReverseBinary(int integerValue) {
    string stringInteger;

    while (integerValue > 0) {
        cout << integerValue % 2;
        integerValue = integerValue / 2;
    }

    stringInteger = to_string(integerValue);
    stringInteger.erase(0,1);

    return stringInteger;
}

string StringReverse(string userString) {
    string reversedString;
    int n = userString.length();

    for (int i = 0; i < n / 2; i++){
        swap(userString[i], userString[n - i - 1]);
    }

    reversedString = userString;

    return reversedString;
}

int main() {
    int userInteger;
    string binaryString;

    cin >> userInteger;

    binaryString = IntToReverseBinary(userInteger);

    binaryString = StringReverse(binaryString);

    cout << binaryString << endl;

    return 0;
}