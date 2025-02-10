#include <iostream>
using namespace std;
class binary
{
    public:
    bool search(int arr[],int s,int n,int k)
    {
        
         if(s>n)
         {
            return false;
         }
        int  m=(s+n)/2;
         if(arr[m]==k)
         {
            return true;
         }
         if(arr[m]>k)
         {
            return search(arr,s,m-1,k);
         }
        else
        {
            return search(arr,m+1,n,k);
        }
    }

};
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int k;
    int s=0;int m=0;
    cin>>k;
    binary obj;
    bool ans=obj.search(arr,s,n-1,k);
    cout<<ans;

}
