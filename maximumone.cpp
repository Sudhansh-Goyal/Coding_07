#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void solve(vector <int> arr)
{
    int res=0;int c=0;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]==1)
        {
            c++;
        }
        else
        {
            res=max(res,c);
            c=0;
        }
        
        
    }
    cout<<res;
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
    solve(arr);
}