#include <iostream>
#include <vector>
using namespace std;

void SwapVectorEnds(vector<int>& userNum) {
    int vectorFront;
    int vectorEnd;
    vectorFront = userNum.front();
    vectorEnd = userNum.back();

    userNum.front() = vectorEnd;
    userNum.back() = vectorFront;
}

int main() {
    vector<int> sortVector(4);
    unsigned int i;
    int userNum;

    for (i = 0; i < sortVector.size(); ++i) {
        cin >> userNum;
        sortVector.at(i) = userNum;
    }

    SwapVectorEnds(sortVector);

    for (i = 0; i < sortVector.size(); ++i) {
        cout << sortVector.at(i) << " ";
    }
    cout << endl;

    return 0;
}