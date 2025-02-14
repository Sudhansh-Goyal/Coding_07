
#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
       int n = arr.size();
        if (n == 1) return 0; // If only one element, it's always an equilibrium
        
        int totalSum = 0, leftSum = 0;
        
        // Step 1: Compute total sum of the array
        for (int num : arr) {
            totalSum += num;
        }
        
        // Step 2: Find equilibrium index
        for (int i = 0; i < n; i++) {
            totalSum -= arr[i]; // This now acts as right sum
            
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

