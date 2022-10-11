#include <iostream>
using namespace std;

int main() {
    int math1;
    int math2;
    int math3;

    cout << "Hello, I am a MultiplyBuddy! I can only do multiplication! Enter a number: ";
    cin >> math1;
    cout << "Okay, type another number and I will multiply it! Enter: ";
    cin >> math2;
    math3 = math1 * math2;
    cout << "Nice! Your answer is " <<  math3 << "!" << endl;

    return 0;
}