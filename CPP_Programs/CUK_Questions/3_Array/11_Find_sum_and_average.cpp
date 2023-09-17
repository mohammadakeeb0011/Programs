#include<iostream>
using namespace std;

int main()
{
    int n,i;
    double sum =0.0;
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
        sum = sum + arr[i];
    }

    cout<<endl<<"SUM     : "<<sum<<endl;
    cout<<endl<<"AVERAGE : "<<sum/n<<endl;
    return 0;
}