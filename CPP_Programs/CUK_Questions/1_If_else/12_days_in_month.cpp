#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter any month(from 1 - 12): "<<endl;
    cin>>a;

    if( a%2 == 0)
        switch (a)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout<<"This month has 31 days in it.";
            break;
        case 2:
            cout<<"This month has 28 days in it.";
            break;
        case 4:
        case 6:
        case 9:
            cout<<"This month has 30 days in it.";
            break;
        default:
            cout<<"You have not entered a valid month number.";
            break;
        }

    return 0;
}