#include <iostream>
using namespace std;

#include "SoccerTeam.h"

void SoccerTeam::SetHeadCoach(TeamPerson teamPerson) {
    headCoach = teamPerson;
}

void SoccerTeam::SetAssistantCoach(TeamPerson teamPerson) {
    assistantCoach = teamPerson;
}

TeamPerson SoccerTeam::GetHeadCoach() const {
    return headCoach;
}

TeamPerson SoccerTeam::GetAssistantCoach() const {
    return assistantCoach;
}

void SoccerTeam::Print() const {
    cout << "HEAD COACH: " << endl;
    headCoach.Print();
    cout << endl;

    cout << "ASSISTANT COACH: " << endl;
    assistantCoach.Print();
    cout << endl;
}