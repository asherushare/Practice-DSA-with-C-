#include <iostream>
#include <stack>
using namespace std;

class Stack {
  public:
    int *arr;
    int size;
    int top;

  Stack(int size) {
    top = -1;
    this -> size = size;
    arr = new int[size];
  }

  void push(int element) {
    if(size - top > 1) {
      top++;
      arr[top] = element;
    }
    else {
      cout <<"Stack is overflow";
    }
  }

  void pop() {
    if(top >= 0) {
      top--;
    }
    else {
      cout << "There is no elements to pop";
    }
  }

  void peek() {
    if(top >= 0) {
      cout << arr[top];
    }
    else {
      cout << "Stack is empty";
    }
  }

  void isEmpty() {
    if(top == -1) {
      cout << "Stack is empty";
    }
    else {
      cout << "Stack is not empty";
    }
  }

};

int main() {

  Stack st(5);

  st.push(3);
  st.push(45);

  // st.peek();

  // cout << endl;
  
  // st.pop();

  // st.peek();

  st.peek();

  cout << endl;

  cout << "Size of Stack is: " << sizeof(st) << endl;

  st.pop();
  st.pop();
  st.pop();

  cout << endl;

  st.isEmpty();

  return 0;
}