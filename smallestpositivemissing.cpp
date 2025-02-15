#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
  public:
    int missingNumber(vector<int> &arr) {
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0 || arr[i]>n) {
                arr[i] = 0;
            }
        }

        int c = 0;
        sort(arr.begin(), arr.end()); 

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                c++;
            }
        }

        vector<int> a1;
        if(arr[0]>0)
        {
        a1.push_back(arr[0]);
        }
    
        for (int i = 1; i < n; i++) {
            if (arr[i - 1] != arr[i] && arr[i]>0) {
                a1.push_back(arr[i]);
              
            }
        }
        int k=a1.size();
        for (int i = 0; i < k; i++) {
            if (a1[i] != i + 1) {
                return i + 1;
            }
        }

        return k + 1;
    } 
};


 int missingNumber(int arr[], int n);

int main() {

    int n;
    cin>>n;
    vector <int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

        Solution ob;
        int result = ob.missingNumber(arr);
        cout << result << "\n";
    }
  

// } Driver Code Ends