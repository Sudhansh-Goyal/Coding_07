#include <iostream>
#include <vector>
using namespace std;
void rain(vector <int> arr,int n)
{
    int maxl[n];
    maxl[0]=arr[0];
    int maxr[n];
    maxr[n-1]=arr[n-1];
    for(int i=1;i<n;i++)
    {
        maxl[i]=max(arr[i],maxl[i-1]);
    }
    for(int i=n-2;i>=0;i--)
    {
        maxr[i]=max(arr[i],maxr[i+1]);
    }
    int ans=0;
    for(int i=1;i<n-1;i++)
    {
        ans=ans+(min(maxr[i],maxl[i])-arr[i]);
    }
    cout<<ans;
}

int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    rain(arr,n);
}