#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    int num;
    int value;
    
    cin >> num;
    
    for(int i = 0; i < num; i++){
        cin >> value;
        a.push_back(value);
    }

    int minimum, maximum;

    cin >> minimum;
    cin >> maximum;

    for(int i = 0; i < num; i++){
        if(a[i] >= minimum && a[i] <= maximum){
        cout << a[i] << " ";
        }
    }

    cout << endl;

 return 0;
}