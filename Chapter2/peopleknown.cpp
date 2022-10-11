#include <iostream>
using namespace std;

int main() {
    int yourFriends;
    int totalFriends;

    cout << "Enter the number of people you know: ";
    cin >> yourFriends;
    totalFriends = yourFriends;
    cout << " You know " << yourFriends << " people!\n";
    totalFriends = totalFriends * yourFriends;
    cout << " Those people know " << totalFriends << " people. \n";
    totalFriends = totalFriends * yourFriends;
    cout << " And they know " << totalFriends << " people.\n\n";

    return 0;
}