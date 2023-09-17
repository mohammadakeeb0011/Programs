#include<iostream>
using namespace std;

int main()
{
    int n,m,i,sum =0, sum2 =0;
    cout<<"Enter the no. of elements of array 1 : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<"Enter the no. of elements of array 2 : ";
    cin>>m;
    int arr2[m];
    for(i=0; i<m ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr2[i];
    }
    for(i=0; i<n ; i++)
    {
        sum = sum + arr[i];
    }
    for(i=0; i<m ; i++)
    {
        sum2 = sum2 + arr2[i];
    }

    if(sum > sum2)
    cout<<endl<<"Sum of array 1 is greater than array 2";
    else if(sum < sum2)
    cout<<endl<<"Sum of array 1 is less than array 2";
    else if(sum == sum2)
    cout<<endl<<"Sum of array 1 is equal to array 2";

    
    return 0;
}