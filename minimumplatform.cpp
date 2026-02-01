
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
    public:
    int platform(vector <int> arr,vector <int> dep)
    {
        int n=arr.size();
        int m=arr.size();
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        int i=0;int j=0;int fans=0;int ans=0;
        while(i<n && j<m)
        {
            if(arr[i]<=dep[j])
            {
                i++;
                ans++;
            }
            else
            {
                j++;
                ans--;
            }
            if(ans>fans)
            {
                fans=ans;
            }
        }
        return fans;
    }
};
int main()
{
   int n;
   int m;
   cin>>n;
   cin>>m;
   int a;
   vector <int> arr(n);
   vector <int> dep(m);
   for(int i=0;i<n;i++)
   {
     cin>>a;
     arr[i]=a;
   }
   for(int i=0;i<n;i++)
   {
     cin>>a;
     dep[i]=a;
   }
   solution obj;
   int ans=obj.platform(arr,dep);
    cout<<ans;
}