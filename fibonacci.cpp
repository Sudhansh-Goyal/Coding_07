#include <iostream>
using namespace std;
class rec
{
    public:
    int ans(int n)
    {
        if(n==0)
        {
            return 0;
        }
        if(n==1)
        {
            return 1;
        }
        return ans(n-1)+ans(n-2);
    }
};
int main()
{
    int n;
    cin>>n;
    rec obj;
   int result= obj.ans(n);
   cout<<result;
}