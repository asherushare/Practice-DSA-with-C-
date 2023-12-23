#include <iostream>
using namespace std;

int factorials(int n) {
  if(n == 0) {
    return 1;
  }
  else {
    return n * factorials(n-1);

  }
}

int main() {

  int n;
  cout << ("Enter the value of n: ");
  cin >> n;

  int ans = factorials(n);
  cout << "Factorial of " << n << " is: " << ans << endl;

  return 0;
}