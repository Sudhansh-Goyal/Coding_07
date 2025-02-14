

#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:

    
    void rotateArr(vector<int>& arr, int d) {
        d=d%arr.size();
        vector <int> arr1=arr;int c=0;
        for(int i=d;i<arr.size();i++)
        {
            arr[c]=arr1[i];
            c++;
        }
        for(int i=0;i<d;i++)
        {
            arr[c++]=arr1[i];
        }
    }
};

int main() {
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
     cin>>arr[i];
    }
    int d;
    cin>>d;
    Solution obj;
    obj.rotateArr(arr,d);
    for(int i=0;i<n;i++)
    {
     cout<<arr[i]<<" ";
    }
}
