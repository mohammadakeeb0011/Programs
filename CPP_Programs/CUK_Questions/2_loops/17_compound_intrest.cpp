#include <iostream>
using namespace std;

float solve( int P, int T, float R ) {
   float si;
   si = (P * T * R) / 100;
   return si;
}

int main() {
   int p,t;
   float r;
   cout<<"Principal Amount : ";
   cin>>p;
   cout<<"\nTime period : ";
   cin>>t;
   cout<<"\nRate : ";
   cin>>r;
   cout << "Simple interest for "<<p<<" with ROI "<<r<<"\% for "<<t<<" years is: ";
   float result;
   result = solve( p, t, r );
   cout << result << endl;
   cout << "Total amount is: " << p + result;
   return 0;
}