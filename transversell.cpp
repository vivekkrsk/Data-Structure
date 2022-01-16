// Add item in linklist 

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void print_list(node* n)
{
    while (n!=NULL)
    {
        cout<< n->data << "  ";
        n=n->link;
    }
    
}


int main()
{
    struct node *head=new node;
    head->data=12;
    head->link=NULL;

    struct node *current= new node;
    current->data=123;
    current->link=NULL;

    head->link=current;

    current = new node;
    current->data=1234;
    current->link=NULL;

    head->link->link=current;

    current = new node;
    current->data=12345;
    current->link=NULL;

    head->link->link->link=current;

    print_list(head);

    return 0;
}