#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string object1Info = "Pen 9 4";
    string object2Info = "Notepad 15 12";
    string object3Info = "Shoes 25 24";

    istringstream objectISS(object3Info);

    string object;
    int quantity;
    int price;

    objectISS >> object >> price >> quantity;

    cout << object << " x" << quantity << endl;
    cout << "Price: " << price;

    return 0;
}