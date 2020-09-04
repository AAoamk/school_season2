#include <iostream>
#include <string>
using namespace std;

bool vertaa(int, int);

int main() {
	int x, y;
	cout << "anna kokonaisluvut erotettuna valilyonnilla: ";
	cin >> x >> y;
	if (vertaa(x, y))
		cout << "samankokoiset";
	else
		cout << "erikokoiset";

}

bool vertaa(int t, int r) {
if (t == r)
return true;
else
return false;
}
