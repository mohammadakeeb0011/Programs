#include<iostream>
using namespace std;

int main()
{
    int m,n,p,q,i,j;
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

    cout<<"Enter the no. of rows of arr2: ";
    cin>>p;
    cout<<endl<<"Enter the no. of column of arr2: ";
    cin>>q;

    if(n == p)
    {
        int arr2[p][q];
        for(i=0; i<m; i++)
        {
            for(j=0; j<n; j++)
            {
                cout<<endl<<"A2["<<i<<"]["<<j<<"] = ";
                cin>>arr2[i][j];
            }
        }



        int s=0,prod[m][q] = {0};

        cout<<endl<<"The product matrix is"<<endl;

        for(i=0; i<m; i++)
        {
            
            for(j=0; j<n; j++)
                {
                    s = s + arr[i][j]*arr2[j][i]; 
                }

        }
        
    }
    else
    cout<<endl<<"Matrix multiplication is not possible"<<endl;
    
    return 0;
}