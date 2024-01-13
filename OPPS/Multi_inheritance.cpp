#include <iostream>
using namespace std;

class Parent {
  public:
    Parent () {
      cout << "This is parent claa." << endl;
    }
};

class Child: public Parent {
  public:
    Child() {
      cout << "This is child class of parent." << endl;
    }
};

class Grandchild: public Child {
  public:
    Grandchild() {
      cout << "This is multi - level inheritance" << endl;
    }
};

int main() {

  Grandchild s;

  return 0;
}