#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
    public:
   
    bool triplets(vector <int> &v1)
    {
        sort(v1.begin(),v1.end());
        int n=v1.size();
        for(int i=0;i<n-2;i++)
        {
            int j=i+1;int k=n-1;
            while(j<k)
            {
                int sum=v1[i]+v1[j]+v1[k];
                if(sum<0)
                {
                    j++;        
                }
                else if(sum>0)
                {
                    k--;
                }
                else
                {
                    return true;
                }
            }
        }
        return false;
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
    solution obj;
    int h=n-1;
    bool ans= obj.triplets(v1);
    cout<<ans;
}

