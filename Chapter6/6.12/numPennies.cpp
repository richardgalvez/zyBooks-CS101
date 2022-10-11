#include <iostream>
using namespace std;

int NumberOfPennies(int dollarPennies, int leftPennies = 0) {
    int totPennies;

    totPennies = dollarPennies * 100;
    totPennies = totPennies + leftPennies;

    return totPennies;
}

int main() {
   cout << NumberOfPennies(5, 6) << endl; // Should print 506
   cout << NumberOfPennies(4) << endl;    // Should print 400
   return 0;
}