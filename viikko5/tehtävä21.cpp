#include <iostream>
#include <list>
#include <iterator>

 
using namespace std;

int main() {
string lause;
cout << "kirjoita sana tai lause palindroomi testiä varten"<<endl;
cin >> lause;


if (lause == string(lause.rbegin(), lause.rend())) {
    cout << lause << " on plaindroomi";
}
else
{
    cout << lause <<" ei ole palindroomi";
}

}