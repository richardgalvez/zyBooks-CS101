#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> intList(3);

    intList.at(0) = 3;
    intList.at(1) = 6;
    intList.at(2) = 8;

    intList.at(0) = intList.at(0) + intList.at(1);
    intList.at(2) = intList.at(0) + intList.at(1);

    cout << intList.at(0) << " " << intList.at(1) << endl;

    return 0;
}