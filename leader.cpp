#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <int> lead(vector <int> arr,int n)
{
    vector <int> ans;
    ans.push_back(arr[n-1]);
    int current=arr[n-1];
    for(int i=n-2;i>=0;i--)
    {
        if(arr[i]>current)
        {
            ans.push_back(arr[i]);
            current=arr[i];
        }
    }
    return ans;
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
   vector <int> ans= lead(arr,n);
   sort(ans.begin(),ans.end());
   for(int i=0;i<ans.size();i++)
   {
     cout<<ans[i]<<" ";
   }
}