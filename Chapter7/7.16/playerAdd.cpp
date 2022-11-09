#include <iostream>
#include <vector>
using namespace std;

// Adds playerNum to end of vector
void PlayersAdd(vector<int>& players, int playerNum) {
    players.push_back(playerNum);
}

void PlayersPrint(const vector<int>& players) {
    unsigned int i;

    for (i = 0; i < players.size(); ++i) {
        cout << " " << players.at(i) << endl;
    }
}

// Maintains vector of player numbers
int main() {
    vector<int> players;
    int playerNum;
    char userKey;

    userKey = '?';

    cout << "Commands: type in 'a' to add, 'p' to print" << endl;
    cout << "   'q' will quit" << endl;
    while (userKey != 'q') {
        cout << "Command: ";
        cin >> userKey;
        if (userKey =='a') {
            cout << " Player number: ";
            cin >> playerNum;
            PlayersAdd(players, playerNum);
        }
        else if (userKey == 'p') {
            PlayersPrint(players);
        }
    }

    return 0;
}