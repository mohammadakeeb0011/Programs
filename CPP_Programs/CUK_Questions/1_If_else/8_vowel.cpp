#include<iostream>
using namespace std;

int main()
{
    char a;
    cout<<"Enter any alphabet: "<<endl;
    cin>>a;

    if( (a<= 90 ) && (a>=65 ) || (a<=122 ) && (a>=97 ) ){
        switch (a)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout<<"The given alphabet "<<a<<" is a vowel"<<endl;
            break;
        
        default:
            cout<<"The given alphabet "<<a<<" is a consonant"<<endl;
            break;
        }
        
    }
    
    else
        cout<<"The given character "<<a<<" is not an alphabet"<<endl;

    return 0;
}