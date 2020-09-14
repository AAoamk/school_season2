#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "c -> f vai f - > c ?" "\n";
    string tila;
    cout << "anna lahtoarvon kirjain, c tai f" "\n";
    getline (cin, tila);
    cout << "valitsit " << tila << "\n";
    if (tila == "c") {
        int heat1;
        cout << "lampotilasi celsiuksina?";
        cin >> heat1;
        int cel;
        cel = heat1*1.8+32;
        cout << cel;
    }
    else {
        int heat2;
        cout << "lampotilasi fahrenheitteina";
        cin >> heat2;
        int fah;
        fah = heat2/1.8-32;
        cout << fah;
        //testing git
    }
}
