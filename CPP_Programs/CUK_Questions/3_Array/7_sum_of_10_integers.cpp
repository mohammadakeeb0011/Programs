#include<iostream>
using namespace std;

int main()
{
    int i,sum =0;
    int arr[9];
    for(i=0; i<9 ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    for(i=0; i<9 ; i++)
    {
        sum = sum + arr[i];
    }

    cout<<"Sum of 10 integers is: "<<sum<<endl;

    
    return 0;
}