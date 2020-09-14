#include <iostream>
#include <string>
using namespace std;

int main() {
    string nimet;
    cout << "mikä on nimesi?";
    getline (cin, nimet);
    string ika;
    cout << "ja monikomuotias olet?";
    getline (cin, ika);
    cout << "olet "<< nimet <<", "<< ika << " vuotias" << ".\n";
}