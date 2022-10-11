#include <iostream>
using namespace std;

int main() {
    int downPayment;
    int paymentPerMonth;
    int numMonths;
    int totalCost; // Computed total cost to be output.

    cout << "Enter down payment: ";
    cin >> downPayment;

    cout << "Enter monthly payment: ";
    cin >> paymentPerMonth;

    cout << "Enter the number of months: ";
    cin >> numMonths;

    totalCost = downPayment + (paymentPerMonth * numMonths);

    cout << "Total cost: " << totalCost << endl;

    return 0;
}