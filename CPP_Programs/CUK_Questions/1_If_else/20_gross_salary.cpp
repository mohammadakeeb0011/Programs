#include<iostream>
using namespace std;

int main()
{
    float base_salary,gross_salary;
    cout<<"Enter your base salary : ";
    cin>>base_salary;

    if(base_salary >= 0)
    {
        if(base_salary<=10000)
        gross_salary = base_salary + (base_salary*20/100) + (base_salary*80/100);
        else if( base_salary<=20000)
        gross_salary = base_salary + (base_salary*25/100) + (base_salary*90/100);
        else if( base_salary>20000)
        gross_salary = base_salary + (base_salary*30/100) + (base_salary*95/100);
    }
    else
    cout<<"Salary entered is not valid !"<<endl;

    cout<<"\nThe base salary is : "<<base_salary<<endl;
    cout<<"The gross slary is : "<<gross_salary<<endl;
    return 0;
}