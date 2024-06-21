#include <iostream>
using namespace std;

void insertionSort(int arr[], int size) {
  for(int i = 0; i < size; i++) {
    int j = i;

    while(j > 0 && arr[j - 1] > arr[j]) {
      swap(arr[j], arr[j - 1]);
      j--;
    }
  }
}

int main() {

  int size;
  int arr[100];

  cout << "Enter the size of the array: ";
  cin >> size;

  cout << "Enter arra elements: " << endl;
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << endl;

  cout << "Array elements: " << endl;
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  insertionSort(arr, size);

  cout << endl;

  cout << "Sorted elements are: " << endl;
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}