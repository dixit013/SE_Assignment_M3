/* 
3. Write a program in C to print individual characters of a string in reverse order
*/

#include<stdio.h>
main()
{
	
	
	char a[100];
	int i;
	
	printf("Enter a string: ");
      scanf("%s", a);
	printf("\n.......Individual String Characters.....\n\n");
	for(i=0;a[i]!='\0';i++)
	{
		printf(" %c",a[i]);
	}
	printf("\n");
	printf("\n.......Reversed Individual String Characters.....\n\n");
	for(i!='\0';a[i]>=0;i--)
	{
		printf(" %c",a[i]);
	}
	printf("\n");
}
