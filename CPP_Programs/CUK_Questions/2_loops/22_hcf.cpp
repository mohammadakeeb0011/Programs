#include<iostream>
using namespace std;
int main()
{
        int a, b, x, y, temp, hcf;
        cout<<"\n Enter Two Numbers : \n";
        cin>>x>>y;
        a=x;
        b=y;
        while(b!=0)
        {
                temp=b;
                b=a%b;
                a=temp;
        }
        hcf=a;
        cout<<"\n HCF : "<<hcf<<"\n";
        return 0;
}