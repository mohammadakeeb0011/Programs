#include<stdio.h>
#include<stdlib.h>

void main(int argc, char * argv[])
{
    int n, last = 0, prev = 1, curr, cnt;

    n = atoi(argv[1]);                  // atoi - asci to integer

    printf("\n\nPrinting first %d fibonacci nos. -> ", n);
    printf("%d ", last);
    printf("%d ", prev);
    cnt = 2;
    while (cnt <= n-1)
    {
        curr = last + prev;
        last = prev;
        prev = curr;
        cnt++;
        printf("%d ", curr);
    }
    printf("\n\n\n");
}
