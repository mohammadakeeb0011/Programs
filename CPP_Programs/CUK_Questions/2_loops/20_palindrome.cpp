#include <iostream>
using namespace std;

int main()
{
     int n, q, r, rev = 0;

     cout << "Enter a positive number: ";
     cin >> n;

     q = n;

     do
     {
         r = q % 10;
         rev = (rev * 10) + r;
         q = q / 10;
     } while (q != 0);

     cout << " The reverse of the number is: " << rev << endl;

     if (n == rev)
         cout << " The number is a palindrome.";
     else
         cout << " The number is not a palindrome.";

    return 0;
}