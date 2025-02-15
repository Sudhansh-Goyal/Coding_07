
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    
    int findEquilibrium(vector<int> &arr) {
       int n = arr.size();
        if (n == 1) return 0;
        
        int totalSum = 0, leftSum = 0;
        
        
        for (int num : arr) {
            totalSum += num;
        }
        
            for (int i = 0; i < n; i++) {
            totalSum -= arr[i]; 
            
            if (leftSum == totalSum) {
                return i; 
            }
            
            leftSum += arr[i]; 
        }
        
        return -1; 
    }
};

//{ Driver Code Starts.

int main() {
    
        int number;
        vector<int> arr(number);
        for(int i=0;i<number;i++)
        {
           cin>>arr[i];
        }
           Solution ob;
           cout << ob.findEquilibrium(arr) << endl;
        
    }

