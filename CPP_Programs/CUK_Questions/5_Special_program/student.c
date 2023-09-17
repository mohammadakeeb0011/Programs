#include<stdio.h>
#include<conio.h>

struct student
{   
    char name[26];
    int roll_no;
    char address[50];
    char dob[10];
    float fee;
    char gender[11];  
};

int main()
{
    int n;
    printf("Enter the number of students: ");
    scanf("%d",&n);
    
    struct student stu[n];
    
    for(int i=0;i<n;i++)
    {   
        
        printf("\nStudent %d",i+1);
        printf("\nEnter the name :");
        for(int j=0;j<20; j++)
        {
            stu[i].name[j] = getche();
            if(stu[i].name[j] == 13)
            


        }
        printf("\nEnter the roll no. :");
        scanf("%d", &stu[i].roll_no);
        printf("\nEnter the DOB. :");
        scanf("%s", &stu[i].dob);
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
        printf("\n\nYour name :");
        puts(stu[i].name);
        printf("\nYour roll no. :");
        printf("%d", stu[i].roll_no);
        printf("\nYour DOB. :");
        printf("%d", stu[i].dob);
        printf("\nYour address :");
        puts(stu[i].address);
        printf("\nYour gender :");
        puts(stu[i].gender);
        printf("\nYour fees :");
        printf("%f", stu[i].fee);
    }

    return 0;

}

