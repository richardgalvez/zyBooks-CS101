#include <iostream>
#include <string>
using namespace std;

void GetUserInfo(int& userAge, string& userName) {
    cout << "Enter your age: " << endl;
    cin >> userAge;
    cout << "Enter your name: " << endl;
    cin >> userName;
}

int main() {
    int userAge;
    string userName;

    userAge = 0;
    userName = " ";
   
    GetUserInfo(userAge, userName);

    cout << userName << " is " << userAge << " years old." << endl;

    return 0;
}