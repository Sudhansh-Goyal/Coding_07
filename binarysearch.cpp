#include <iostream>
#include <vector>
using namespace std;
class solution
{
    public:
    bool searchInSorted(vector<int>& arr, int k) {

        int start=0;int end=arr.size();int c=0;
        while(start<=end)
        {
            int middle=(start+end)/2;
            if(arr[middle]==k)
            {
                c=1;
                return true;
                break;
            }
            else if(arr[middle]>k)
            {
                end=middle-1;
            }
            else
            {
                start=middle+1;
            }
        }
        if(c==0)
        {
            return false;
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
        cin>>arr[i];
    }
    solution obj;
    int k;
    cin>>k;
    bool ans=obj.searchInSorted(arr,k);
    cout<<ans;
}