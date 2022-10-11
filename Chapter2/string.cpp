#include <iostream>
#include <string>   // Not built into C++ but available inn the standard library
using namespace std;

int main() {
    string sentenceSubject;
    string sentenceVerb;
    string sentenceObject = "an apple";

    sentenceSubject = "boy";
    sentenceVerb = "ate";

    cout << "A ";
    cout << sentenceSubject << " ";
    cout << sentenceVerb << " ";
    cout << sentenceObject << "." << endl;

    return 0;
}