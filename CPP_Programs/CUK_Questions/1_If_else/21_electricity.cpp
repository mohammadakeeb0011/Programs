#include<iostream>
using namespace std;

int main()
{   
    short n;
    float total_bill,net;
    cout<<"Enter number of units consumed : ";
    cin>>n;

    if(n>=0)
    {
        if(n<=50)
        total_bill = n*0.50;
        else if(n<=150)
        total_bill = (50*0.5) + (n-50)*(0.75);
        else if(n<=250)
        total_bill = (50*0.5) + (100*0.75) +(n-150)*1.20;
        else
        total_bill = (50*0.5) + (100*0.75) + (100*1.20) + (n - 250)*1.50;
    }
    else
    cout<<"Units can't be negative!"<<endl;
    
    net = total_bill + (total_bill*20)/100;

    cout<<"Your net bill is : "<<net<<endl;

    return 0;
}