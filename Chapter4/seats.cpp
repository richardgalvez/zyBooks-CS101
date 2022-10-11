#include <iostream>
using namespace std;

int main() {
    int numRows;
    int numColumns;
    int currentRow;
    int currentColumn;
    char currentColumnLetter;

    cin >> numRows;
    cin >> numColumns;

    currentRow = 1;

    for (int i = 0; i < numRows; i++){
        char currentColumnLetter = 'A';
        for (int j = 0; j < numColumns; j++) {
            cout << currentRow << currentColumnLetter << " ";
            currentColumnLetter++;
        }
        currentRow++;
    }

    cout << endl;

    return 0;
}