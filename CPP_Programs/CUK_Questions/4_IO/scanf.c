#include <stdio.h>

// Driver code
int main()
{
	// Declaring a char type array
	// of length 50 characters
	char name[50];

	printf("Please enter some texts: ");

	// Reading a line of character or
	// a string
	scanf("%s",name);

	// Displaying this line of character
	// or a string
	printf("You have entered: %s",
		name);
	return 0;
}
