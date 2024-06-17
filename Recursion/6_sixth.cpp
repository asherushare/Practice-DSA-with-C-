#include <iostream>
using namespace std;

bool isSorted(int arr[], int size) {
  if(size == 0 || size == 1) {
    return true;
  }

  if(arr[0] > arr[1]) {
    return false;
  }
  else {
    int ans = isSorted(arr + 1, size - 1);
    return ans;
  }
}

int main() {

  int size = 5;
  int arr[5] = {1, 2, 5, 11, 55};

  bool ans = isSorted(arr, size);

  if(ans) {
    cout << "Sorted " << endl;
  }
  else {
    cout << "not sorted" << endl;
  }

  return 0;
}