#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    vector <int> bubble(vector <int> a)
    {
       int n=a.size();
       for(int i=0;i<n-1;i++)
       {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
       }
       return a;
    }
    
};
int main()
{
    int n;
    cin>>n;
    vector <int> ans(n);
    for(int i=0;i<n;i++)
    {
        cin>>ans[i];
    }
    solution obj;
    vector<int> res=obj.bubble(ans);
    for(int i=0;i<n;i++)
    {
        cout<<res[i]<<" ";
    }
}