#include <iostream>
using namespace std;

class Parent {
  public:
    Parent() {
      cout << "This is Parent class." << endl;
    }
};

class Child: public Parent {
  public:
    Child() {
      cout << "This is child class." << endl;
    }
};

int main() {

  Child s;

  return 0;
}