#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    scanf("%[^z]*s",ch);
    putchar(ch);
    printf("%d\n",ch);
    ch = getch();
    printf("%d\n",ch);
}