#include<iostream>
using namespace std;

float power(int a, float b)
{   
    int i;
    float prod = b;
    i=1;
    while(i < a)
    {
        prod *= b;
        i++;
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