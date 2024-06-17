#include <iostream>
using namespace std;

bool linearSearch(int arr[], int size, int key) {
  if(size == 0) {
    return false;
  }

  if(arr[0] == key) {
    return true;
  }
  bool ans = linearSearch(arr + 1, size - 1, key);
  return ans;
}

int main() {

  int arr[5] = {1, 2, 3, 4, 5};
  int size = 5;

  int key;
  cin >> key;

  bool result = linearSearch(arr, size, key);

  if(result) {
    cout << "Present" << endl;
  }
  else {
    cout << "Absent" << endl;
  }

  return 0;
}