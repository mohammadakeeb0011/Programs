#include<iostream>
using namespace std;

int main()
{
    char i;
    for(i='a';i<='z';i++)
    cout<<i<<"  ";
    cout<<"\n\n";
    i ='a';
    while(i<='z')
    {
        cout<<i<<"  ";
        i++;
    }
    return 0;
}