#include <bits/stdc++.h>
using namespace std;

struct Node
{
   int data;
   struct Node *next;
};

int main()
{
    // Declare node 
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate 3 nodes in the heap
    head = new Node;
    second = new Node;
    third = new Node;

    // assingn data link node of linked list
    head->data =12;
    head->next = second;

    second->data=123;
    second->next=third;

    third->data =1234;
    third->next =NULL;

    // Print Data stored in node of linked list
    cout<< head->data<<endl;
    cout<< head->next->data<<endl;
    cout<< head->next->next->data<<endl;


    return 0;
}