#include <iostream>
using namespace std;
template <typename T>
class vector
{
    public:
    T* arr;
    int l;
    vector(int n)
    {
        l=n;
        arr=new T[l];
    }
    void input()
    {
        for(int i=0;i<l;i++)
        {
            cin>>arr[i];
        }
    }
    template <typename U>
    //this is the template that we defined for a function
    double dotpro(vector<U> &v2)
    {

        double d=0;
        for(int i=0;i<l;i++)
        {
            d+= this->arr[i]* v2.arr[i];
        }
        return d;
    }
};
int main()
{
    int n;
    cin>>n;
    vector<int> obj(n);
    obj.input();

    vector<float> obj2(n);
    obj2.input();
    double a=obj.dotpro(obj2);
    cout<<a;
    
}

//always the exact match is executed first
