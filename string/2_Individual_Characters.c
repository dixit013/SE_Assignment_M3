/*
 2. Write a program in C to separate individual characters from a string.
  */

#include<stdio.h>
main()
{
	
	char str[50];
	int i;

    printf("Enter a string: ");
    scanf("%[^\n]", str);

    printf("\nIndividual characters........ \n");
    for (i = 0; str[i] != '\0'; i++) 
    {
        printf(" %c",str[i]);
    }
	
}
