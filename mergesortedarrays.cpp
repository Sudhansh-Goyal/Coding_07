//works on divide and conquer alogrithm
//time complexity is nlogn
//it is outbeated by quick sort

#include <iostream>
#include <vector>
using namespace std;
class merge
{
    public:
    vector <int> msort(vector <int> v1,vector <int> v2)
    {
        int n=v1.size();
        int m=v2.size();
        vector <int> v3(m+n);
        int i=0;int j=0;int c=0;
        while(i<n && j<m)
        {
            if(v1[i]<=v2[j])
            {
                v3[c]=v1[i];
                i++;
                c++;
            }
            else
            {
                v3[c]=v2[j];
                j++;
                c++;
            }
            while(i<n)
            {
                v3[c]=v1[i];
                i++;
                c++;
            }
            while(j<m)
            {
                v3[c]=v2[j];
                j++;
                c++;
            }
        }
        return v3;
    }
};
int main()
{
    int n;int m;
    cin>>n;
    cin>>m;
    vector <int> v1(n);
    vector <int> v2(m);
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>v2[i];
    }
    merge obj;
   vector <int> v3= obj.msort(v1,v2);
    for(int i=0;i<n+m;i++)
    {
        cout<<v3[i]<<" ";
    }
}