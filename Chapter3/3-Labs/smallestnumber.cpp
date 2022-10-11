#include <iostream>
using namespace std;

int main() {
    int value1;
    int value2;
    int value3;
    int smallestValue;

    cin >> value1;
    cin >> value2;
    cin >> value3;
    
    if (value1 < value2 && value3){
       smallestValue = value1;
    }
    else if (value2 < value1 && value3){
       smallestValue = value2;
    }
    else if (value1 == value2 == value3){
      smallestValue = value1;
    }
    else {
        smallestValue = value3;
    }

    if ( (smallestValue != value2) && (smallestValue < value3) ){
        smallestValue = value1;
    }
    else if (( smallestValue !=value3) && (smallestValue < value3))
        smallestValue = value2;
    else {
        smallestValue = value3;
    }
   
   cout << smallestValue << endl;

    return 0;
}