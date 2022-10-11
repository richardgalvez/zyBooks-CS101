#include <iostream>
using namespace std;

void SwapValues (int& userVal1, int& userVal2) {
    int tempVal1;
    int tempVal2;

    tempVal1 = userVal1;
    tempVal2 = userVal2;
    userVal1 = tempVal2;
    userVal2 = tempVal1;

    cout << userVal1 << " " << userVal2 << endl;

    return;
}

int main() {
    int inputVal1;
    int inputVal2;

    cin >> inputVal1 >> inputVal2;

    SwapValues(inputVal1, inputVal2);

    return 0;
}