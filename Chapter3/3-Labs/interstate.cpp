#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int highwayNumber;
    int primaryHighway;
    bool auxiliaryHighway;
    string highwayDirection;

    cin >> highwayNumber;

    // Assign direction depending if odd or even.
    if (highwayNumber % 2 == 0){        
        highwayDirection = "east/west";
    }
    else {
        highwayDirection = "north/south";
    }

    // Determine if it is primary or auxiliary. If invalid, print error.
    if ( (highwayNumber >= 100) && (highwayNumber < 1000) ){    
        auxiliaryHighway = true;
    }
    else if ( (highwayNumber >= 1) && (highwayNumber < 100) ){
        primaryHighway = highwayNumber;
        cout << "I-" << highwayNumber << " is primary, going " << highwayDirection << "." << endl;
    }
    else {
        cout << highwayNumber << " is not a valid interstate highway number." << endl;
    }

    // If auxiliary, tell what primary highway it is on. Print statement.
    if (auxiliaryHighway == true){
        primaryHighway = highwayNumber % 100;
       
        cout << "I-" << highwayNumber << " is auxiliary, serving I-" 
        << primaryHighway << ", going " << highwayDirection << "." << endl;
    }

    return 0;
}