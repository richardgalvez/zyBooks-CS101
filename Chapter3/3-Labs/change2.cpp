#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

void ExactChange(int userTotal, vector<int>& coinVals);
const int PENNIES_IN_DOLLAR = 100;
const int PENNIES_IN_QUARTER = 25;
const int PENNIES_IN_DIME = 10;
const int PENNIES_IN_NICKEL = 5;

int main() {
   int userTotal;
   cin >> userTotal;
        
   if (userTotal == 0) {
      cout << "No change" << endl;
   }
   else {
      vector<int> coinVals;
      ExactChange(userTotal, coinVals);

      if (coinVals[0] > 0) {
         cout << coinVals[0];
         if (coinVals[0] > 1) {
            cout << " Dollars" << endl;
         } else {
            cout << " Dollar" << endl;
         }
      }

      if (coinVals[1] > 0) {
         cout << coinVals[1];
         if (coinVals[1] > 1) {
            cout << " Quarters" << endl;
         } else {
            cout << " Quarter" << endl;
         }
      }

      if (coinVals.at(2) > 0) {
         cout << coinVals[2];
         if (coinVals[2] > 1) {
            cout << " Dimes" << endl;
         }else {
            cout << " Dime" << endl;
         }
      }

      if (coinVals[3] > 0) {
         cout << coinVals[3];
         if (coinVals[3] > 1) {
            cout << " Nickels" << endl;
         }else {
            cout << " Nickel" << endl;
         }
      }

      if (coinVals[4] > 0) {
         cout << coinVals[4];
         if (coinVals[4] > 1) {
            cout << " Pennies" << endl;
         }else {
            cout << " Penny" << endl;
         }
      }
   }

   return 0;
}

void ExactChange(int userTotal, vector<int>& coinVals) {    
    int dollars = userTotal / PENNIES_IN_DOLLAR;
    userTotal %= PENNIES_IN_DOLLAR;
    int quarters = userTotal / PENNIES_IN_QUARTER;
    userTotal %= PENNIES_IN_QUARTER;
    int dimes = userTotal / PENNIES_IN_DIME;
    userTotal %= PENNIES_IN_DIME;
    int nickels = userTotal / PENNIES_IN_NICKEL;
    userTotal %= PENNIES_IN_NICKEL;
    int pennies = userTotal;
    
    coinVals.resize(5);
    coinVals[0] = dollars;
    coinVals[1] = quarters;
    coinVals[2] = dimes;
    coinVals[3] = nickels;
    coinVals[4] = pennies;
}