#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char userName[15] = "Alan Turing";
    int i;

    cout << "Before: " << userName << endl;

    for (i = 0; i < strlen(userName); ++i) {
        if (userName[i] == ' ') {
            userName[i] = '_';
        }
    }
    cout << "After:  " << userName << endl;

    return 0;
}