#include<iostream>
using namespace std;

int main()
{
    int m,n,i,j;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    cout<<endl<<"Enter the no. of column: ";
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
    int counter = 0;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i][j] == 0)
            counter++;
        }
    }
    cout<<endl<<"Number of zeroes ="<<counter<<endl;

    return 0;
}