#include<iostream>
using namespace std;

int main()
{
    int n,i,j,num;
    bool a=false;
    cout<<"Enter the no. of elements of array : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }
    cout<<endl<<"Enter the number you want to search : ";
    cin>>num;

    for(i=0; i<n ;i++)
    {
        if(arr[i] == num)
        {
            cout<<"The element found at index ["<<i<<"]"<<endl;
            a = true;
        }
    }
    if(!a)
    cout<<endl<<"Number "<<num<<" not found "<<endl;

    return 0;
}