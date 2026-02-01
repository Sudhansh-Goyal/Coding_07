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
void delet(node*& head,int pos)
{
    if(head==NULL)
    {
        return;
    }
    if(pos==1)
    {
        head=head->next;
        head->prev=NULL;
        return;
    }
    node* curr=head;
    for(int i=1;i<pos && curr!=NULL;i++)
    {
        curr=curr->next;
    }
    if(curr->prev!=NULL)
    {
    curr->prev->next=curr->next;
    }
    if(curr->next!=NULL)
    {
    curr->next->prev=curr->prev;
    }
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
    int pos;
    cin>>pos;
    delet(head,pos);
    display(head);   
}