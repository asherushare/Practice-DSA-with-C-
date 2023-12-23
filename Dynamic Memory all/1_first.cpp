#include <iostream>

using namespace std;

int getSum(int* arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int* arr = new int[n];

    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int ans = getSum(arr, n);
    cout << "The sum is: " << ans << endl;

    // Don't forget to free the dynamically allocated memory
    delete[] arr;

    return 0;
}
