#include <iostream>
using namespace std;

class TimeHrMn {
public:
    TimeHrMn(int timeHours = 0, int timeMinutes = 0);
    void Print() const;
    TimeHrMn operator+(TimeHrMn rhs);
    TimeHrMn operator+(int rhsHours);
    TimeHrMn operator-(TimeHrMn rhs);
private:
    int hours;
    int minutes;
};

// Operands: TimeHrMn, TimeHrMn. Call this "A"
TimeHrMn TimeHrMn::operator+(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.hours     =   hours   +   rhs.hours;
    timeTotal.minutes   =   minutes +   rhs.minutes;

    return timeTotal;
}

// Operands: TimeHrMn, int. Call this "B"
TimeHrMn TimeHrMn::operator+(int rhsHours) {
    TimeHrMn timeTotal;

    timeTotal.hours = hours + rhsHours;
    timeTotal.minutes = minutes; // Stays same

    return timeTotal;
}

// CUSTOM - Operands: TimeHrMn, TimeHrMn. Call this "C"
TimeHrMn TimeHrMn::operator-(TimeHrMn rhs) {
    TimeHrMn timeTotal;

    timeTotal.hours     =   hours   -   rhs.hours;
    timeTotal.minutes   =   minutes -   rhs.minutes;
    
    return timeTotal;
}

TimeHrMn::TimeHrMn(int timeHours, int timeMinutes) {
    hours = timeHours;
    minutes = timeMinutes;

    return;
}

void TimeHrMn::Print() const {
    cout << "H: " << hours << ", " << "M: " << minutes << endl;
}

int main() {
    TimeHrMn time1(3, 22);
    TimeHrMn time2(2, 50);
    TimeHrMn time3(1, 15);
    TimeHrMn sumTime;
    TimeHrMn totalTime;
    int num;

    num = 91;

    sumTime = time1 + time2;    // Invokes "A"
    sumTime.Print();

    sumTime = time1 + 10;       // Invokes "B"
    sumTime.Print();

    totalTime = time2 - time3;
    totalTime.Print();

    cout << num + 8 << endl;    // Invokes built-in add

    // timeTot = 10 + time1;    // ERROR: No (int, TimeHrMn)

    return 0;       
}