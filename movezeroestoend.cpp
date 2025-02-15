#include <iostream>
#include <vector>
using namespace std;
void zeroes(vector <int> &arr,int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            k++;
        }
    }int k1=0;
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=0)
       {
        arr[k1]=arr[i];
        k1++;
       }
    }
    int n1=n-k;
    for(int i=n1;i<n;i++)
    {
        arr[i]=0;
    }
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
    zeroes(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}