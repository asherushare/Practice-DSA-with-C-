#include <iostream>
using namespace std;

struct Node {
  public:
  int data;
  Node* next;

  Node(int data1, Node* next1) {
    data = data1;
    next = next1;
  }
};

int main() {

  Node x = Node(2, nullptr);
  Node* y = &x;

  Node* n = new Node(23, nullptr);

  cout << y << endl << endl;
  cout << n << endl;
  cout << n->data << endl;
  cout << x.data << endl;

  return 0;
}