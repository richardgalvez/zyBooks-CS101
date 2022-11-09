#include <iostream>
#include <vector>
using namespace std;

// Adds playerNum to the end of the vector
void PlayersAdd(vector<int>& players, int playerNum) {
    players.push_back(playerNum);
}

void PlayersPrint(const vector<int>& players) {
    unsigned int i;

    for (i = 0; i < players.size(); ++i) {
        cout << " " << players.at(i) << endl;
    }
}

// Deletes playerNum from vector
void PlayersDelete(vector<int>& players, int playerNum) {
    unsigned int i = 0;
    bool found = false;

    // Search for playerNum in vector
    while (!found && (i < players.size())) {
        if (players.at(i) == playerNum) {
            players.erase(players.begin() + i); // Delete
            found = true;
        }
        ++i;
    }
}

// Maintains vector of player numbers
int main() {
    vector<int> players;
    int playerNum;
    char userKey;

    userKey = '?';

    cout << "Commands: 'a' to add, 'p' to print, 'd' to delete." << endl;
    cout << "   Type 'q' to quit." << endl;
    while (userKey != 'q') {
        cout << "Command: ";
        cin >> userKey;
        if (userKey == 'a') {
            cout << "Enter a player number to add: ";
            cin >> playerNum;
            PlayersAdd(players, playerNum);
        }
        else if (userKey == 'p') {
            PlayersPrint(players);
        }
        else if (userKey == 'd') {
            cout << " Enter a player number to delete: ";
            cin >> playerNum;
            PlayersDelete(players, playerNum);
        }
    }

    return 0;
}