#include<iostream>
using namespace std;

int main()
{
    int n,i,sum =0;
    cout<<"Enter the no. of elements of array : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    
    for(i=0; i<n ; i++)
    {   
        if(arr[i]%2 == 0)
        sum = sum + arr[i];
    }

    cout<<endl<<"The sum of even numbers of array is : "<<sum;
    

    
    return 0;
}