#include <stdio.h>  
#include <string.h>  
int main()  
{  
    char str[50];
    printf("Enter the elements of the string: ");
	fgets(str,sizeof(str),stdin);
	printf("The string is: ");
	puts(str);  
    printf (" \n After the reverse of a string: %s ", strrev(str));  
    return 0;  
} 
