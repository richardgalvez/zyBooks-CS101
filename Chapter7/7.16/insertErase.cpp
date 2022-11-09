#include <iostream>
#include <vector>
using namespace std;

int main() {
    unsigned int i;
    vector<int> vctr;

    vctr.push_back(27);
    vctr.push_back(44);
    vctr.push_back(9);
    vctr.push_back(17);
    vctr.erase(vctr.begin() + 1);
    vctr.insert(vctr.begin() + 0, 88);
    vctr.erase(vctr.begin() + 3);

    cout << "Contents: " << endl;
    for (i = 0; i < vctr.size(); ++i) {
        cout << " " << vctr.at(i) << endl;
    }
    cin >> i;
    return 0;
}