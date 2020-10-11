#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
#include <fstream>
using namespace std;

int main(){
    fstream file ("test.txt", ios::in);

    string test;
    getline(file, test);
    cout << test <<endl;
    return 0;
}