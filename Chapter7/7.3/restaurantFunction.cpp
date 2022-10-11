#include <iostream>
#include <string>
using namespace std;

class Restaurant {                              // Info about a restaurant
    public:
        void SetName (string restaurantName);
        void SetRating(int userRating);
        void Print();

    private:
        string name;
        int rating;
};