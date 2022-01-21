// single linked list node addtion at the end

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void add_node_at_end(int data,struct node *head)
{
   struct node *ptr, *temp;
   ptr=head;
   temp=new node;
   temp->data= data;
   temp->link=NULL;

   while (ptr->link!=NULL)
   {
       ptr=ptr->link;
   }
   ptr->link=temp;
   
}

void traverse(struct node *head)
{
    if (head==NULL)
    {
        cout << "Linked list is empty";
    }

    struct node *ptr=NULL;
    ptr=head;

    while (ptr != NULL)
    {
        cout << ptr->data<<endl;
        ptr= ptr->link;
    }
    
    
}

int main()
{
    struct node *head= new node;
    head->data=10;
    head->link=NULL;
    
    add_node_at_end(20,head);
    add_node_at_end(30,head);
    add_node_at_end(40,head);
    add_node_at_end(50,head);

    traverse(head);

    return 0;
}