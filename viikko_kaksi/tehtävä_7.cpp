#include <iostream>
#include <string>
using namespace std;

int summa(int* t, int N)
{
    int temp;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += t[i];
    }
    cout << "summa " << sum;
return sum;
}


int main() {
    int vali, lista[] = { 1, 2, 3, 4, 5, 1, 8, 9, 2, 12 };
    cout << "montako numeroa?";
    cin >> vali;
    summa(lista, vali);

}
