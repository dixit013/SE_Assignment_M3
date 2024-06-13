//18.Write a C program to calculate profit and loss on a transaction.

#include<stdio.h>
main()
{
	int cp,sp,amount;
	printf("\n\n\t enter cost price : ");
	scanf("%d",&cp);
	printf("\n\n\t enter selling price : ");
	scanf("%d",&sp);
	
	if(cp<sp)
	{
		amount=sp - cp;
		printf("\n\n\t profit = %d",amount);
	}
	else if(sp<cp)
	{
		amount=sp - cp;
		printf("\n\n\t loss = %d",amount);
	}
	else
	{
		printf("\n\n\t no profit no loss",amount);
	}
}
