#include <iostream>
using namespace std;

struct node {
  int data;
  node *next;
  
  node(int x) {
    data = x;
    next = NULL;
  }
};

int main() {

  node *head = new node(12);
  head -> next = new node (23);
  head -> next -> next = new node(23);

  return 0;
}