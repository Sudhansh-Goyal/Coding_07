#include <iostream>
using namespace std;
class rec
{
    public:
    int power(int n)
    {
       if(n==0)
       {
        return 1;
       }
       return 2*power(n-1);
    }
};
int main()
{
    rec obj;
    int n;
    cin>>n;
   int ans= obj.power(n);
   cout<<ans;
}