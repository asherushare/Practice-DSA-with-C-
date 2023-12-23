#include <iostream>
using namespace std;

int isBirthday(int dayLeft)
{
  if (dayLeft == 0)
  {
    return 1;
  }
  else
  {
    cout << dayLeft << " days left." << endl;
    // Add a return statement for the recursive call
    return isBirthday(dayLeft - 1);
  }
}

int main()
{
  int dayLeft;
  cout << "Enter how many days to go: ";
  cin >> dayLeft;

  // Iterative approach
  // for(int i=dayLeft; i >= 0; i--) {
  //   cout << i << " days left." << endl;
  // }

  cout << "Happy Birthday.";

  isBirthday(dayLeft);

  cout << "Happy Birthday.";

  return 0;
}
