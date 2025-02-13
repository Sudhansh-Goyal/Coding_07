#include <iostream>
using namespace std;
void insert(int ar[],int n,int index,int value)
{
    for(int i=n-1;i>index;i--)
    {
        ar[i]=ar[i-1];
    }
    ar[index]=value;
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n-1;i++)
    {
        cin>>ar[i];
    }
    int index,value;
    cin>>index;
    cin>>value;
    insert(ar,n,index,value);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }
}