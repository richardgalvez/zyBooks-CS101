#include <iostream>
using namespace std;

int main() {
    int numYears;

    cout << "Enter the number of years someone you know is married: ";
    cin >> numYears;

    if (numYears == 1) {
        cout << "One year? A strong start!" << endl;
    }
    else if (numYears == 10) {
        cout << "Ten years... Great job!" << endl;
    }
    else if (numYears == 25){
        cout << "The silver anniversary... Enjoy!!" << endl;
    }
    else if (numYears == 50){
        cout << "The golden anniversary... Wow, amazing!!!" << endl;
    }
    else {
        cout << "Still having a loving marriage!" << endl;
    }

    return 0;
}