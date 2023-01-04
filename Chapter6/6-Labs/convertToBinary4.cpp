#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string IntToReverseBinary(int integerValue) {
 string result;
 while(integerValue > 0) {
   result += to_string(integerValue % 2);
   integerValue /= 2;
 }
return result;
}

string StringReverse(string userString)
{
 reverse(userString.begin(), userString.end());
 return userString;
}

int main() {
 int userInput;

 cin >> userInput;
 
 string reverseBinary = IntToReverseBinary(userInput);
 string binary = StringReverse(reverseBinary);
 cout << binary << endl;

 return 0;
}