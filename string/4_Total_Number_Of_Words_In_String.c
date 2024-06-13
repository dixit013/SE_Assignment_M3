/* 
4. Write a program in C to count the total number of words in a string.
*/
#include<stdio.h>
main()
{
	
	char a[100];
	int i, flag=0, c=0;
	
	printf("Enter a string: ");
      scanf("%s",&a);
	
	for(i=0;a[i]!='\0';i++)
	{
		if (a[i]==' '||a[i]=='\n'||a[i]=='\t') 
		{
			flag=0;
		}
		else if(flag==0)
		{
			flag=1;
			c++;
		}
	}
	printf("\n\n\t Total Number Of Words In a String %d",c);
}
