#include <bits/stdc++.h>
using namespace std;

// structure of Node declearation
struct Node{
  int d;
  struct Node * next;
};

// printing linked_list
bool search_value_in_linked_list(Node * &head, int val) {
      Node * temp = head;
      while(temp != NULL) {
        if(temp->d == val) {
             return true;
        }
        temp =  temp->next;
      }
      return false;
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
    
    cout << search_value_in_linked_list(head, 10) << endl;
    cout << search_value_in_linked_list(head, 2) << endl;
    display_linked_list(head);
    

}