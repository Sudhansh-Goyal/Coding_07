#include <iostream>
using namespace std;
void sol(int ar[],int n)
{
    int r=ar[0];int c=1;
    for(int i=1;i<n;i++)
    {
        if(r==ar[i])
        {
            c++;
        }
        else{
            c--;
        }
        if(c==0)
        {
            r=ar[i];
            c=1;
        }
    }
    int c1=0;
    for(int i=0;i<n;i++)
    {
        if(ar[i]==r)
        {
            c1++;
        }
        if(c1>n/2)
        {
            cout<<r;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];

    }
    sol(ar,n);
}