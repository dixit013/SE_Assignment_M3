//WAP to find maximum number among 3 numbers using ternary operator.

#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t enter number 1 : ");
	scanf("%d",&a);
	printf("\n\n\t enter number 2 : ");
	scanf("%d",&b);
	printf("\n\n\t enter number 3 : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("\n\n\t number 1 is largest number : %d",a);
	}
	else if(b>a && b>c)
	{
		printf("\n\n\t number 2 is largest number : %d",b);
	}
	else
	{
		printf("\n\n\t number 3 is largest number : %d",c);
	}
	
	
	
}
