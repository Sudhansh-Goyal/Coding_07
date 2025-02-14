#include <iostream>
#include <vector>
using namespace std;
vector <int> maxadj(int arr[],int n)
{
    vector <int> ans;
    for(int i=0;i<n-1;i++)
    {
         ans.push_back(max(arr[i],arr[i+1]));
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
    vector <int> ans=maxadj(arr,n);
    for(int i=0;i<ans.size();i++)
    {
      cout<<ans[i]<<" ";
    }
    
}