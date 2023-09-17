#include<iostream>
using namespace std;

int main()
{
    char i;
    for(i=' ';i<=126;i++)
    cout<<i<<"   "<<(int)i<<endl;
    cout<<"\n\n";
    i =' ';
    while(i<=126)
    {
        cout<<i<<"   "<<(int)i<<endl;
        i++;
    }
    return 0;
}