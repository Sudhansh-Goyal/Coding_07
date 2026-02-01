
#include <iostream>
#include <string>
using namespace std;
class check
{
    public:
    int val(string s1)
    {
        int s=0;
        int e=s1.length()-1;
        while(s<e)
        {
            if(s1[s]==s1[e])
            {
                s++;
            e--;
            }
            else{
                return 0;
            }
            
        }
        return 1;
    }
};
int main()
{
    string s1;
    cin>>s1;
    check obj;
    int ans=obj.val(s1);
    if(ans==1)
    {
        cout<<"it is a palindrome";
    }
    else
    {
        cout<<"it is not a palindrome";
    }
}