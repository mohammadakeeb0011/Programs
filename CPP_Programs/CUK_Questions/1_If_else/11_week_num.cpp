#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter week number from 1 - 7: "<<endl;
    int a;
    cin>>a;
        switch(a)
        {
            case 1:
            cout<<"Today is Sunday"<<endl;
            break;
            case 2:
            cout<<"Today is Monday"<<endl;
            break;
            case 3:
            cout<<"Today is Tuesday"<<endl;
            break;
            case 4:
            cout<<"Today is Wednesday"<<endl;
            break;
            case 5:
            cout<<"Today is Thursday"<<endl;
            break;
            case 6:
            cout<<"Today is Friday"<<endl;
            break;
            case 7:
            cout<<"Today is Saturday"<<endl;
            break;
            default:
            cout<<"You have not entered a valid day number!"<<endl;
        }
    return 0;
}