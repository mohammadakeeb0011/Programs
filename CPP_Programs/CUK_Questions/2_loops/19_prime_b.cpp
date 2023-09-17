#include <iostream>
using namespace std;

int main() {

  int i, n;
  bool is_prime = true;

  cout << "Enter a positive integer: ";
  cin >> n;
  if (n == 0 || n == 1) {
    is_prime = false;
  }
  i = 2;
  while ( i <= n/2 ) {
    if (n % i == 0) {
      is_prime = false;
      break;
    }
    ++i;
  }

  if (is_prime)
    cout << n << " is a prime number";
  else
    cout << n << " is not a prime number";

  return 0;
}
