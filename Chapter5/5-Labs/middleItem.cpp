#include <iostream>
#include <vector>   // Must include vector library to use vectors
using namespace std;

/*
Given a sorted list of integers, output the middle integer. Assume the number 
of integers is always odd.
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
    vector<int> intList(11);
    int userInput;
    int middleNum;
    unsigned int i;

    for (i = 0; i < intList.size(); i++){
        if (intList.at(i) > -1) {
            
        }
            cin >> intList.at(i);
        cout << intList.at(i) << " ";
    }

    cout << endl;

    return 0;
}