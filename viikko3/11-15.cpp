#include <iostream>
#include <string>
using namespace std;

class suorakulmio {
  private:
    double w, h;
  public:

    void setW(double set1)  {
        w = set1;
    }
    void setH(double set2)  {
        h = set2;
    }
    double getW() const {
        return w;
    }
    double getH() const {
        return h;
    }
    double area() const {
        return w * h;
    }
    int compare(suorakulmio x) const {
      if(x.area() == area())
          return 0;
      else if(x.area() > area())
          return -1;
      else if(x.area() < area())
          return 1;
        return 0;
    }

    suorakulmio() {
      w = 0;
      h = 0;
    }


    suorakulmio(double W, double H) {
      w=W;
      h=H;
    }
    
    suorakulmio(const suorakulmio &x) {
      w = x.w;
      h = x.h;
    }
};

int main(){
  suorakulmio obj;
  obj.setH(2);
  obj.setW(1);
  cout << "Height: " << obj.getH();
  cout << "Width: " << obj.getW();
  cout << "Area: " << obj.area();

  suorakulmio kopio(obj);
  cout << "result: " << obj.compare(kopio);
  return 0;

}