#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int totalChange;
    int dollarCoins;
    int quarterCoins;
    int dimeCoins;
    int nickelCoins;
    int pennyCoins;
    
    cin >> totalChange;

    if (totalChange <= 0){
        cout << "No change" << endl;
    }

    // Use fewest amount of coins, one coin type per line.

    // If >= 100, add dollars
    if (totalChange >= 100) {
        dollarCoins = totalChange / 100;
            if (dollarCoins == 1){
                cout << dollarCoins << " Dollar" << endl;
            }
            else {
                cout << dollarCoins << " Dollars" << endl;
            }
    }

    // If >= 25, add quarters
    if (totalChange >= 25) {
        quarterCoins = totalChange / 25;
            if (quarterCoins == 1){
                cout << quarterCoins << " Quarter" << endl;
            }
            else if (quarterCoins >= 4){
                quarterCoins = 0;
            }
            else {
                cout << quarterCoins << " Quarters" << endl;
            }
    }

    // If >= 10, add dimes
    if (totalChange >= 10) {
        dimeCoins = totalChange / 10;
            if (dimeCoins == 1){
                cout << dimeCoins << " Dime" << endl;
            }
            else {
                cout << dimeCoins << " Dimes" << endl;
            }
    }

    // If >= 5, add nickels
    if (totalChange >= 5) {
        nickelCoins = totalChange / 5;
            if (nickelCoins == 1){
                cout << nickelCoins << " Nickel" << endl;
            }
            else {
                cout << nickelCoins << " Nickels" << endl;
            }
    }

    // if >= 1, add pennies
    if (totalChange >= 1) {
        pennyCoins = totalChange / 1;
            if (pennyCoins == 1){
                cout << pennyCoins << " Penny" << endl;
            }
            else {
                cout << pennyCoins << " Pennies" << endl;
            }
    }
    
    return 0;
}