// #include <iostream>
// using namespace std;

// int main() {

//   int size;
//   cout << ("Enter size of the array: ");
//   cin >> size;


//   int arr[100]; 

//   cout << ("Enter ") << size << (" elements here: ");
//   for(int i = 0; i < size; i++) {
//     cin >> arr[i];
//   }

//   for(int i = 0; i < size-1; i++) {
//     int min = i;
//     for(int j = i+1; j< n; j++) {
//       if(a[])
//     }
//   }

//   return 0;
// }

#include <iostream>
using namespace std;

int main() {

  int size;
  cout << "Enter the size of the array: ";
  cin >> size;

  int arr[100];
  cout << "Enter " << size << " elements here: ";
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  cout << endl;
  
  cout << "Array elements are: ";
  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  cout << endl;
  
  cout << "sorting using selection sort: ";
  for(int i = 0; i < size - 1; i++) {
    int minIndex = i;
    for(int j = i + 1; j < size; j++) {
      if (arr[minIndex] > arr[j]) {
        minIndex = j;
      }
    }
    swap(arr[minIndex], arr[i]);
  }

  for(int i = 0; i < size; i++) {
    cout << arr[i] << " ";
  }

  return 0;
}