#include <bits/stdc++.h>
using namespace std;

// structure of Node declearation
struct Node{
  int d;
  struct Node * next;
};

// printing linked_list
void print_linked_list(Node * &head) {
      Node * temp = head;
      while(temp != NULL) {
        temp->next == NULL ? cout << temp->d << endl : cout << temp->d << " -> ";
        temp =  temp->next;
      }
}

int main() {
    // making null header Node that going to pointing at one Node
    struct Node * head = NULL;
   // new Node creation
    Node * one = new Node();
    Node * two = new Node();
    Node * three = new Node();
    
    one->d = 1, one->next=two;
    two->d = 2, two->next=three;
    three->d = 3, three->next=NULL;
    // head pointing at one Node
    head = one;

    print_linked_list(head);


}