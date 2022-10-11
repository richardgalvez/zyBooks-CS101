#include <iostream>
using namespace std;

int GetUserNum() {  
    cout << "FIXME: Finish GetUserNum()" << endl;
    return 0;
}

int ComputeAvg(int uNum1, int uNum2) {  
    cout << "FIXME: Finish ComputeAvg()" << endl;
    return -1;
}

int main() {
    int userNum1;
    int userNum2;
    int avgResult;

    userNum1 = GetUserNum();
    userNum2 = GetUserNum();

    avgResult = ComputeAvg(userNum1, userNum2);

    cout << "Avg: " << avgResult << endl;

    return 0;
}