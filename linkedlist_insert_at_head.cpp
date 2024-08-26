#include <bits/stdc++.h>
using namespace std;

struct Node {
   int d;
   struct Node * next;
};


void insert_at_head(Node * &head) {
    Node * newone = new Node();
    int value; cin >> value;
    newone->d = value;
    newone->next = head;
    head = newone;
}

void display_linked_list(Node * &head) {
    Node * temp = head;
    while(temp != NULL) {
         cout << temp->d << " ";
         temp = temp->next;
    }
    cout << endl;
}


int main() {
    struct Node * head = NULL;
    Node * one = new Node();
    Node * two = new Node();
    Node * three = new Node();
    one->d = 1;
    one->next = two;
    two->d = 2;
    two->next=three;
    three->d = 3;
    three->next = NULL;
    head = one;
    insert_at_head(head);
    display_linked_list(head);
}