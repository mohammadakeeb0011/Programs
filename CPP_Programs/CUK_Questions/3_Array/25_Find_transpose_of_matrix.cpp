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
    cout<<endl<<"The given matrix is : "<<endl;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
        int arr2[n][m];
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                arr2[j][i] = arr[i][j];
            }
        }
    cout<<endl<<"Transpose of matrix is : "<<endl;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}