#include<iostream>
#include "Distance.cpp"
using namespace std;

int main()
{
    Distance d1,d3;
    Distance d2(9,7.3);
    d1.get();
    cout<<"\nD1 no arg       = ";d1.display();
    cout<<"\nD2(9 ,7.3)         = ";d2.display();
    d3 = d1 + d2;                                       //  + op
    cout<<"\nD3= D1 + D2     = ";d3.display();
    Distance d4(5,6.5);                                 //  constructor
    cout<<"\nD4(5,6.5)       = ";d4.display();
    d4 = d1++ + ++d2;                                   //  ++A , + ,A++   op     // check
    cout<<"\nD1++            = ";d1.display();
    cout<<"\n++D2            = ";d2.display();
    cout<<"\nD4= D1++ + ++D2 = ";d4.display();
    if(d4 > d3)                                         // > op
    {
        cout<<"\nD4 > D3 is TRUE";
    }
    else
    cout<<"\nD4 < D3 is FALSE";

    if(d3 < d4)                                         // < op
    {
        cout<<"\nD3 < D4 is TRUE";
    }
    else
    cout<<"\nD3 > D4 is FALSE";

    d4 += d3;                                           // += op
    cout<<"\nD4 += D3        = ";d4.display();
    d4 -= d3;                                           // -= op
    cout<<"\nD4 -= D3        = ";d4.display();

    return 0;
}

