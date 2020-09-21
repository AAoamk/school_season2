#include <iostream>
#include <list>
#include <iterator>
 
using namespace std;
 
void printList(list <int> x)
{
    x.sort();
    cout << "0 inserted, printing all:" << endl;
    list <int> :: iterator i;
    for(i = x.begin(); i != x.end(); i++)
        cout << "- " << *i << endl;
}
 
int main()
{
    int temp=1;
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

}
