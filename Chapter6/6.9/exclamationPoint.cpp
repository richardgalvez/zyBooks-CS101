#include <iostream>
#include <string>
using namespace std;

void MakeSentenceExcited(string& sentenceText) {
    unsigned int i;

    for (i = 0; i < sentenceText.size(); ++i) {
        if (sentenceText.at(i) == '.') {
            sentenceText.at(i) = '!';
        }
    }
}

int main() {
    string testStr;

    getline(cin, testStr);
    MakeSentenceExcited(testStr);
    cout << testStr;

    return 0;
}