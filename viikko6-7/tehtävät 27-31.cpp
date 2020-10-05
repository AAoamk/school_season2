#include <iostream>
#define PI 3.141
using namespace std;



class Muoto
{
    private:
    protected:
    public:
        double a,b;
        virtual double area()=0;
};

class suorakulmio : public Muoto
{
public:
    suorakulmio()
    {
        a = b =  0;
    }

    suorakulmio(double W, double b)
    {
        a = W;
        b = b;
        cout << "suorakulmio luotu parametrein: W = " << a <<", b = " << b << endl;
    }

    suorakulmio(const suorakulmio &t)
    {
        a = t.a;
        b = t.b;
    }

    double area()
    {
        return a * b;
    }
};

class nelio : public suorakulmio
{
public:
    nelio()
    {
        b = a = 0;
    }

    nelio(double Wb)
    {
        b = a = Wb;
        cout << "nelio created with the width: " << a << endl;
    }
    double area()
    {
        return a * a;
    }
};

class ellipse : public Muoto
{
public:
    ellipse()
    {
        a = b = 0;
    }

    ellipse(double W, double b)
    {
        a = W;
        b = b;
        cout << "ellipse created witb parameters: A = " << a <<", B = " << b << endl;
    }

    double area()
    {
        return PI * a * b;
    }
};

class ympyra : public ellipse
{
    public:
    ympyra()
    {
        a = b = 0;
    }

    ympyra(double sd)
    {
        a = b = sd;
        cout << "ympyra created witb radius: " << a << endl;
    }

    double area()
    {
        return PI * a * a;
    }
};


int main()
{
    Muoto *ellips = new ellipse(120, 40);
    cout << "ellipses area: " << ellips->area() << endl;
    Muoto *circle = new ympyra(40);
    cout << "ympyra's area: " << circle->area() << endl;
    Muoto *square = new nelio(40);
    cout << "nelio's area: " << square->area() << endl;
    Muoto *rectangle = new suorakulmio(120, 40);
     cout << "suorakulmio's area: " <<rectangle->area() << endl;
    return 0;
}
