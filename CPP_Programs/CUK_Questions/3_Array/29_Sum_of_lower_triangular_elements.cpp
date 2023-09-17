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
    if(m == n)
    {
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
            if(i>j)
            sum += arr[i][j];
        }
    }
    cout<<endl<<"Sum of lower triangular elements of an array : "<<sum<<endl;
    }
    else
    cout<<endl<<"The given matrix is not square matrix"<<endl;
    
 
    return 0;
}