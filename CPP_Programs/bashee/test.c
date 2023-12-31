#include <stdio.h> 
#include <stdlib.h>
 
int main(int argc, char * argv[]) 
{ 
	FILE *fs1, *fs2, *ft; 
	char ch, file1[20], file2[20], file3[20]; 
	if ( argc != 4 ) 
	{ 
		printf("There is no file names..\n"); 
		exit(0); 
	} 
	fs1 = fopen(argv[1],"r"); 
	fs2 = fopen(argv[2],"r"); 
	if( fs1 == NULL || fs2 == NULL ) 
	{  
		exit(0); 
	} 
	ft = fopen(argv[3],"w"); 
	if( ft == NULL ) 
	{ 
		exit(EXIT_FAILURE); 
	} 
	while( ( ch = fgetc(fs1) ) != EOF ) 
		fputc(ch,ft); 
	while( ( ch = fgetc(fs2) ) != EOF ) 
		fputc(ch,ft); 
	printf("Two files were merged into %s file successfully.\n",argv[3]); 
	 
	fclose(fs1); 
	fclose(fs2); 
	fclose(ft); 
	 
	return 0; 
}