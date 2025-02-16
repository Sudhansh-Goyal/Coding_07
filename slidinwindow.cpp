#include <iostream>
using namespace std;
void sol(int ar[],int n,int k)
{
    int ws=0;
    for(int i=0;i<k;i++)
    {
        ws=ws+ar[i];
    }
    int ms=ws;
    for(int i=k;i<n;i++)
    {
        ws=ws+(ar[i]-ar[i-k]);
        ms=max(ms,ws);
    }
    cout<<ms;
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
    int k;
    cin>>k;
    sol(ar,n,k);
}