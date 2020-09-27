#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
using namespace std;

int main() {
  vector<float> x;
  float input;
    cout<<"enter your numbers, enter a letter to quit"<<endl;
        while(cin>>input) {
        x.push_back(input);
    }
    auto n = x.size(); 
    float average = 0.0f;
    if ( n != 0) {
     average = accumulate( x.begin(), x.end(), 0.0) / n; 
}
    cout<<"average is: "<<average;
}

