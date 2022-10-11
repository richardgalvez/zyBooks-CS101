#include <iostream>
#include <cstdlib> // Include standard C library to use rand()
using namespace std;

int main() {
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;

    return 0;
}