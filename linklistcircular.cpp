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
        newnode->next=head;
        
    }
    else{
        node* temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
        // commented line here can be used to insert at the beginning of the linklist
    }
}
void display(node* head)
{
    node* dis=head;

    do
    {
        cout<<dis->data<<" ";
        dis=dis->next;
    } while (dis!=head);
    
    
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