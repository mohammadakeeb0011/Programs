#include<stdio.h>
#include<windows.h>
#include<unistd.h>
#include<stdlib.h>
#include<time.h>


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

    do
    {
        for(;h<24;h++)
        {
            for(;m<60;m++)
            {
                for(;s<60;s++)
                {   
                    system("cls");
                    printf("Time : \n");
                    printf("\n %02d:%02d:%02d",h,m,s);
                    fflush(stdout);
                    sleep(1);
                }
                s= 0;
            }
            m=0;
        }
        h=0;
    }while(1);

    return 0;
}
