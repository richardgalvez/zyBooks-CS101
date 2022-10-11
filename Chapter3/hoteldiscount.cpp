#include <iostream>
using namespace std;

int main() {
    int hotelRate;
    int userAge;

    hotelRate = 155;

    cout << "Welcome to Hotel Mario! Our rate is usually $155 a night but first, enter your age: ";
    cin >> userAge;

    if (userAge > 65) {
        hotelRate = hotelRate - 20;
    }

    cout << "Thanks! Your hotel rate is $" << hotelRate << " per night." << endl;

    return 0;
}