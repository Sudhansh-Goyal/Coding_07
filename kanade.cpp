#include <iostream>
using namespace std;
void sol(int ar[],int n)
{
     int maxend=ar[0];int res=ar[0];
     for(int i=1;i<n;i++)
     {
        maxend=max(ar[i]+maxend,ar[i]);
        res=max(res,maxend);
     }
     cout<<res;
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