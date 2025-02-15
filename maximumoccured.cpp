#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
   
    int maxOccured(int n, int l[], int r[], int maxx) {

        int fre[maxx]={0};
        for(int i=0;i<n;i++)
        {
            fre[l[i]]++;
            fre[r[i]+1]--;
        }
        int res=0;
        for(int i=1;i<maxx;i++)
        {
            fre[i]=fre[i]+fre[i-1];
            if(fre[i]>fre[res])
            {
                res=i;
            }
        }
        return res;
    }
};


int main() {

        int n;

        
        cin >> n;
        int l[n];
        int r[n];

        for (int i = 0; i < n; i++) {
            cin >> l[i];
        }

        int maxx = 0;

       
        for (int i = 0; i < n; i++) {

            cin >> r[i];
            if (r[i] > maxx) {
                maxx = r[i];
            }
        }
        Solution ob;

        
        cout << ob.maxOccured(n, l, r, maxx) << endl;

       
    

    
}
