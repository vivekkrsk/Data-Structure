// Single link list

#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *link;
};

void add_node_at_the_end_of_sll(int data, struct node *head)
{
    struct node *temp, *ptr;
    ptr = head;
    temp = new node;
    temp->data = data;
    temp->link = NULL;

    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;

    cout << "Node is added at end" << endl;
}

struct node *add_node_at_the_begning_of_sll(int data, struct node *head)
{
    struct node *ptr = new node;
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;

    cout << "Node is added at begning" << endl;

    return head;
}

void add_at_certain_position_of_sll(int data, int position, struct node *head)
{
    int n = position;
    struct node *ptr1, *ptr2;
    ptr1 = head;
    ptr2 = new node;
    ptr2->data = data;
    ptr2->link = NULL;

    position--;

    while (position != 1)
    {
        ptr1 = ptr1->link;
        position--;
    }
    ptr2->link = ptr1->link;
    ptr1->link = ptr2;

    cout << "Node is added at " << n << " position" << endl;
}

void delete_node_from_end_of_sll(struct node *head)
{
    struct node *ptr1, *temp;
    ptr1 = head;

    while (ptr1->link->link != NULL)
    {
        ptr1 = ptr1->link;
    }
    temp = ptr1->link;
    ptr1->link = NULL;
    free(temp);

    cout << "Node is deleted from end;" << endl;
}

struct node *delete_node_from_begning_of_sll(struct node *head)
{
    struct node *ptr, *temp;
    temp = head;
    ptr = head->link;

    free(temp);

    cout << "Node is deleted from begning" << endl;

    return ptr;
}

void delete_node_from_certain_position_of_sll(int position, struct node *head)
{
    int n = position;
    struct node *ptr, *temp;
    ptr = head;

    position--;

    while (position != 1)
    {
        ptr = ptr->link;
    }
    temp = ptr->link;
    ptr->link = temp->link;
    free(temp);

    cout << "Node is deleted from " << n << " position" << endl;
}

void print(struct node *head)
{
    if (head == NULL)
    {
        cout << "Linked list is empty";
    }

    struct node *ptr = new node;
    ptr = head;

    while (ptr != NULL)
    {
        cout << ptr->data << endl;
        ptr = ptr->link;
    }
}

int main()
{
    struct node *head = new node;
    head->data = 10;
    head->link = NULL;

    print(head);

    add_node_at_the_end_of_sll(20, head);
    add_node_at_the_end_of_sll(30, head);
    add_node_at_the_end_of_sll(40, head);
    add_node_at_the_end_of_sll(50, head);

    print(head);

    head = add_node_at_the_begning_of_sll(60, head);
    head = add_node_at_the_begning_of_sll(70, head);
    head = add_node_at_the_begning_of_sll(80, head);
    head = add_node_at_the_begning_of_sll(90, head);

    print(head);

    add_at_certain_position_of_sll(100, 5, head);

    print(head);

    delete_node_from_end_of_sll(head);
    delete_node_from_end_of_sll(head);
    delete_node_from_end_of_sll(head);

    print(head);

    head = delete_node_from_begning_of_sll(head);
    head = delete_node_from_begning_of_sll(head);
    head = delete_node_from_begning_of_sll(head);

    print(head);

    delete_node_from_certain_position_of_sll(2, head);

    print(head);

    cout<<"--------------------- Succesfully executed all the command -----------------------\n\n";

    return 0;
}