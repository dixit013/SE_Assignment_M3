//8. WAP to reverse a string and check that the string is palindrome or not
#include<stdio.h>

void print_reverse(char *s);

main()
{
	char s[50];
	printf(" input a string for reverse : ");
	scanf("%s",&s);
	print_reverse(s);
	printf("\n");
	if(*s=s)
	{
		printf("\n\n\t this string is palindrome.");
	}
	else
	{
		printf("\n\n\t this string is not palindrome.");	
	}
}
void print_reverse(char *s)
{
	if(*s != '\0')
	{
	print_reverse(s + 1);
	printf("%c",*s);
	}		
}
	

