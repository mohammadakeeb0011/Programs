#include<iostream>
using namespace std;

int main()
{   
    int a,b,c,d,e,f,g,h,i,j,k;
    a=b=c=d=e=f=g=h=i=j=k=0;
    int amount,temp;

    cout<<"Enter the amount of rupees : ";
    cin>>amount;

    cout<<"The given amount is : "<<amount<<endl;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    if( amount > 0)
    {
        if(amount == 1)
        a = 1;
        else if(amount == 2)
        b = 1;
        else if(amount < 5)
        {
            a = amount % 2;
            b = amount / 2;
        }
        else if(amount == 5)
        c = 1;
        else if(amount < 10)
        {
            c = amount / 5;
            temp = amount % 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 10)
        d = 1;
        else if(amount < 20)
        {
            d = amount / 10;
            temp = amount % 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 20)
        e = 1;
        else if(amount < 50)
        {
            e = amount / 20;
            temp = amount % 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 50)
        f = 1;
        else if(amount < 100)
        {
            f = amount / 50;
            temp = amount % 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 100)
        g = 1;
        else if(amount < 200)
        {   
            g = amount / 100;
            temp = amount % 100;
            f = temp / 50;
            temp %= 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 200)
        h = 1;
        else if(amount < 500)
        {   
            h = amount / 200;
            temp = amount % 200;
            g = temp / 100;
            temp %= 100;
            f = temp / 50;
            temp %= 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 500)
        i = 1;
        else if(amount < 1000)
        {   
            i = amount / 500;
            temp = amount % 500;
            h = temp / 200;
            temp %= 200;
            g = temp / 100;
            temp %= 100;
            f = temp / 50;
            temp %= 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 1000)
        j = 1;
        else if(amount < 2000)
        {   
            j = amount / 1000;
            temp = amount % 1000;
            i = temp / 500;
            temp %= 500;
            h = temp / 200;
            temp %= 200;
            g = temp / 100;
            temp %= 100;
            f = temp / 50;
            temp %= 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }
        else if(amount == 2000)
        k = 1;
        else if(amount > 2000)
        {   
            k = amount / 2000;
            temp = amount % 2000;
            j = temp / 1000;
            temp %= 1000;
            i = temp / 500;
            temp %= 500;
            h = temp / 200;
            temp %= 200;
            g = temp / 100;
            temp %= 100;
            f = temp / 50;
            temp %= 50;
            e = temp / 20;
            temp %= 20;
            d = temp / 10;
            temp %= 10;
            c = temp / 5;
            temp %= 5;
            b = temp / 2;
            a = temp % 2;
        }



    }
    cout<<"One          (   1) rupee notes are : "<<a<<"* 1   = "<<a*1<<endl;
    cout<<"Two          (   2) rupee notes are : "<<b<<"* 2   = "<<b*2<<endl;
    cout<<"Five         (   5) rupee notes are : "<<c<<"* 5   = "<<c*5<<endl;
    cout<<"Ten          (  10) rupee notes are : "<<d<<"*10   = "<<d*10<<endl;
    cout<<"Twenty       (  20) rupee notes are : "<<e<<"*20   = "<<e*20<<endl;
    cout<<"Fifty        (  50) rupee notes are : "<<f<<"*50   = "<<f*50<<endl;
    cout<<"Hundred      ( 100) rupee notes are : "<<g<<"*100  = "<<g*100<<endl;
    cout<<"Two Hundred  ( 200) rupee notes are : "<<h<<"*200  = "<<h*200<<endl;
    cout<<"Five Hundred ( 500) rupee notes are : "<<i<<"*500  = "<<i*500<<endl;
    cout<<"Thousand     (1000) rupee notes are : "<<j<<"*1000 = "<<j*1000<<endl;
    cout<<"Two Thousand (2000) rupee notes are : "<<k<<"*2000 = "<<k*2000<<endl;

    return 0;
}