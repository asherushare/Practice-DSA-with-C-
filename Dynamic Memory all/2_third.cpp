#include <iostream>
using namespace std;

int sum(int *arr, int size) {
  int sum = 0;
  for(int i = 0; i < size; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {

  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  new int[size];

  int *arr = new int[size];

  cout << "Enter array elements: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << "Elements are: ";
  for (int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout <<endl;
  
  int ans = sum(arr, size);

  cout << ans << endl;

  return 0;
}