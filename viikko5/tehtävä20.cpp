#include <iostream>
#include <list>
#include <iterator>
 
using namespace std;
 
int main() {
    int x = 35, y = 75;
    cout <<"arvo x: "<<x<<endl;
    cout <<"arvo y: "<<y<<endl;
    swap(x,y);
    cout <<"vaihdon jälkeen arvot: x= "<<x<<" y="<<y<<endl;

    float v = 5.4, b = 241.55;
    cout <<"arvo v: "<<v<<endl;
    cout <<"arvo b: "<<b<<endl;
    swap(v,b);
    cout <<"vaihdon jälkeen arvot: v= "<<v<<" b="<<b<<endl;
  
}