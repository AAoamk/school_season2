#include <iostream>
#include <string>
using namespace std;

int chrcount(string s, char c) {
    int laskin = 0;
    for (int i = 0; i < s.size(); i++)
        if (s[i]==c)
        laskin++;
    return laskin;
}

int main() {
string x;
char y;
cout <<"kirjoita merkkijono: ";
 cin >> x;
cout <<"minka merkin haluat hakea? ";
 cin >> y;
cout << "merkkia " << y << " loytyi " << chrcount(x, y) << " kappaletta" << endl;
}