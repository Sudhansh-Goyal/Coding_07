#include <iostream>
using namespace std;

class Vector {
public:
    int arr[100]; 
    int l;

  
    Vector(int inputArr[], int n) {
        l = n; 
        for (int i = 0; i < l; i++) {
            arr[i] = inputArr[i]; 
        }
    }


    bool display( int arr[],int n,int k) {
        if(n==0)
        {
            return false;
        }
        if(arr[n-1]==k)
        {
            return true;
        }
        return display(arr,n-1,k);
    }
};

int main() {
    int n,k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cin>>k;
    int inputArr[100];
    cout << "Enter " << n << " elements: ";
    
    for (int i = 0; i < n; i++) {
        cin >> inputArr[i];
    }

   
    Vector obj(inputArr, n);
    
    cout << "Stored elements: ";
    bool result=obj.display(inputArr,n,k);
    cout<<result;
    return 0;
}
