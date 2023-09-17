#include <iostream>
using namespace std;

int main() {
    int n, q , r , result = 0;
    cout << "Enter any number : ";
    cin >> n;
    q = n;

    while (q != 0) {
        r = q % 10;
        result += r * r * r;
        q /= 10;
    }
    if (result == n)
        cout << n << " is an Armstrong number.";
    else
        cout << n << " is not an Armstrong number.";

    return 0;
}