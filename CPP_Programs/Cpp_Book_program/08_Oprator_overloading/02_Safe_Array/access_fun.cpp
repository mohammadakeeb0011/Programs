#include<iostream>
using namespace std;
#include<process.h>
#define lim 100

class SafeArray
{
    private:
        int arr[lim];
    public:
        void putel(int n,int el)                                        // Function for input
        {
            if(0 > n || n >= lim)                                       // checking bounds
                {cout<<"\nIndex out of bounds"; exit(1);}
            arr[n]=el;
        }
        int getel(int n)                                               // Function for output
        {
            if(0 > n || n >= lim)
                {cout<<"\nIndex out of bounds"; exit(1);}
            return arr[n];
        }

};

int main()
{
    SafeArray arr;
    int i,m,p;
    cout<<"Enter the no. of elements:";
    cin>>m;
    for(i = 0 ; i < m; i++ )
    {
        cin>>p;
        arr.putel(i, p);
    }
    for(i = 0 ; i < m; i++ )
    {
        cout<<"Element no "<<i<<" is : "<< arr.getel(i)<<endl;
    }

    return 0;
}