#include <iostream>
using namespace std;
class hello
{
    public:
    char temp;
    string reverse(string s,int start,int end)
    {
        if(start>end)
        {
            return s;
        }
        temp=s[start];
        s[start]=s[end];
        s[end]=temp;
        return reverse(s,start+1,end-1);
    }
};
int main()
{
    string s;
    getline(cin,s);
    hello obj;
    int start=0;int end=s.size();
    string ans=obj.reverse(s,start,end-1);
    cout<<ans;
}