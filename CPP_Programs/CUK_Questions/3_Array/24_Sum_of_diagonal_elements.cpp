#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    long sum = 0;


    cout<<"Enter the no. of rows of arr1: ";
    cin>>m;
    cout<<endl<<"Enter the no. of column of arr1: ";
    cin>>n;
    int arr[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<endl<<"A["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i == j)
            sum += arr[i][j];
        }
    }
    cout<<endl<<"Sum of all the elements of an array : "<<sum<<endl;
 
    return 0;
}