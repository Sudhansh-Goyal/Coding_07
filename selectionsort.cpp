//it performs lesser writes as compared to other sorting algorithms
//works on the basis of heap sort just difference is of data structure it uses

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
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[min]>a[j])
            {
                min=j;
            }
        }
        swap(a[min],a[i]);
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