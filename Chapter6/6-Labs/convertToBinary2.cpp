#include <iostream>
#include <string>
using namespace std;

/* UNFINSHED */ 

string IntToReverseBinary(int integerValue) {
    int inputValue;
    string returnValue;

    while(integerValue > 0) {
        integerValue = integerValue % 2;
        integerValue = integerValue / 2;
    }

    inputValue = integerValue;
    returnValue = to_string(integerValue);
    returnValue.erase(0,1);

    return returnValue;
}

string StringReverse(string userString) {
    string binaryString;

    binaryString = userString;

    int n = binaryString.length();

    for (int i = 0; i < n / 2; i++){
        swap(binaryString.at(i), binaryString.at (n - i - 1));
    }

    return binaryString;
}

int main() {
    int userValue;
    string reversedBinary;

    cin >> userValue;

    reversedBinary = IntToReverseBinary(userValue);

    cout << reversedBinary;

    cout << StringReverse(reversedBinary) << endl;
      
    return 0;
}