#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string userStr;
	bool inputDone = false;
	while(!inputDone) {
		bool commaCheck = false;	// Check for comma
		do {	
			cout << "Enter input string:" << endl;
			getline(cin, userStr);
			if (userStr == "q")
			{
				inputDone = true;
				break;
			}
			else {
			    for (unsigned int i = 0; i < userStr.length(); i++) {
				if (userStr[i] == ',')
					commaCheck = true;
                }
                if (!commaCheck){
				cout << "Error: No comma in string." << endl << endl;
                }
		    }
		} 
        
    while (!commaCheck);
	    if(!inputDone) {
		    string first, second;
		    istringstream stream(userStr);
		    getline(stream, first, ',');
            stream >> second;

            if (first.back() == ' ') {      // Check and erase if white space
                first.pop_back();
            }

		    cout << "First word: " << first << endl;
		    cout << "Second word: " << second << endl << endl;
	    }
	}
    
	return 0;
}