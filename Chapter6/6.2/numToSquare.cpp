#include <iostream>
using namespace std;

int ComputeSqaure(int numToSquare) {
    return numToSquare * numToSquare;
}

int main() {
    int numSquared;
    
    numSquared = ComputeSqaure(7);
    cout << "7 squared is " << numSquared << endl;

    return 0;
}