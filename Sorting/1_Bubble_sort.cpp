#include <iostream>
using namespace std;

int main() {

  int size;
  cout << ("Enter the size of the array: ");
  cin >> size;

  int arr[100];

  cout << ("Enter ") << size << (" elements here: ");
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << ("Array elements are: ");
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;

  for(int i = 0; i < size-1; i++) {
    for(int j = 0; j < size-i-1; j++) {
      if(arr[j] > arr[j+1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;   
        }
    }
  }

  cout << ("Sorted array using bublle sorting technique is: ");
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}



/*
  Bubble sort

  void BubbleSort(int size, int arr[]) {
    for(int i = 0; i < size; i++) {
      for(int j = 0; j < size; j++) {
        if(arr[j] > arr[j + 1]) {
          swap(arr[j], arr[j + 1]);
        }
      }
    }
  }


*/