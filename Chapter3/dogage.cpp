#include <iostream>
using namespace std;

int main() {
    int dogAgeYears;
    int dogAgeMonths;

    cout << "Enter a dog's age (in years): ";
    cin >> dogAgeYears;

    if (dogAgeYears == 0) {
        cout << "Under a year old? Enter a dog's age in months instead: ";
        cin >> dogAgeMonths;

        switch (dogAgeMonths) {
            case 0:
            case 1:
            case 2:
                cout << "That's about 0 - 14 in human months." << endl;
                break;
            
            case 3:
            case 4:
            case 5:
            case 6:
                cout << "That's about 1 - 5 in human years." << endl;
                break;

            case 7:
            case 8:
                cout << "That's about 5 - 9 in human years." << endl;
                break;

            case 9:
            case 10:
            case 11:
            case 12:
                cout << "That's about 9 - 15 in human years." << endl;
                break;

            default:
                cout << "Invalid input..." << endl;
                break;

        }
    }
    else {
        switch (dogAgeYears){
            case 0:
                cout << "Thats 0... around 14 in human years technically." << endl;
                break;

            case 1:
                cout << "That's about 15 in human years." << endl;
                break;

            case 2:
                cout << "That's about 24 in human years." << endl;
                break;

            case 3:
             cout << "That's about 28 in human years." << endl;
                break;

            case 4:
                cout << "That's about 32 in human years." << endl;
                break;

            case 5:
                cout << "That's about 37 in human years." << endl;
                break;

            default:
                cout << "Hmm... I don't think I remmeber how old that is..." << endl;
                break;
        }
    }

    return 0;
}