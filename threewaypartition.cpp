
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class solution
{
    public:
    void platform(vector <int>& arr)
    {
        int n=arr.size();
        int i=0;int m=0;int h=n-1;
        while(m<h)
        {
            if(arr[m]==1)
            {
                m++;
            }
            else if(arr[m]<1)
            {
                swap(arr[i],arr[m]);
                i++;
                m++;
            }
            else
            {
                swap(arr[h],arr[m]);
                h--;
            }
        }
    }
};
int main()
{
   int n;

   cin>>n;
  
   int a;
   vector <int> arr(n);

   for(int i=0;i<n;i++)
   {
     cin>>a;
     arr[i]=a;
   }
   
   solution obj;
   obj.platform(arr);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}