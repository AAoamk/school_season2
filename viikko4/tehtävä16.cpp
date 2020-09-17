#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class luku {
    private:
    float real, imag;
    public:
    void set() {
        cout << "reaaliluku ja imaginaariluku";
        cin >> real >> imag;
        }
    float getREAL() const;
    float getIMAG() const;
    luku();
    luku(float, float);
    luku(luku &);
    float abs();
    float angle();
    };

float luku::getREAL() const {
    return real;
}
float luku::getIMAG() const {
    return imag;
}
luku::luku() {
    real=imag=0;
}

luku::luku(float R,float I) {
    real = R;
    imag = I;
}
luku::luku(luku &t) {
    this->real=t.real;
    this->imag=t.imag;
}
float luku::angle() {
    return(atan(imag/real));
}
float luku::abs() {
    return(sqrt(real*real+imag*imag));
}

int main() {
    luku z(0,0);
    luku z1;
    luku z2=z;
    cout << z.abs();
    cout << z.angle();

    z.set();
    cout <<"reaali: " << z.getREAL() << " imagi: " << z.getIMAG();
    cout <<" arvo: "<< z.abs();
    cout <<" kulma: "<< z.angle();

return 0;
}
