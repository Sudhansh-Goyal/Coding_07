#include <iostream>
using namespace std;
class stair
{
    public:
    int val(int n)
    {
        if(n<0)
        {
            return 0;
        }
        if(n==0)
        {
            return 1;
        }
        return val(n-1)+val(n-2);
    }

};
int main()
{
    int n;
    cin>>n;
    stair obj;
    int res=obj.val(n);
    cout<<res;
}