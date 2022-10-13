#include <iostream>
#include <string>
using namespace std;

class Restaurant {                              // Info about a restaurant
    public:
        void SetName(string restaurantName) {   // Sets the restaurant's name
            name = restaurantName;
        }
        void SetRating(int userRating) {        // Sets the rating (1-5, with 5 as the best)
            rating = userRating;
        }
        void Print();                           // Prints name and rating on one line

    private:
        string name;
        int rating;
};

// Prints name and rating in one line
void Restaurant::Print() {
    cout << name << " -- " << rating << endl;
}

int main() {
    Restaurant favLunchPlace;
    Restaurant favDinnerPlace;

    favLunchPlace.SetName("Central Deli 2");
    favLunchPlace.SetRating(3);

    favDinnerPlace.SetName("The Normal Cafe");
    favDinnerPlace.SetRating(4);

    cout << "My favorite restaurants: " << endl;
    favLunchPlace.Print();
    favDinnerPlace.Print();

    return 0;
}