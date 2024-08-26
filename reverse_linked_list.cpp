#include <bits/stdc++.h>
using namespace std;

struct Node {
   int d;
   struct Node * next;
};

void display_linked_list(Node * &head) {
    Node * temp = head;
    while(temp != NULL) {
         cout << temp->d << " ";
         temp = temp->next;
    }
    cout << endl;
}

Node * reverse(Node * &head) {
    Node * prevptr = NULL;
    Node * currptr = head;
    Node * nextptr;
    while(currptr != NULL) {
        nextptr = currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}


int main() {
    struct Node * head = NULL;
    Node * one = new Node();
    Node * two = new Node();
    Node * three = new Node();
    Node * four = new Node();
    one->d = 1;
    one->next = two;
    two->d = 2;
    two->next=three;
    three->d = 3;
    three->next = four;
    four->d = 4;
    four->next = NULL;
    head = one;
    display_linked_list(head);
    Node * newHead = reverse(head);
    display_linked_list(newHead);
}