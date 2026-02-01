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
        return;
    }
    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}
void display(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
    
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
}