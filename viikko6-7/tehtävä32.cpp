#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
#include <fstream>
using namespace std;
//tämä oli kopoitu ja muokattu harjoitustyöstä, ei toisinpäin!!
int main() {
    vector<string> v{ "aleksi alavahtola" };
    fstream outFile("test.txt", ios::out);
        for (const auto &e : v) outFile << e << "\n";
}