// Linked list

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

int main()
{
    struct node *head= new node;
    head->data=12;
    head->link=NULL;

    struct node *current = new node;
    current->data=123;
    current->link= NULL;

    head->link=current;

    current = new node;
    current->data=1234;
    current->link= NULL;

    head->link->link=current;

    current = new node;
    current->data=12345;
    current->link= NULL;

    head->link->link->link=current;

    cout<< head->data<<endl;
    cout<< head->link->data<<endl;
    cout<< head->link->link->data<<endl;
    cout<< head->link->link->link->data<<endl;

    return 0;
}