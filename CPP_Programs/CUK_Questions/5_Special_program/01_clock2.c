#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<unistd.h>

int main()
{
    int h,m,s;
    

    printf("Set time (h:m:s) :\n");
    scanf("%d %d %d",&h,&m,&s);
    if(h>23 || m>59 || s>59)
    {
        printf("Error!");
        exit(1);
    }

    while(1)
    {
        s++;
        if(s>59)
        {
            m++;
            s=0;
        }

        if(m>59)
        {
            h++;
            m=0;
        }
        
        if(h>23)
        h =0;

        printf("Time : \n");
        printf("%02d %02d %02d",h,m,s);
        sleep(1);
        system("cls");
    }
}