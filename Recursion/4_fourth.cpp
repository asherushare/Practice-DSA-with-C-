#include <iostream>
using namespace std;

void print(int num, int N) {

  //Base case

  if(num == N) {
    cout << num << endl;
    return;
  }

  cout << num << endl;
  print(num + 1, N);
}

int main() {
  
  // Print number form 1 to N
  int N;
  cout << ("Enter n value: ");
  cin >> N;

  print(1, N);



  return 0;
}