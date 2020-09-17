#include <iostream>
#include <string>
#include <cmath>
#include <vector>
using namespace std;



int main(){
    vector<int> stuff;

    for (int i=0; i<101; i++) {
        stuff.push_back(i);
    }
    for (int j = 0; j<100; j++) {
        cout << stuff[j] << endl;
    }
}

