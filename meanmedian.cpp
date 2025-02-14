#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int median(int A[],int N)
    {
         float ed;int m1;
        sort(A,A+N);
        if(N%2!=0)
        {
            ed=A[N/2];
            m1=ed;
            return m1;
        }
        else
        {
            ed=(A[N/2-1] +A[N/2])/2.0;
            m1=floor(ed);
            return m1;
        }
   }
    
    int mean(int A[],int N)
    {
        int sum=0;
         for(int i=0;i<N;i++)
         {
             sum=sum+A[i];
         }
         int m=sum/N;
         return m;
    }
};



int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    Solution obj;
    obj.mean(ar,n);
    obj.median(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i];
    }
}