#include <iostream>
#include <vector>
using namespace std;
class sum
{
    public:
    vector <vector <int>> summation(vector <vector <int>> A,vector <vector <int>> B)
    {
        int r1=A.size();
        int c1=A[0].size();
        int r2=B.size();
        int c2=B[0].size();
        vector <vector<int>> ans(r1,vector <int> (c1,0));
        if(r1==r2 && c1==c2)
        {
        for(int i=0;i<r1;i++)
        {
            for(int j=0;j<c1;j++)
            {
                ans[i][j]=A[i][j]+B[i][j];
            }
        }
         return ans;
        }
        else
        {
            return {};
        }
    }

};
int main()
{
    int r1,r2,c1,c2;
    cin>>r1;
    cin>>c1;
    cin>>r2;
    cin>>c2;
    vector <vector<int>> a(r1,vector <int> (c1,0));
    vector <vector<int>> b(r1,vector <int> (c1,0));
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            int a1;
            cin>>a1;
            a[i][j]=a1;
        }
    }
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            int a1;
            cin>>a1;
            b[i][j]=a1;
        }
    }
    sum obj;
    vector <vector <int>> ans=obj.summation(a,b);
    if (ans.empty()) {
        cout << "Matrix addition not possible due to dimension mismatch." << endl;
    } else {
        for (int i = 0; i < ans.size(); i++) {
            for (int j = 0; j < ans[0].size(); j++) {
                cout << ans[i][j] << " ";
            }
            cout << endl;
        }
    }
}