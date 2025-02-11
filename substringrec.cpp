#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    void solve(string s,string output,int index,vector <string> &ans)
    {
        if(index>=s.length())
        {
            ans.push_back(output);
            return;
        }
        solve(s,output,index+1,ans);
        char element=s[index];
        output.push_back(element);
        solve(s,output,index+1,ans); //bacltracking to get back the original result
    }
    vector <string> sol(string s)
    {
        vector <string> ans;
        int index=0;
        string output;
        solve(s,output,index,ans);
        return ans;
    }
};
int main()
{
    string s;
    getline(cin,s);
    vector <string> a;   
    Solution obj; 
    a=obj.sol(s);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<",";
    }
}