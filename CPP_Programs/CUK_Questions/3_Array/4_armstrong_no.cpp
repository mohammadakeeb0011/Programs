#include<iostream>
using namespace std;

int armstrong(int);

int main()
{
    int i,n,a;
    cout<<"Enter the no. of elements: ";
    cin>>n;

    int arr[n];

    for(i=0; i<n ;i++)
    {
        cout<<"\nEnter the element arr["<<i<<"] :";
        cin>>arr[i];
    }
    for(i=0; i<n ; i++)
    {
        a = armstrong(arr[i]);
        if(a == 0)
        {
            cout<<"\n\nEnter the element "<< arr[i] <<" is an armstrong number";
        }
        else if( a == 1)
        {
            cout<<"\n\nEnter the element "<< arr[i] <<" is not an armstrong number";
        }

    }
    cout<<"\n\n";
    return 0;
}

int armstrong(int n)
{
    int a=0, r,q;

    q =n;

    while(q != 0)
    {
        r = q%10;
        a = a + (r*r*r);
        q = q/10;
    }
    if( a==n)
    return 0;
    else
    return 1;
}