// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack {
//   int capacity;
//   int *arr;
//   int top;

//   public:
//   Stack(int size) {
//     this -> capacity = size;
//     arr = new int[size];
//     this -> top = -1;
//   }

//   void push(int data) {
//     if(this -> top == )
//   }
// };

// int main() {

//   return 0;
// }





// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack {
//   int capacity; 
//   int *arr;
//   int top;

//   public:
//   Stack(int c) {
//     this -> capacity = c;
//     arr = new int[c];
//     this -> top = -1;
//   }

//   void push(int data) {
//     if(this -> top == this -> capacity - 1) {
//       cout << "Stack is overflow";
//       return;
//     }
//     else {
//       this -> top++;
//       this -> arr[top] = data;
//     }
//   }

//   int top() {
//     if(this -> top == -1) {
//       cout << "Underflow";
//       return;
//     }
//     else {
//       this -> top--;
//     }
//   }
// };

// int main() {

//   return 0;
// }











// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack {
//   // properties
//   public:
//     int top = -1;
//     int *arr;
//     int size;

//   // behaviour
//   Stack(int size) {
//     this -> size = size;
//     arr = new int[size];
//     top = -1;
//   }
// };

// void push(int element) {
//   if(size - top > 1) {
//     top++;
//     arr[top] = element;
//   }
//   else {
//     cout << "Stack Overflow" << endl;
//   }
// }

// void pop() {
//   if(top >= 0) {
//     top--;
//   }
//   else {
//     cout << "Stack is underflow.";
//   }
// }

// int peek() {
//   if(top >= 0 && size) {
//     return arr[top];
//   }
//   else {
//     cout << "Stack is empty" << endl;
//     return -1;
    
//   }
// }

// bool isEmpty() {
//   if(top == -1) {
//     return true;
//   }
//   else {
//     return false;
//   }
// }

// int main() {

//   Stack st(5);

//   st.push(22);
//   st.push(43);
//   st.push(66);

//   cout << st.peek() << endl;

//   return 0;
// }