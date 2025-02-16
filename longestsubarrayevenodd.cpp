#include<iostream> 
using namespace std; 

class Solution{
    public:
    int maxEvenOdd(int arr[], int n) 
    { 
        int curr=1;int res=1;
       for(int i=1;i<n;i++)
       {
           if((arr[i-1]%2==0 && arr[i]%2!=0) || (arr[i-1]%2!=0 && arr[i]%2==0))
           {
               curr++;
               res=max(res,curr);
           }
           else
           {
               curr=1;
           }
       }
       return res;
    } 
};

int main() 
{ 

    int sizeOfArray;
    cin>>sizeOfArray;
    int arr[sizeOfArray];
     for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
    Solution ob;
    cout  << ob.maxEvenOdd(arr, sizeOfArray)<<endl; 
    

}


