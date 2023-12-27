#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
  int start = 0, end = size - 1, mid;

  while(start <= end) {
    mid = (start + end) / 2;
    if(arr[mid] == key) {
      return mid;
    }
    else if(arr[mid] < mid) {
      end = mid - 1;
    }
    else {
      start = mid + 1;
    }
  }
  return - 1;
}

int main() {

  int size;
  cout << ("Enter the size of the array: ");
  cin >> size;

  int arr[100];
  cout << ("Enter the array elements: ");
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  int key;
  cout << ("Which element do you want to search: ");
  cin >> key;

  cout << ("The index of the element is: ");
  cout << binarySearch(arr, size, key);

  return 0;
}






// #include <iostream>
// using namespace std;

// int binarySearch(int arr[], int size, int key)
// {
//   int start = 0, end = size - 1, mid;
//   while (start <= end)
//   {
//     mid = (start + end) / 2;
//     if (arr[mid] == key)
//     {
//       return mid;
//     }
//     else if (arr[mid] < key)
//     {
//       start = mid + 1;
//     }
//     else
//     {
//       end = mid - 1;
//     }
//   }
//   return -1;
// }

// int main()
// {

//   int size;
//   cout << "Enter the size of array: ";
//   cin >> size;

//   int arr[100];

//   cout << "Enter the elements: ";
//   for (int i = 0; i < size; i++)
//   {
//     cin >> arr[i];
//   }

//   int key;
//   cout << "Which element do you want to search? ";
//   cin >> key;

//   cout << binarySearch(arr, size, key);

//   return 0;
// }


