#include <iostream> 
using namespace std;  

int main() {     
    const int NUM_ELEMENTS = 9;     
    int userValues[NUM_ELEMENTS];     
    int num;
    int count = 0;   

    while (true) {
        cin >> num;
        if (num == -1) {
            break;
        } 
    else if (count == NUM_ELEMENTS) {
        cout << "Too many inputs" << endl;             
        return 0;         
        }         
        
        userValues[count++] = num;     
    }     
    
    cout << userValues[count / 2] << endl;
    return 0; 
}