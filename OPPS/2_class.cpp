#include <iostream>
using namespace std;

class topper {
  private:
    char name[20];
    int age;

  public:
    int rollNo;
    int salary;

    int getage() {
      return age;
    }

    void setage(int n) {
      age = n;
    }
};

int main() {
   //static allocation
  topper Patra;

  // dynamically allocation
  topper *b = new topper;
  cout << "size is " << (*b).rollNo << endl;
  cout << "salary is: " << (*b).getage() << endl;

  cout << "size is " << b->rollNo << endl;
  cout << "salary is: " << b->getage() << endl;

  Patra.setage(21);
  
  cout << "age of Patra is: " << Patra.getage() << endl;
  cout << "Size of Patra is: " << sizeof(Patra) << endl;
  return 0;
}