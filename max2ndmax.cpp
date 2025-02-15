#include <iostream>
#include <vector>
using namespace std;
void max2max(vector <int> arr,int n)
{
    int max=arr[0];int max2=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max2=max;
            max=arr[i];
        }
        else if(arr[i]>max2 && arr[i]!=max)
        {
            max2=arr[i];
        }
    }
    cout<<max<<endl;
    cout<<max2;
}
int main()
{
    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max2max(arr,n);
}