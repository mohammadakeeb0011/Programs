#include<iostream>
using namespace std;

int main()
{
    float cp,sp,profit;
    cout<<"Enter the Cost Price: ";
    cin>>cp;
    cout<<"\nEnter the Selling Price: ";
    cin>>sp;
    profit = sp - cp;
    cout<<"\nThe Profit: "<<profit<<" Rs";
    return 0;
}