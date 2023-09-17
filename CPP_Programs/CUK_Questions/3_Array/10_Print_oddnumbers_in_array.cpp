#include<iostream>
using namespace std;

int main()
{
    int n,i;
    cout<<"Enter the no. of elements of array : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"The odd numbers in array is : "<<endl;
    for(i=0; i<n ; i++)
    {   
        if(arr[i]%2 != 0)
        cout<<arr[i]<<" ";
    }

    
    

    
    return 0;
}