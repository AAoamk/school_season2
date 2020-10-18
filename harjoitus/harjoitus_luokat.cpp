/*
Itse tehty luokka ja olio
Luokan määrittely

Luokassa oltava yksityisiä ja julkisia jäseniä

Luokasta instantioitu vähintään yksi olio,
joka käyttää luokan tarjoamia palveluja

Luokasta on periytetty toinen luokka,
joka perii luokan ominaisuudet ja
lisää siihen jotain uusia ominaisuuksia
*/

#include <iostream>
using namespace std;
//Itse tehty luokka ja olio
//Luokan määrittely
class moottori
{
private:
    double sylinteri;
protected:
public:
//Operaattorien ylikuormaus
    moottori(int cc) {
        sylinteri = cc;
    }
    //Luokassa oltava yksityisiä ja julkisia jäseniä

    void vroomvroom() {
        cout << haeSylinteri() << " sylinteriä toiminnassa" << endl;
    };
    int haeSylinteri() {
        return sylinteri;
    }
};

class automobiili : private  moottori
    //Luokasta on periytetty toinen luokka,
{
public:
    automobiili(int cc = 8) : moottori(cc) {}
    void vroomvroom()
    {
        cout << "automobiili käynnistyy " << haeSylinteri() <<
            " sylinterin teholla" << endl;
        moottori::vroomvroom();
        cout << "moottori meni boom boom!! sylinterejä on enää: " << haeSylinteri() / 2 << endl;
        //toivon että tämä kelpaa tähän osaan
        //"lisää siihen jotain uusia ominaisuuksia"
    }
};
//Luokasta instantioitu vähintään yksi olio,
//joka käyttää luokan tarjoamia palveluja
int main()
{
    automobiili testi(120);
    testi.vroomvroom();
    return 0;
}
