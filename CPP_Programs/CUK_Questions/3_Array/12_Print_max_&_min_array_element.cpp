#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n,i;
    long min = LONG_MAX, max = LONG_MIN;
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
        if(arr[i] < min)
        min = arr[i];
        else if(arr[i]> max)
        max = arr[i];
    }

    cout<<"Max value : "<<max<<endl;
    cout<<"Min value : "<<min<<endl;



    return 0;
}