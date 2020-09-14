#include <iostream>
#include <string>
using namespace std;

int main() {
    string nimet;
    cout << "mikä on nimesi?";
    getline (cin, nimet);
    int ika;
    cout << "ja monikomuotias olet?";
    cin >> ika;
    cout << "olet "<< nimet <<", "<< ika << " vuotias" << ".\n";

    if (ika > 68) {
    cout << "olet eläkelainen";
    } 
    else if (ika < 18) {
    cout << "olet alaikäinen";
    }
    else {
    cout << "olet tyoikainen";
    }
}
