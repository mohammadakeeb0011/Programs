#include<iostream>
using namespace std;
void reverse_an_array(int arr[],int n);
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
    reverse_an_array(arr,n);
    return 0;

}
void reverse_an_array(int arr[],int n)
{
    int i,j,temp;
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
    return;
}