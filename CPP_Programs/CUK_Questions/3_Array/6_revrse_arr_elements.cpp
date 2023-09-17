#include<iostream>
using namespace std;

int main()
{
    int n,i,j;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    int temp;
    for(i=0,j=n-1; i<j ;i++,j--)
    {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    cout<<endl<<"Reverse of array: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"     ";
    }

    return 0;

}