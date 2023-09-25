#include<iostream>
using namespace std;
#include<process.h>
#define lim 100

class SafeArray
{
    private:
        int arr[lim];
    public:
        int& operator [](int n)
        {
            if(n<0 || n>lim)
            {cout<<"\nIndex out of bounds"; exit(1);}
            return arr[n];
        }

};

int main()
{
    SafeArray arr1;
    int i,m;
    cout<<"Enter the no. of elements:";
    cin>>m;
    for(i = 0 ; i < m; i++ )
    {
        arr1[i] = i*10;
    }
    for(i = 0 ; i < m; i++ )
    {
        // int temp = arr1[i];
        cout<<"Element no "<<i<<" is : "<< arr1[i] <<endl; 
    }

    return 0;
}