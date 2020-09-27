#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <vector>
 
using namespace std;
 
void printList(list <int> x)
{
    x.sort();
    cout << "0 inserted, printing all:" << endl;
    list <int> :: iterator i;
    for(i = x.begin(); i != x.end(); i++)
        cout << "- " << *i << endl;
}
 bool IsOdd (int i) { return ((i%2)==1); }
int main()
{
    int temp;
    list <int> numbers;
    while(temp != 0)
    {
        cout << "Insert number:" << endl;
        cin >> temp;
        if(temp != 0)
            numbers.push_back(temp);
        else {
            printList(numbers);
        }
        
    }
    int mycount = count_if (numbers.begin(), numbers.end(), IsOdd);
    cout << "list has " << mycount  << " odd values.";

}

