#include <iostream>
using namespace std;
class fact
{
    public:
    int factorial(int n)
    {
         if(n==0)
         {
            return 1;
         }
         return n*factorial(n-1);
    }
};
int main()
{
    int n;
    cin>>n;
    fact obj;
   int ans= obj.factorial(n);
   cout<<ans;
}