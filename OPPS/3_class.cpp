#include <iostream>
using namespace std;

class topper {
  private:
    int age;
    int salary;
  public:
    int id;

  int getage() {
    return age;
  }

  void setage(int ages) {
    age = ages;
  }

  topper() {
    cout << "This is constructor calling." << endl;
  }

};

int main() {

  topper Patra;

  topper *h = new topper;

  Patra.id = 2323;
  Patra.setage(21);

  cout << "Id no is: " << Patra.id << endl;
  cout << "age of Patra is : " << Patra.getage() << endl;

  

  return 0;
}