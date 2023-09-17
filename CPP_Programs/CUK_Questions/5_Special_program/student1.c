#include<stdio.h>
#include<windows.h>
#include<unistd.h>
#include<stdlib.h>
struct DOB
{
    int day;
    int month;
    int year;
};


struct student
{   
    char name[20];
    int roll_no;
    char address[40];
    struct DOB date;
    char dob[11];
    float fee;
    char gender[11];  
};

int main()
{
    int n;
    fflush(stdout);
    printf("Enter the number of students: ");
    scanf("%d",&n);
    fflush(stdout);
    system("cls");
    struct student stu[n];
    
    for(int i=0;i<n;i++)
    {   
        fflush(stdout);
        printf("\nStudent %d",i+1);
        printf("Enter the name :");
        scanf("%[^z]%c",&stu[i].name);
        printf("\nEnter the roll no. :");
        scanf("%d", &stu[i].roll_no);
        printf("\nEnter the DOB. :");
        scanf("%d %d %d", &stu[i].date.day,&stu[i].date.month,&stu[i].date.year);
        printf("\nEnter the address :");
        scanf("%s",&stu[i].address);
        printf("\nEnter the gender :");
        scanf("%s",&stu[i].gender);
        printf("\nEnter the fees :");
        scanf("%f", &stu[i].fee);
    }

    printf("\nYou entered following details :\n\n");

    for(int i=0;i<n;i++)
    {   
        printf("\nStudent %d",i+1);
        printf("\n\nYour name : %s",stu[i].name);
        printf("\nYour roll no. : %d", stu[i].roll_no);
        printf("\nYour DOB. : %d:%2.0d:%d", stu[i].date.day, stu[i].date.month, stu[i].date.year);
        printf("\nYour address : %s",stu[i].address);
        printf("\nYour gender : %s",stu[i].gender);
        printf("\nYour fees :%f",stu[i].fee);
    }

    return 0;

}

