#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        void solve(vector <int> n,int index,vector <vector<int>> &ans)
        {
            if(index>=n.size())
            {
                ans.push_back(n);
                return;
            }
            for(int i=index;i<n.size();i++)
            {
                swap(n[index],n[i]);
                solve(n,index+1, ans);
                swap(n[i],n[index]);
            }
    
        }
    public:
        vector<vector<int>> permute(vector<int>& nums) {
            vector<vector<int>> ans;
            int index=0;
            solve(nums,index,ans);
            return ans;
        }
    };
int main()
{
    int n;
    cin>>n;
    vector <int> n1(n);
    for(int i=0;i<n;i++)
    {
        cin>>n1[i];
    }
    Solution obj;
    vector<vector <int>> ans=obj.permute(n1);
    for(int i=0;i<ans.size();i++)
    {
        cout<<"[";
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j];
            if(j<ans[i].size()-1)
            {
                cout<<",";

            }
        }
        cout<<"]";
    }
}