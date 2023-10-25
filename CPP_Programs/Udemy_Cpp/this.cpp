#include <iostream>
using namespace std;
////////////////////////////////////////////////////////////////
class what
{
private:
int alpha;
public:
void tester(int alpha)
{
alpha = alpha;
cout << this->alpha; 
}
};
////////////////////////////////////////////////////////////////
int main()
{
    int n = 20;
what w;
w.tester(n);
cout << endl;
return 0;
}