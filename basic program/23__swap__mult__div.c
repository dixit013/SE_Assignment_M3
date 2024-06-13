//23.WAP to calculate swap 2 numbers with using of multiplication and division.
#include<stdio.h>
main()
{
	int a,b,c;
	printf("\n\n\t a : ");
	scanf("%d",&a);
	printf("\n\n\t b : ");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("\n\n\t..............................");
	printf("\n\n\t a : %d",a);
	printf("\n\n\t b : %d",b);
}
