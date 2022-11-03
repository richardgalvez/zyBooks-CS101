#include <iostream>
using namespace std;

class GamePoints {
    public:
        GamePoints();
        void Start() const;

   private:
        int teamDolphins;
        int teamWolves;
};

GamePoints::GamePoints() : teamDolphins(0), teamWolves(0) {

}

void GamePoints::Start() const {
    cout << "Game started: Dolphins " << teamDolphins << " - " << teamWolves << " Wolves" << endl;
}

int main() {
    GamePoints myGame;

    myGame.Start();

    return 0;
}