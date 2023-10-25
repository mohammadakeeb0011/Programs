#include<stdio.h>
int var = 23;
int main();
int main()
{
    int var = 21;
    var = 11;
    {
        var =23;
        //extern int var;
        extern int var;  
        printf("%d",var);

    }
    return 0;
}
