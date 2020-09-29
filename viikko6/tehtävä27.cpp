#include <random>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <functional>
#include <numeric>
using namespace std;

class muoto 
{

      private:
      protected:
         double a,b;
      public:

};

class suorakulmio: protected muoto 
{
public:
    suorakulmio(double ax, double bx)
    {
        a = ax, b = bx;   // ax= a, bx = b; a = ax, b = bx;
    }

    double area() const {
    return a * b;
    }
};

int main(){
suorakulmio test(4, 5);
cout << test.area();

}

