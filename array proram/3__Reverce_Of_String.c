/* 
3. WAP to find reverse of string using recursion 
*/
#include<stdio.h>
char reverse();
main()
{
	reverse();
}
char reverse()
{
		char str[20], str1[20];
	
	printf("\n\n\t Input string : ");
	gets(str);
	
	printf("\n\n\t Reverse Of string : %s",strrev(str));
}
