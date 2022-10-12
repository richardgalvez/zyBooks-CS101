#include <iostream>
#include <string>
using namespace std;

class Restaurant {                              // Info about a restaurant
    public:
        void SetName (string restaurantName);
        void SetRating(double userRating);
        void Print();
    private:
        string name;
        double rating;
};

// Sets the restaurant's name
void Restaurant::SetName(string restaurantName) {
    name = restaurantName;
}

// Sets the rating (1-5, with 5 best)
void Restaurant::SetRating(double userRating) {
    rating = userRating;
}

// Prints name and rating on one line
void Restaurant::Print() {
    cout << name << " -- " << rating << endl;
}

int main() {
    Restaurant favLunchPlace;
    Restaurant favDinnerPlace;
    
    favLunchPlace.SetName("Central Deli");
    favLunchPlace.SetRating(3.0);

    favDinnerPlace.SetName("Friends Cafe");
    favDinnerPlace.SetRating(4.5);

    cout << "My favorite restaurants are: " << endl;
    favLunchPlace.Print();
    favDinnerPlace.Print();

    return 0;
}