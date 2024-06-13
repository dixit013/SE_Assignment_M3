/*
16  Accept 5 numbers from user and perform sum of array
*/
#include<stdio.h>
main()
{
	int i,num[5],sum=0;
	
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&num[i]);
		
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t n[%d] : %d",i,num[i]);
		sum=sum+num[i];
	}
	printf("\n\n\t Sum = %d",sum);
}
