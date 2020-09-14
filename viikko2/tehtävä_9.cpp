#include <iostream>
#include <string>
using namespace std;
bool OnkoAlkuNumeroVaiEi(int n){
   if (n <= 1)
      return false;
   if (n <= 3)
   return true;
   if (n % 2 == 0 || n % 3 == 0)
      return false;
   for (int i = 5; i * i <= n; i = i + 6)
   if (n % i == 0 || n % (i + 2) == 0)
   return false;
   return true;
}
int main() {
    int n;
    cout <<"anna testi numero: ";
    cin >> n;
    if (n>99) {
        cout<<n<<" liian iso, raja 99!!";
        exit;
    }
    else if (OnkoAlkuNumeroVaiEi(n)) {
        cout<<n<<" kyl on alkuluku!!";
    }
    else{
        cout<<n<<" ei ole alkuluku!!";
    }
return 0;

}