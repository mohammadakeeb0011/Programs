#include<iostream>
using namespace std;

int main()
{
    int n,i,j,temp;
    cout<<"Enter the no. of elements of array : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }

    for(i=0; i<= (n-2) ; i++)
    {
        for(j=i+1;j>0;j--)
        {
            if(arr[j] < arr[j-1])
            {
                temp     = arr[j];
                arr[j]   = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
    cout<<endl<<"The sorted array is:"<<endl;
    for(i=0; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}