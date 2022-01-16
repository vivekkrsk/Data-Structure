// Basic single linked list

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
    head->data=10;
    head->link=NULL;

    struct node *current1= new node;
    current1->data=20;
    current1->link=NULL;
    head->link=current1;  
    
    struct node *current2= new node;
    current2->data=30;
    current2->link=NULL;
    current1->link=current2;

    struct node *current3= new node;
    current3->data=40;
    current3->link=NULL;
    current2->link=current3;

    struct node *current4= new node;
    current4->data=50;
    current4->link=NULL;
    current3->link=current4;

    cout << head->data << endl;
    cout << head->link->data << endl;
    cout << head->link->link->data << endl;
    cout << head->link->link->link->data << endl;
    cout << head->link->link->link->link->data << endl;

    return 0;
}