#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

/*
Given a sorted list of integers, output the middle integer. 
Assume the number of integers is always odd.

Ex: If the input is:
2 3 4 8 11 -1 

(a negative indicates the end), the output is:
4

The maximum number of inputs for any test case should not exceed 9. 
If exceeded, output "Too many inputs".

Hint: First read the data into a vector. Then, based on the number of items, 
find the middle item.
*/

int main() {
    vector<int> intList(9);
    unsigned int i;
    int userInput;
    int middleNum;

    cin >> userInput;

    while ((userInput >= 0) && (i < intList.size()))
        intList.at(i) = userInput;
        cin >> userInput;
        i++;

    if (userInput >= 0) {
        cout << "Too many inputs" << endl;
    }
    else {
        middleNum = i /2;
        cout << middleNum << endl;
    }

    return 0;
}