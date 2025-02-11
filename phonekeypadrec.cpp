#include <iostream>
#include <vector>
using namespace std;
class Solution {
    public:
        void solve(string s,string output,int index,vector <string>& ans,string mapping[])
        {
            if(index>=s.length())
    
            {
                ans.push_back(output);
                return;
            }
            int num=s[index]-'0';
            string value=mapping[num];
            for(int i=0;i<value.length();i++)
            {
                output.push_back(value[i]);
                solve(s,output,index+1,ans,mapping);
                output.pop_back();
    
            }
        }
        vector<string> letterCombinations(string digits) {
            vector <string> ans;
            if(digits=="")
            {
                return ans;
            }
            int index=0;
            string output="";
            string mapping [10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
            solve(digits,output,index,ans,mapping);
            return ans;
        }
    };
    int main()
{
    string s;
    getline(cin,s);
    vector <string> a;   
    Solution obj;
    a=obj.letterCombinations(s);
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<",";
    }
}