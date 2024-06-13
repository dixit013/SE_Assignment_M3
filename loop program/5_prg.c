#include<stdio.h>
main()
{
	int i,n,fact;
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}	
	printf("\n\n\t factorial number of the given number = %d",fact);
}
