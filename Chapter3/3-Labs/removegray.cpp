#include <iostream>
using namespace std;

int main() {
    int redValue;
    int greenValue;
    int blueValue;
    int smallestValue;

    cin >> redValue;
    cin >> greenValue;
    cin >> blueValue;
    
    // Find the smallest value
    if (redValue < greenValue && blueValue){
        smallestValue = redValue;
    }
    else if (greenValue < redValue && blueValue){
        smallestValue = greenValue;
    }
    else {
        smallestValue = blueValue;
    }

   // Subract it from all three which will remove gray.
    redValue = redValue - smallestValue;
    greenValue = greenValue - smallestValue;
    blueValue = blueValue - smallestValue;
    
   // Print answers
   cout << redValue << " " << greenValue << " " << blueValue << endl;

    return 0;
}