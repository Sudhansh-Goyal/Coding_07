#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public:
    bool issafe(vector <vector <int>> inp,vector <vector <int>>visited,int newx,int newy,int n)
    {
        if((newx>=0 && newx<n) && (newy>=0 && newy<n) && visited[newx][newy]==0 && inp[newx][newy]==1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    public:
    void sol(int n,int srcx,int srcy,vector <vector <int>> inp,vector <vector <int>> visited,vector <string> &ans,string path)
    {
        if(srcx==n-1 && srcy==n-1)
        {
            ans.push_back(path);
            return;
        }
        visited[srcx][srcy]=1;
        int newx=srcx+1;
        int newy=srcy;
        if(issafe(inp,visited,newx,newy,n))
        {
            path.push_back('D');
            sol(n,newx,newy,inp,visited,ans,path);
            path.pop_back();
        }

        newx=srcx;
        newy=srcy-1;
        if(issafe(inp,visited,newx,newy,n))
        {
            path.push_back('L');
            sol(n,newx,newy,inp,visited,ans,path);
            path.pop_back();
        }

        newx=srcx;
        newy=srcy+1;
        if(issafe(inp,visited,newx,newy,n))
        {
            path.push_back('R');
            sol(n,newx,newy,inp,visited,ans,path);
            path.pop_back();
        }

        newx=srcx-1;
        newy=srcy;
        if(issafe(inp,visited,newx,newy,n))
        {
            path.push_back('U');
            sol(n,newx,newy,inp,visited,ans,path);
            path.pop_back();
        }
        
        
    }
    public:
    vector <string> solve(int n,vector <vector <int>> inp)
    {
        vector <vector <int>> visited(n, vector<int>(n));
        for(int i=0;i<n;i++)
        {
          for(int j=0;j<n;j++)
          {
            visited[i][j]=0;
          }
        }
        int srcx=0;
        int srcy=0;
        string path="";
        vector <string> ans;
        sol(n,srcx,srcy,inp,visited,ans,path);
        return ans;
    }

};
int main()
{
    int n;
    
    cin>>n;
    vector <vector <int>> inp(n, vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>inp[i][j];
        }
    }
    Solution obj;
    vector <string> ans1=obj.solve(n,inp);
    for(int i=0;i<ans1.size();i++)
    {
        cout<<ans1[i]<<" ";
    }

}