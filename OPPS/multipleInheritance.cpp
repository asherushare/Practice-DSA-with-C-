#include <iostream>
using namespace std;

class Parent {
  public:
    Parent() {
      cout << "This is parent class" << endl;
    }
};

class child1: public Parent {
  public:
    child1() {
      cout << "This is one child from parent " << endl;
    }
};

class child2 : public Parent {
  public:
    child2() {
      cout << "This is child two from parent " << endl;
    }
};

int main() {

  child1 s;

  cout << endl;

  child2 s2;

  return 0;
}