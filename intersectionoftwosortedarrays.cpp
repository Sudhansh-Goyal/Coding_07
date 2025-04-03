#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
      // Function to return a list containing the intersection of two arrays.
      vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
          int n=arr1.size();
          int m=arr2.size();
          int i=0;int j=0;
          vector <int> ans;int c=0;
          while(i<n && j<m)
          {
              if(arr1[i]<arr2[j])
              {
                  i++;
              }
              else if(arr1[i]>arr2[j])
              {
                  j++;
              }
              else
              {
                  ans.push_back(arr1[i]);
                  i++;
                  j++;
                  c++;
              }
          }
          if(ans.empty())
          {
              return ans;
          }
          vector <int> fans;
          int a=ans.size();
          fans.push_back(ans[0]);
          for(int i=1;i<a;i++)
          {
              if(ans[i]!=ans[i-1])
              {
                  fans.push_back(ans[i]);
              }
          }
          return fans;
      }
  };
  int main()
  {
    int n;
    cin>>n;
    vector <int> v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    int m;
    cin>>m;
    vector <int> v2(m);
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    Solution obj;
    vector <int> ans=obj.intersection(v1,v2);
    if(ans.size()==0)
    {
        cout<<"no common elements";
    }
    else
    {
        int aa=ans.size();
        for(int i=0;i<aa;i++)
        {
            cout<<ans[i]<<" ";
        }
    }
  }