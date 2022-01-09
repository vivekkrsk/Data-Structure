// liklist list

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node* next;
};


int main()
{
    struct node* head= new node;
    head->data= 25;
    head->next=NULL;

    struct node* current = new node;
    current->data=30;
    current->next=NULL;
    head->next=current;

    current=new node;
    current->data=35;
    current->next=NULL;
    head->next->next=current;

    current=new node;
    current->data=40;
    current->next=NULL;
    head->next->next->next=current;

    current=new node;
    current->data=45;
    current->next=NULL;
    head->next->next->next->next=current;

    cout << head->data << endl;
    cout << head->next->data << endl;
    cout << head->next->next->data << endl;
    cout << head->next->next->next->data << endl;
    cout << head->next->next->next->next->data << endl;

    return 0;
}