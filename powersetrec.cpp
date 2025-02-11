#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void solve(vector <int> num,vector <int> output,int index,vector<vector<int>> &ans)
    {
        if(index>=num.size())
        {
            ans.push_back(output);
            return;
        }
        solve(num,output,index+1,ans);
        int element=num[index];
        output.push_back(element);
        solve(num,output,index+1,ans);
    }
    public:
    vector <vector <int>> sol(vector <int> num)
    {
        vector <vector <int>> ans;
        int index=0;
        vector <int> output;
        solve(num,output,index,ans);
        return ans;
    }
};
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector <int> num(n);
    for(int i=0;i<n;i++)
    {
        cin>>num[i];
    }
    Solution obj;
    vector <vector <int>> a=obj.sol(num);    
    for(int i=0;i<a.size();i++)
    {
        cout<<"{";
        for(int j=0;j<a[i].size();j++)
        {
            cout<<a[i][j];
            if(j<a[i].size()-1)
            {
                cout<<",";
            }
        }
        cout<<"},";
        // cout<<endl;
    }
}