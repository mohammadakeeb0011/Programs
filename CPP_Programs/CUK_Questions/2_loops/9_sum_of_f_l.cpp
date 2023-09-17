#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,firstDigit, lastDigit,digits, sum;
    cout<<"Enter number = ";
    cin>>n;
    lastDigit = n % 10;
    //Find total number of digits - 1
    digits    = (int)log10(n);
    //Find first digit
    firstDigit = (int) (n / pow(10, digits));
    sum = firstDigit + lastDigit;
    cout<<"Sum of first and last digit: "<<sum<<endl;
    return 0;
}