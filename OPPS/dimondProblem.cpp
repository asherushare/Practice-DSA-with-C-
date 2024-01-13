#include <iostream>
using namespace std;

class Parent {
  public:
  Parent() {
    cout << "This is parent class." << endl;
  }
};

class child1: public Parent {
  public:
  child1() {
    cout << "This is child class one." << endl;
  }
};

class child2 : public Parent {
public:
  child2() {
    cout << "This is child class two." << endl;
  }
};

class grandchild1: public child1 {
  public:
  grandchild1() {
    cout << "This is grand child and child of child1" << endl;
  }
};

class grandchild2 : public child2 {
public:
  grandchild2() {
    cout << "This is grand child and child of child1" << endl;
  }
};

class youngerchild: public grandchild1, public grandchild2 {
  public:
  youngerchild() {
    cout << "This is younger chld." << endl;
  }
};

int main() {

  youngerchild Yound;

  return 0;
}