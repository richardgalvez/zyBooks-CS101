#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
    public:
        int GetRating() const { return rating; }
        string GetComment() const { return comment; }

    private:
        int rating = -1;
        string comment = "NoComment";
};

class Reviews {
    public:
        void InputReviews();
        void PrintCommentsForRating(int currRating) const;
        int GetAverageRating() const;

    private:
        vector<Review> reviewList;
};

class Restaurant {
    public:
        void SetName(string restaurantName) {
            name = restaurantName;
        }
        void ReadAllReviews();
        void PrintCommentsByRating() const;

    private:
        string name;
        Reviews reviews;
};

void Restaurant::ReadAllReviews() {
    cout << "Type ratings + comments. To end: -1" << endl;
    reviews.InputReviews();
}

void Restaurant::PrintCommentsByRating() const {
    int i;

    cout << "Comments for each rating level: " << endl;
    for (i = 1; i <= 5; ++i) {
        cout << i << ":" << endl;
        reviews.PrintCommentsForRating(i);
    }
}

int main() {
    Restaurant ourPlace;
    string currName;

    cout << "Type restaurant name: " << endl;
    getline(cin, currName);
    ourPlace.SetName(currName);
    cout << endl;

    ourPlace.ReadAllReviews();
    cout << endl;

    ourPlace.PrintCommentsByRating();

    return 0;
}