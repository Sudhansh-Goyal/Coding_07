#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
void insert(node*& head,int v)
{
    node* newnode=new node{v,NULL,NULL};
    if(head==NULL)
    {
        head=newnode;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
    }
}
void revers(node*& head)
{
    node* temp=NULL;
    node* curr=head;
    while(curr!=NULL)
    {
        temp=curr->prev;
        curr->prev=curr->next;
        curr->next=temp;
        curr=curr->prev;
    }
    if(temp!=NULL)
    {
    head=temp->prev;
    }
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<"\n";   
}
int main()
{
    struct node* head=NULL;
    int c;
    cin>>c;
    for(int i=0;i<c;i++)
    {
        int v;
        cin>>v;
        insert(head,v);
    }
    display(head);   
    revers(head);
    display(head);
}