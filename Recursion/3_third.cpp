#include <iostream>
using namespace std;

int disendOrd(int num)
{
  if (num == 1)
  {
    cout << 1 << endl;
    return 1; // Add a return statement here
  }
  else
  {
    cout << num << endl;
    cout << (num - 1) << endl; // Add endl here to move to the next line
    return num;                // Add a return statement here
  }
}

int main()
{
  int num;
  cout << "Enter n value here: ";
  cin >> num;

  disendOrd(num);

  return 0;
}
