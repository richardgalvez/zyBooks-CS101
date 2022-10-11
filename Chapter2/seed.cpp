#include <iostream>
#include <cstdlib>
#include <ctime>    //Enables the use of time() function
using namespace std;

int main() {
    srand(time(0)); // Unique seed based on number of seconds since Jan 1, 1970
    cout << rand() << endl;
    cout << rand() << endl;
    cout << rand() << endl;

    cout << "(RAND_MAX: " << RAND_MAX << ")" << endl;

    return 0;
}