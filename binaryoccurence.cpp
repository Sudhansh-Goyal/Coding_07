#include <iostream>
#include <vector>
using namespace std;
int solve(vector <int> v,int low,int high)
{
    int n=high+1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(v[mid]==0)
        {
            low=mid+1;
        }
        else{
            if(mid==0 || v[mid-1]==0)
            {
                return (n-mid);
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int ans=solve(v,0,n-1);
    cout<<ans;
}