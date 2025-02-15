#include <iostream>
#include <vector>
using namespace std;
void stock(vector <int> arr,int n)
{
    int profit=0;
    for(int i=0;i<n-1;i++)
    {
        if(arr[i+1]>arr[i])
        {
            profit+=arr[i+1]-arr[i];
        }
    }
    cout<<profit;
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
    stock(arr,n);
}