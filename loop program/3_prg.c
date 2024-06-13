/*
WAP to take 10 no. Input from user find out below values
a. How many Even numbers are there
b. How many odd numbers are there
c. Sum of even numbers
d. Sum of odd numbers
*/

#include<stdio.h>
main()
{
	int i,n,se,so;
	printf("\n\n\t enter number  : ");
	scanf("%d",&n);
	
	
	for(i=1;n<=n;i=i+2)
	{
		printf("%d ",n);
		if(n % 2 == 0 )
		{
			printf("\n\n\t number is even : %d",i);
			se=se+i;
		}
		else
		{
			printf("\n\n\t number is odd : %d",i);
			so=so+i;
		}	
	}
	printf("\n\n\t sum of even number = %d",se);
	printf("\n\n\t sum of odd number = %d",so);
	
}
