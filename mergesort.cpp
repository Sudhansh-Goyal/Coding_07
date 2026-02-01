#include <iostream>
#include <vector>
using namespace std;
class merge
{
    public:
    void merging(vector <int>&v1,int s,int mid,int l)
    {
        int s1=mid-s+1;
        vector <int> left(s1);
        int s2=l-mid;
        vector <int> right(s2);
        
       
        for (int i = 0; i < s1; i++)
            left[i] = v1[s + i];
        for (int j = 0; j < s2; j++)
            right[j] = v1[mid + 1 + j];
        int i=0;int j=0;int k=s;    
        while(i<s1 && j<s2)
        {
            if(left[i]<=right[j])
            {
                v1[k]=left[i];
                i++;
            }
            else{
                v1[k]=right[j];
                j++;
            }
            k++;
        }
            while(i<s1)
            {
                v1[k]=left[i];
                k++;
                i++;
            }
            while(j<s2)
            {
                v1[k]=right[j];
                k++;
                j++;
            }
        
        
    }
    void msort(vector <int> &v1,int s,int l)
    {
       if(s<l)
       {
        int mid=(s+l)/2;
        msort(v1,s,mid);
        msort(v1,mid+1,l);
        merging(v1,s,mid,l);
       }
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
    merge obj;
    int h=n-1;
     obj.msort(v1,0,h);
    for(int i=0;i<n;i++)
    {
        cout<<v1[i]<<" ";
    }
}

//time complexxity is nlogn
//number of steps required log base 2 n.
//space complexity is n