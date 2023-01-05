#include "Team.h"

void Team::SetTeamName(string name) {
    teamName = name;
}

void Team::SetTeamWins(int wins) {
    teamWins = wins;
}

void Team:: SetTeamLosses(int loss) {
    teamLosses = loss;
}

string Team::GetTeamName() {
    return teamName;
}

int Team::GetTeamWins() {
    return teamWins;
}

int Team::GetTeamLosses() {
    return teamLosses;
}

double Team::GetWinPercentage() {
    return teamWins / (double) (teamWins + teamLosses);
}