#include <iostream>
using namespace std;

int large(int arr[], int size) {
  int lar = arr[0];
  for(int i = 0; i < size; i++) {
    if(arr[i] > lar) {
      lar = arr[i];
    }
  }
  return lar;
}

int main() {

  int size;

  cout << "Enter the size of array: ";
  cin >> size;

  int arr[100];

  cout << "Enter " << size << " elements here: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int largest = large(arr, size);

  cout << largest << endl;

  return 0;
}