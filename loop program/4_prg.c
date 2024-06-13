//WAP to print table up to given numbers.
#include<stdio.h>
main()
{
	int i,n;
	printf("\n\n\t enter the value of n : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		printf("\n\n\t %d * %d = %d",n,i,n*i);
	}
	
}
