#include <iostream>
using namespace std;

int main() {
    int startNumber;
    int lastNumber;
    int i;

    cin >> startNumber;
    cin >> lastNumber;
   
    for (i = startNumber; i <= lastNumber; ++i){
        cout << i << " ";
    }

   return 0;
}