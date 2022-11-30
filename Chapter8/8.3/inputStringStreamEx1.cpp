#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string objectInfo = "Headphones 14 19";
    istringstream objectISS(objectInfo);
    string object;
    int quantity;
    int price;

    objectISS >> object >> price >> quantity;

    cout << object << " x" << quantity << endl;
    cout << "Price: " << price;

    return 0;
}