#include <iostream>
using namespace std;

int main() {
    int numSales;
    int employeeBonus;

    cout << "Enter the number of sales made: ";
    cin >> numSales;

    if (numSales == 0) {
        employeeBonus = 0;
        cout << employeeBonus << endl;
    }
    else if (numSales == 1) {
        employeeBonus = 2;
        cout << employeeBonus << endl;
    }
    else if (numSales == 2){
        employeeBonus = 5;
        cout << employeeBonus << endl;
    }
    else {
        employeeBonus = 10;
        cout << "Wow you deserve this! " << employeeBonus << endl;
    }

    return 0;
}