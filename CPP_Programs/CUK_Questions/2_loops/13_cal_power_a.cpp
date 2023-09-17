#include<iostream>
using namespace std;

float power(int a, float b)
{   
    int i;
    float prod = b;
    for(i=1; i < a ; i++ )
    {
        prod *= b;
    }
    return prod;
}

int main()
{
    int n;
    float x;
    cout<<"Enter base : ";
    cin>>x;
    cout<<"Enter exponent : ";
    cin>>n;
    cout<<"The power is : "<<power(n,x)<<endl;
    return 0;
}