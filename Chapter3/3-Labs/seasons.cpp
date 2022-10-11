#include <iostream>
#include <string>
using namespace std;

int main() {
    string month;
    int day;

    cin >> month >> day;

    if ((month == "January" && day >= 1 && day <= 31) || 
    (month == "February" && day >= 1 && day <= 29) || 
    (month == "March" && day >= 1 && day <= 19) || 
    (month == "December" && day >= 21 && day <= 30)){
        cout << "Winter" << endl;
    }
    else if ((month == "April" && day >= 1 && day <= 30) || 
    (month == "May" && day >= 1 && day <= 30) || 
    (month == "March" && day >= 20 && day <= 31) || 
    (month == "June" && day >= 1 && day <= 20)){
        cout << "Spring" << endl;
    }
    else if ((month == "July" && day >= 1 && day <= 31) || 
    (month == "August" && day >= 1 && day <= 31) || 
    (month == "June" && day >= 21 && day <= 30) || 
    (month == "September" && day >= 1 && day <= 21)){
        cout << "Summer" << endl;
    }
    else if ((month == "October" && day >= 1 && day <= 31) || 
    (month == "November" && day >= 1 && day <= 30) || 
    (month == "September" && day >= 22 && day <= 30) || 
    (month == "December" && day >= 0 && day <= 20)){
        cout << "Autumn" << endl;
    }
    else {
        cout << "Invalid" << endl;
    }

    return 0;
}