#include <iostream>
using namespace std;

int main() {
   int carYear;

   cin >> carYear;

   if (carYear < 1968) {
        cout << "Probably has few safety features." << endl;
   }
   if (carYear > 1970) {
        cout << "Probably has seat belts." << endl;
   }
   if (carYear > 1992) {
        cout << "Probably has electronic stability control." << endl;
   }
   if (carYear > 2001) {
        cout << "Probably has tire-pressure monitor." << endl;
   }

   return 0;
}