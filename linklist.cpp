#include <iostream>
#include <string>
using namespace std;
struct node
{
     int data;
     node* next;
};
void insert (node*& head,int v)
{
     node* newNode = new node{v, nullptr};

    if (head == nullptr) {
        head = newNode;
    } else {
        node* temp = head;
        while (temp->next != nullptr)
            temp = temp->next;
        temp->next = newNode;
    }
}
void insposition(node*& head,int v,int p)
{
    node* newNode=new node{v,NULL};
    if(head==NULL)
    {
        newNode->next=head;
        return ;
    }
    node* temp=head;
    for(int i=0;i<p;i++)
    {
        temp=temp->next;
    }
    if(temp==NULL)
    {
        return;
    }
    newNode->next=temp->next;
    temp->next=newNode;
}
void display(node* head)
{
    cout << "Linked List: ";
    while (head != NULL) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}
int main()
{
     node* head=NULL;
     int n,value;
     cin>>n;
     for(int i=0;i<n;i++)
     {
        cin>>value;
        insert(head,value);
     }
     int a;int b;
     cin>>a;
     cin>>b;
     insposition(head,a,b);
     display(head);
}

