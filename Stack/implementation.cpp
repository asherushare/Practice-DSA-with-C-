#include <iostream>
#include <stack>
using namespace std;

class Stack {
  public:
    int *arr;
    int top;
    int size;

  Stack(int size) {
    this -> size = size;
    top = -1;
    arr = new int[size];
  }

  void push(int element) {
    if(size - top > 1) {
      top++;
      arr[top] = element;
    }
    else {
      cout << "Stack is overflow" << endl;
    }
  }

  void pop() {
    if(top >= 0) {
      top--;
    }
    else {
      cout << "Stack Underflow" << endl;
    }
  }

  int peek() {
    if(top >= 0){
      return arr[top];
    }
    else {
      cout << "Stack is empty" << endl;
      return -1;
    }
  }

  bool isEmpty() {
    if(top == -1) {
      return true;
    }
    else {
      return false;
    }
  }
};

int main() {

  Stack st(5);

  st.push(23);
  st.push(55);
  st.push(45);
  st.push(23);
  st.push(55);
  st.push(45);

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  st.pop();

  cout << st.peek() << endl;

  if(st.isEmpty()) {
    cout << "Stack is empty mere dost";
  }
  else {
    cout << "Not empty";
  }

  return 0;
}