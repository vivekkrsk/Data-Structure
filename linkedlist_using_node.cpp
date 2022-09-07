#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

// function to tarverse linkedlist
void print_linkedlist(Node* head)
{
    while (head != NULL)
    {
        cout<<head->data<<endl;
        head=head->next;
    }
    
}

int main()
{
    Node* head = NULL;
    Node* second = NULL;
    Node* third = NULL;

    head = new Node();
    second = new Node();
    third = new Node();

    // assingn data link node of linked list
    head->data =12;
    head->next = second;

    second->data=123;
    second->next=third;

    third->data =1234;
    third->next =NULL;

    // Print Data stored in node of linked list
    print_linkedlist(head);


    return 0;
}