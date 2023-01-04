#include <iostream>
#include <vector>
using namespace std;

int MAX_ELEMENTS = 20;
int GetMinimumInt(int listInts[], int numVals);

int main() {
  cin >> MAX_ELEMENTS;
  int userVals[MAX_ELEMENTS];
  int i;

  // populating the variable
  for (i = 0; i < MAX_ELEMENTS; ++i) {
    cin >> userVals[i];
  }

  // output values
  for (i = 0; i < MAX_ELEMENTS; ++i) {
    cout << userVals[i] - GetMinimumInt(userVals, MAX_ELEMENTS) << " ";
  }
  cout << endl;

  return 0;
}
int GetMinimumInt(int listInts[], int numVals) {
  int minValFun = listInts[0];  // smallest so far

  for (int i = 0; i < MAX_ELEMENTS; ++i) {
    if (listInts[i] < minValFun) {
      minValFun = listInts[i];
    }
  }
  return minValFun;
}