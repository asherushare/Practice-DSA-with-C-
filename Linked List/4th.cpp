#include <iostream>
using namespace std;

struct Node {
  int data;
  Node *next;

  Node(int x) {
    data = x;
    next = NULL;
  }
};

int main() {

  Node *head = new Node(10);
  Node *temp = new Node(23);
  Node *temp2 = new Node(43);

  head -> next  = temp;

  return 0;
}