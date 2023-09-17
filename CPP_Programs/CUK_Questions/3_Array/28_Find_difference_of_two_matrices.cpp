#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;



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

    cout<<endl<<"Enter the elements of arr2: ";
    int arr2[m][n];
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<endl<<"A2["<<i<<"]["<<j<<"] = ";
            cin>>arr2[i][j];
        }
    }



    int diff[m][n] = {0};

    cout<<endl<<"The difference matrix is"<<endl;

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            diff[i][j] = arr[i][j] - arr2[i][j]; 
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<diff[i][j]<<" "; 
        }
        cout<<endl;
    }
    
    return 0;
}