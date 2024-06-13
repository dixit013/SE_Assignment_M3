/*
WAP to check whether a number is negative, positive or zero.
*/

#include<stdio.h>
main()
{
	int a;
	printf("\n\n\t enter value of a : ");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("\n\n\t number is positive");
	}
	else if(a<0)
	{
		printf("\n\n\t number is negative");
	}
	else
	{
		printf("\n\n\t number is zero");
	}
}
