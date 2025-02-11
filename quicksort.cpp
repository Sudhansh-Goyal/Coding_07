#include <iostream>
using namespace std;
void swap(int &a,int &b)
{
     int temp=a;
     a=b;
     b=temp;
}
int partition(int ar[],int s,int e)
{
    int temp=0;
    int pivot=ar[s];int c=0;
    for(int i=s+1;i<=e;i++)
    {
        if(ar[i]<pivot)
        {
            c++;
        }
    }
    pivot=s+c;
    swap(ar[pivot],ar[s]);
    int i=s;int j=e;
    while(i<pivot && j>pivot)
    {
        while(ar[i]<ar[pivot])
        {
            i++;
        }
        while(ar[j]>ar[pivot])
        {
            j--;
        }
        if(i<pivot && j>pivot)
        {
            swap(ar[i],ar[j]);
            i++;
            j--;
        }
    }
    return pivot;
}
void quicksort(int ar[],int s,int e)
{
    if(s>=e)
    {
        return ;
    }
    int p=partition(ar,s,e);
    quicksort(ar,s,p-1);
    quicksort(ar,p+1,e);
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    quicksort(ar,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
}



// #include <iostream>
// using namespace std;

// void changeValue(int &a) { // Pass by reference
//     a = 10; // Changes original variable
// }

// int main() {
//     int x = 5;
//     changeValue(x);
//     cout << x << endl; // Output: 10 (changed)
// }



//so in the case of normal variables without array we will pass the function without passing & because it is by default call by reference