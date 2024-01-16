#include <iostream>
using namespace std;

class Number {
  int a;
  public:

  Number(){
    a = 0;
  }
  Number(int num) {
    a = num;
  }

  // When no copy constructor is found, compier supplies its own copy constructor
  Number(Number &obj)
  {
    cout << "Copy constructor called" << endl;
    a = obj.a;
  }

  void display() {
    cout << "The number for this object is: " << a << endl;
  }
};  

int main() {

  Number x, y, z(34), z2;
  z.display();
  x.display();
  y.display();

  Number z1(x); // copy constructor invoked
  z1.display();

  z2 = z; // copy constructor not called

  return 0;
}