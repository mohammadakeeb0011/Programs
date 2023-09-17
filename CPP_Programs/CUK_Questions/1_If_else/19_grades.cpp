#include<iostream>
using namespace std;
#define maxmaks 500.00

int main()
{
    float phy,chem,bio,mat,comp,total,per;
    cout<<"Enter the maks of subjects."<<endl;
    cout<<"Physics : ";
    cin>>phy;
    cout<<"\nChemistry : ";
    cin>>chem;
    cout<<"\nBiology : ";
    cin>>bio;
    cout<<"\nMathematics : ";
    cin>>mat;
    cout<<"\nComputer : ";
    cin>>comp;
    total = phy + chem + bio + mat + comp;
    cout<<"Total marks obtained out of 500 : "<<total<<endl;
    cout<<"You got grade ";
    per = total/maxmaks * 100;
    int a = per/10;
    switch (a)
    {
    case 10:
    case 9 :
        cout<<"Grade A"<<endl;
        break;
    case 8 :
        cout<<"Grade B"<<endl;
        break;
    case 7 :
        cout<<"Grade C"<<endl;
        break;
    case 6 :
        cout<<"Grade D"<<endl;
        break;
    case 5 :
    case 4 :
        cout<<"Grade E"<<endl;
        break;
    default:
        cout<<"Grade F"<<endl;
        break;
    }
    return 0;
}