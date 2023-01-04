#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> word;
  vector<int> c;
   int s, counts = 0;
   string strng;
  cin >> s;

  for(int i = 0; i < s; ++i) { 
     cin >> strng;
     word.push_back(strng);
  }

  for(int i = 0; i < s; ++i) {
         counts = 0;
         for(int j = 0;j<word.size();j++){
       if(word[j] == word[i]){
        counts++;
       }        
     }
      c.push_back(counts);
  }

  for(int i = 0; i < s; ++i) {
      cout << word[i] << " " << c[i] << endl;
  }

  return 0;
}