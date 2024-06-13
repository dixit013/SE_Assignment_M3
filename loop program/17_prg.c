/*
Calculate 5 numbers from user and calculate number of even and odd using
of while loop
*/
#include<stdio.h>
main()
{
	int i,n,se=0,so=0;
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		if(n%2==0)
		{
			printf("\n sum of even number : %d",i);
			se=se+i;
			i++;
		}
		{
			printf("\n %d",i);
			so++;
			i++;
		}
	}
	printf("\n\n\t total even numbers : %d",se);
	printf("\n\n\t total odd numbers : %d",so);
	
}
