#include<iostream>
using namespace std;

int main()
{
    int i,j; 
    int arr[2][3]{1,2,3,4,5,6};
    for(i=0 ; i<2 ; i++)
    {
        for(j=0 ; i<3 ; j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }
    return 0;
}