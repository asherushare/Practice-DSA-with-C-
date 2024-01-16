#include <iostream>
using namespace std;

class Human {
  public:
  int height;
  int age;
  int weight;

  int getAge() {
    return age;
  }

  void seWeight(int w) {
    age = w;
  }
};

class male: public Human {
  public:
  string color;

  void sleep() {
    cout << "Male is studying" << endl;
  }
};

int main() {

  male object1;
  
  cout << object1.age << endl;
  cout << object1.color << endl;
  cout << object1.height << endl;

  object1.sleep();

  return 0;
}