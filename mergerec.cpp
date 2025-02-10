#include <iostream>
using namespace std;
void merge(int ar[],int s,int e)
{
    int m=(s+e)/2;
    int l1=m-s+1;
    int l2=e-m;
    int ar1[l1];
    int ar2[l2];
    int k=s;
    for(int i=0;i<l1;i++)
    {
        ar1[i]=ar[s+i];
    }
    k=m+1;
    for(int i=0;i<l2;i++)
    {
        ar2[i]=ar[m+1+i];
    }
    int index1=0;
    int index2=0;
    int fi=s;
    while(index1<l1 && index2<l2)
    {
        if(ar1[index1]<ar2[index2])
        {
            ar[fi++]=ar1[index1++];
        }
        else{
            ar[fi++]=ar2[index2++];
        }
      
    }
    while(index1<l1)
    {
        ar[fi++]=ar1[index1++];
    }
    while(index2<l2)
    {
        ar[fi++]=ar2[index2++];
    }
   
}
void mergesort(int ar[],int s,int e)
{
    if(s>=e)
    {
        return;
    }
    int m=(s+e)/2;
    mergesort(ar,s,m);
    mergesort(ar,m+1,e);
    merge(ar,s,e);
}
int  main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    mergesort(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}