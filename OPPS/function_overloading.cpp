#include <iostream>
using namespace std;

class Sum {
  public:
  void add(int x, int y) {
    cout << "sum is " << x + y << endl;
  }

  void add(int x, int y, int z) {
    cout << "Sum is " << x + y + z << endl;
  }

  void add(float p, float t) {
    cout << "Sum is " << p + t << endl;
  }
};

int main() {

  Sum s;

  s.add(23, 3);
  s.add(23, 1, 1);
  // s.add(2.3, 3.3);

  return 0;
}