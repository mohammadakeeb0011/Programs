#include<stdio.h>

int main(int argc,char* argv[])
{
    char c = argv[2];
    switch(c)
    {
        case '+':
        printf("%d",atoi(argv[1]) + atoi(argv[3]));
        break;
        case '-':
        printf("%d",atoi(argv[1]) - atoi(argv[3]));
        break;
        case '*':
        printf("%d",atoi(argv[1]) * atoi(argv[3]));
        break;
        default:
        printf(" ");
    }
    return 0;
}