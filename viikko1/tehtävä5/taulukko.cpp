#include <iostream>
#include <string>
using namespace std;

int main() {
    cout <<"celsius   fahrenheit" "\n";
    for (int c = -50; c < 100; c= c+5) {
  cout << c << "       " << c*1.8+32 <<"\n";
}
}