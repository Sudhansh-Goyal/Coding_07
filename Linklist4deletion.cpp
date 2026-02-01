#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node* next;
};
void insert(node*& head,int v)
{
    node* newnode=new node{v,NULL};
    if(head==NULL)
    {
        head=newnode;
    }
    else{
    newnode->next=head;
    head=newnode;
    }
}
void delet(node*& head,int pos)
{
    if(pos==1)
    {
        head=head->next;
        return;
    }
    node* temp=head;
    for(int i=1;i<pos;i++)
    {
        temp=temp->next;
    }
    temp->next=temp->next->next;
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

