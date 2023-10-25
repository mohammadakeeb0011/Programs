#include <stdio.h>

int age = 10;
int get_age(){
    return age;
}
int main()
{
	
	printf("%d\n",age);
	age = 31;
	{
		
		int age = 21;
		printf("%d\n",age);
		printf("%d\n",get_age);
	}
	return 0;
}