//Calculate sum of 10 numbers using of while loop....


#include<stdio.h>
main()
{
	int i,n=10,sum=0;
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		sum=sum+i;
		i++;
	}
	printf("\n\n\t sum of given number : %d",sum);
}
