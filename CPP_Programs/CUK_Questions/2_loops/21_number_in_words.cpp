#include<iostream>
#include<string>
// #include<cmath>
using namespace std;

int main()
{
    int n,r,q,i,num=0;
    string a;
    cout<<"Enter any number : ";
    cin>>n;
    q=n;
    // num_digits = (int)log10(n) + 1;
    while(q != 0)
    {
        num = (num * 10) + (q % 10);
        q /= 10;
    }
    q = num;
    while(q>0)
    {
        r = q%10;
        switch (r)
        {
        case 0:
            a +="Zero ";
            break;
        case 1:
            a +="One ";
            break;
        case 2:
            a +="Two ";
            break;
        case 3:
            a +="Three ";
            break;
        case 4:
            a +="Four ";
            break;
        case 5:
            a +="Five ";
            break;
        case 6:
            a +="Six ";
            break;
        case 7:
            a +="Seven ";
            break;
        case 8:
            a +="Eight ";
            break;
        case 9:
            a +="Nine ";
            break;
        }
        q /=10;
        
    }
    cout<<a<<endl;

    return 0;
}