#include <iostream>
#include <vector>
using namespace std;

int main() {
    const int SCORES_SIZE = 4;
    vector<int> oldScores(SCORES_SIZE);
    vector<int> newScores(SCORES_SIZE);
    unsigned int i;

    for (i = 0; i < oldScores.size(); ++i) {
        cin >> oldScores.at(i);
    }

    newScores = oldScores;

    for (i = 0; i < newScores.size() - 1; ++i) {
        newScores.at(i) = newScores.at(i + 1);
    }
    newScores.at(3) = oldScores.at(0);

    for (i = 0; i < newScores.size(); ++i) {
        cout << newScores.at(i) << " ";
    }
    cout << endl;

    return 0;
}