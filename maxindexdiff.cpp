#include <iostream>
using namespace std;
int sol(int ar[],int n)
{
    int rightmax[n];
    rightmax[n-1]=ar[n-1];
    for(int j=n-2;j>=0;j--)
    {
        rightmax[j]=max(ar[j],rightmax[j+1]);
    }
    int i=0;
    int j=0;
    int ans=0;
    while(i<n && j<n)
    {
        if(ar[i]<=rightmax[j])
        {
            ans=max(ans,j-i);
            j++;
        }
        else{
            i++;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int ans=sol(arr,n);
    cout<<ans;
}

//in this code the time complexity is big O(n),so this problem is not solved using naive approach
