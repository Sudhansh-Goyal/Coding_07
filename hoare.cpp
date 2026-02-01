//in general hoare partition is much better than lomuto partition as it can perform the same operation in lesser number of steps
//both of them are not stable algorithms 
//in this starting element is considered as the pivot
#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    int hoare(vector <int>& arr,int n)
    {
       int i=-1;
       int j=n;
       int pivot=arr[0];
       while(true) 
       {
        do
        {
            i++;
        }
        while(arr[i]<pivot);
        do
        {
            j--;
        }
        while(arr[j]>pivot);
        
        if(i>=j)
        {
          return j;
        }
        swap(arr[i],arr[j]);
       }
    }

};
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
         arr[i]=a;
    }
    solution obj;
    int ans=obj.hoare(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<ans;
}