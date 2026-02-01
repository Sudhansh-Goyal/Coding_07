#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    void lomuto(vector <int>& arr,int n)
    {
        int pvt=arr[n-1];
        int i=-1;
        for(int j=0;j<n-1;j++)
        {
            if(arr[j]<pvt)
            {
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[n-1]);

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
    obj.lomuto(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}