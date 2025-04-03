//in place and stable
//best case time complexity is big O n square and worst case big O N square
#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    void insertion(vector <int>& a)
    {
       int n=a.size();
       for(int i=1;i<n;i++)
       {
         int key=a[i];
         int j=i-1;
         while(j>=0 && a[j]>key)
         {
            a[j+1]=a[j];
            j--;
         }
         a[j+1]=key;
       }
    }
};
int main()
{
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    solution obj;
    obj.insertion(v);
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
}