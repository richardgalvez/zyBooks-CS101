#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Review {
    public:
        void SetRatingAndComment(int revRating, string revComment) {
            rating = revRating;
            comment = revComment;
        }
        int GetRating() const { return rating; }
        string GetComment() const { return comment; }

    private:
        int rating = -1;
        string comment = "NoComment";
};

int main() {
    vector<Review> reviewList;
    Review currReview;
    int currRating;
    string currComment;
    unsigned int i;

    cout << "Type rating + comments! To end, type: -1" << endl;
    cin >> currRating;
    while (currRating >= 0) {
        getline(cin, currComment);  // Gets rest of line
        currReview.SetRatingAndComment(currRating, currComment);
        reviewList.push_back(currReview);
        cin >> currRating;
    }

    // Output all comments for given rating
    cout << endl << "Type a rating! To end, type: -1" << endl;
    cin >> currRating;
    while (currRating != -1) {
        for (i = 0; i < reviewList.size(); ++i) {
            currReview = reviewList.at(i);
            if (currRating == currReview.GetRating()) {
                cout << currReview.GetComment() << endl;
            }
        }
        cin >> currRating;
    }

    return 0;
}