// C program to implement
// the getchar() function
#include <conio.h>
#include <stdio.h>

// Driver code
int main()
{
	// Declaring a char type variable
	char ch;

	printf("Enter the character: ");

	// Taking a character from keyboard
	ch = getchar();

	// Displays the value of ch
	printf("%c", ch);
	return 0;
}
