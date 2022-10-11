#include <iostream>
using namespace std;

/*
Write a program whose input is two integers, and whose output is the first integer 
and subsequent increments of 10 as long as the value is less than or equal to the 
second integer.

Ex: If the input is:
-15 30

the output is:
-15 -5 5 15 25

Ex: If the second integer is less than the first as in:
20 5

the output is:
Second integer can't be less than the first.

For coding simplicity, output a space after every integer, including the last.
*/

int main() {
    int intOne;
    int intTwo;
    int outputInt;

    cin >> intOne >> intTwo;

    if (intOne <= intTwo) {
        cout << intOne << " ";
        while (intOne < (intTwo - 6)) {
            intOne = intOne + 10;
            cout << intOne << " ";
        }
        cout << endl;
    }
    else {
        cout << "Second integer can't be less than the first." << endl;
    }

    return 0;
}