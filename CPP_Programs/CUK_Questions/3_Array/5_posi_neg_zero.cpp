#include<iostream>
using namespace std;
int main()
{   
    int n,i,m=0,p=0,q=0;
    cout<<"Enter the no. of elements : ";
    cin>>n;
    int arr[n];
    for(i=0; i<n ; i++)
    {
        cout<<"Enter element "<<i<<" : ";
        cin>>arr[i];
    }

    for(i=0; i<n ; i++)
    {
        if(arr[i] > 0)
        {
            m++;
        }
        else if(arr[i] < 0)
        {
            p++;
        }
        else if(arr[i] == 0)
        {
            q++;
        }
    }

    int positive_array[m], negative_arr[p], zero_arr[q];
    int j=0,k=0,l=0;

    for(i=0; i<n ; i++)
    {
        if(arr[i] > 0)
        {
            positive_array[j] = arr[i];
            j++;
        }
        else if(arr[i] < 0)
        {
            negative_arr[k] = arr[i];
            k++;
        }
        else if(arr[i] == 0)
        {
            zero_arr[l] = arr[i];
            l++;
        }
    }
    cout<<"Number of +ive elem: "<<m<<endl<<"Positive array :"<<endl;
    for(i=0;i<m;i++)
    {
        cout<<positive_array[i]<<"  ";
    }

    cout<<endl<<"Number of -ive elem: "<<p<<endl<<"Negative array :"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<negative_arr[i]<<"  ";
    }

    cout<<endl<<"Number of zeros elem: "<<q<<endl<<"Zero array :"<<endl;
    for(i=0;i<l;i++)
    {
        cout<<zero_arr[i]<<"  ";
    }
    cout<<endl;
    return 0;
}