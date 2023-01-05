#ifndef TEAMH
#define TEAMH

#include <string>
using namespace std;

class Team {
    private:
        string teamName;
        int teamWins;
        int teamLosses;

    public:
        void SetTeamName(string);
        void SetTeamWins(int);
        void SetTeamLosses(int);

        string GetTeamName();
        int GetTeamWins();
        int GetTeamLosses();
        
        double GetWinPercentage();
};

#endif