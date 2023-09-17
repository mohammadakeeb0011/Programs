#include<iostream>
using namespace std;

int main()
{   
    int n;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    int max = 0 , min= 999999, i;
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    
    for(i = 0 ; i<n; i++)
    {
        if(arr[i]< min)
        {
            min = arr[i];
        }
        else
        max = arr[i];
    }

    cout<<"The minimum element in array is : "<<min<<endl;
    cout<<"The maximum element in array is : "<<max<<endl;


    return 0;
}