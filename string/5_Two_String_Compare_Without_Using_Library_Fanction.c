/* 5. Write a program in C to compare two strings without using string library
functions. 
*/
#include<stdio.h>
int compare(char str[], char str1[]);
main()
{
	
	
	char str[40], str1[40];
	int i, r;
	
	printf("\n\n\t Input string1 : ");
	scanf("%s",&str);
	
	printf("\n\n\t Input string2 : ");
	scanf("%s",&str1);
	
	 r = compare(str, str1);
    
    if (r == 0) 
    {
        printf("Strings are equal.\n");
    } 
    else if (r < 0) {
        printf("string are not Equal.\n");
    } 
    else 
    {
        printf("string are not Equal.\n");
    }
	
}

int compare(char str[], char str1[])
{
	int i=0;

		while(str[i]!='\0' || str1[i]!='\0')
	{
		if (str[i] != str1[i]) 
		{
		return str[i], str1[i];
	      }
	      i++;
	}
}
