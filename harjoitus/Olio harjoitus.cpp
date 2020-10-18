/*Arvosana on sitä parempi, mitä enemmän ominaisuuksia harjoitustyö sisältää, esimerkiksi:

STL säiliöluokat ja algoritmit
Operaattorien ylikuormaus
Virtuaalinen jäsenfunktio
Abstrakti kantaluokka
Moniperintä
Tiedon tallennus tiedostoon / luku tiedostosta
-min max swap
-rotate reverse
-random shuffle, vaikkakin vanhentunu
-accumulate, max min element
-list, array, vector! 



    vector<string> v{ "one", "two", "three" };
    ofstream outFile("test.txt");
        for (const auto &e : v) outFile << e << "\n";


    ifstream f("test.txt");
    if (f.is_open())
        cout << f.rdbuf();
*/
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <numeric>
#include <fstream>
#include <time.h>
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
    void sylinteriprint() {
        time_t givemetime = time(NULL);
        std::ofstream autosylinterit("autosylinterit.txt", std::ofstream::out | std::ofstream::app);
        autosylinterit << "sylinterejä on: " << sylinteri <<"  "<< ctime(&givemetime) <<endl;
        autosylinterit.close();
    };
};

class automobiili : private  moottori
    //Luokasta on periytetty toinen luokka,
{
public:
    automobiili(int cc) : moottori(cc) {}
    void vroomvroom()
    {
        cout << "automobiili käynnistyy " << haeSylinteri() <<
            " sylinterin teholla" << endl;
        sylinteriprint();    

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
