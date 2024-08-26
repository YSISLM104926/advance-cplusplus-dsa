#include <bits/stdc++.h>
using namespace std;

// structure of Node declearation
struct Node{
  int d;
  struct Node * next;
};

// printing linked_list
void insert_node_at_tail(Node * &head) {
      Node * temp = head;
      while(temp->next != NULL) {
        temp =  temp->next;
      }
      int t; cin >> t;
      Node * lastNode = new Node();
      lastNode->d = t;
      lastNode->next = NULL;
      temp->next = lastNode;
}


void display_linked_list(Node * &head) {
    Node * temp = head;
    while(temp != NULL) {
         temp->next == NULL ? cout << temp->d << '\n':
         cout << temp->d << " -> ";
         temp = temp->next;
    }
    cout << endl;
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

    struct Node * tail;

    insert_node_at_tail(head);
    display_linked_list(head);
    

}