#include <iostream>
using namespace std;

bool isPalindrome(string text) {
  for(int i = 0; i < text.length() / 2; i++) {
    if(text[i] != text[text.length() - i - 1]) {
      return false;
    }
    else {
      return true;
    }
  }
}

int main() {

  string name;
  cout << "Enter string here: ";
  getline(cin, name);

  if(isPalindrome(name)) {
    cout << "This is a palindrome";
  }
  else {
    cout << "not a palindrome";
  }

  return 0;
}