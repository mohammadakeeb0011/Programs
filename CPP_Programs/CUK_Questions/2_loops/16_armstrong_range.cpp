#include<iostream>
using namespace std;

int main() {
    unsigned long int n, q , r , result = 0;
    cout << "Enter any number : ";
    cin >> n;
    int i;
    for(i=0 ; i <= n; i++)
    {
        q = i;

    while (q != 0) {
        r = q % 10;
        result += r * r * r;
        q /= 10;
    }
    if (result == i)
        cout << i << " is an Armstrong number."<<endl;
    //else
      //  cout << i << " is not an Armstrong number."<<endl;

    }

    return 0;
}