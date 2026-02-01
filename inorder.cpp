#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> ans;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        ans.push_back(a);
    }
    int s=0;
    int e=0;
    int start=0;
    int currsum=ans[0];
    int maxsum=ans[0];
    for(int i=1;i< ans.size();i++)
    {
        if(currsum + ans[i]<ans[i])
        {
            currsum=ans[i];
            s=i;
        }
        else
        {
            currsum=currsum+ans[i];
        }
        if(currsum>maxsum)
        {
            maxsum=currsum;
            start=s;
            e=i;
        }
    }
    for(int j=start;j<=e;j++)
    {
        cout<<ans[j]<< " ";
    }
}