// Node addtion at the certaion postion of linked list

#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void add_node_at_end(int data, struct node *head)
{
    struct node *ptr, *temp;
    ptr = head;
    temp = new node;
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}

void traverse(struct node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
    }

    struct node *ptr = NULL;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}

void add_at_certain_position_of_SSL(int data,int position, struct node *head)
{
  struct node *ptr1, *ptr2;
  ptr1=head;
  ptr2=new node;
  ptr2->data=data;
  ptr2->link=NULL;

  position--;

  while (position!=1)
  {
      ptr1=ptr1->link;
      position--;
  }
  ptr2->link=ptr1->link;
  ptr1->link=ptr2;
  
}


int main()
{
    int n,value;
    cout << "Enter the postion between 1 to 5 and value ";
    cin >> n>>value;
    if (n>5)
    {
        cout << "position is Out of bound";
        return 0;
    }
    

    struct node *head = new node;
    head->data = 10;
    head->link = NULL;

    add_node_at_end(20,head);
    add_node_at_end(30,head);
    add_node_at_end(40,head);
    add_node_at_end(50,head);

    add_at_certain_position_of_SSL(value,n,head);

    traverse(head);


    return 0;
}