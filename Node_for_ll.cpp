// Node for linked list

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
    head->data=234;
    head->link=NULL;

    cout << head->data << "   "<<head->link;

    return 0;
}