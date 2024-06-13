//Calculate the Sum of Natural Numbers Using the While Loop...
#include<stdio.h>
main()
{
	int i,n,na_sum=0;
	printf("\n\n\t enter range : ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n)
	{
		printf("%d ",i);
		na_sum=na_sum+i;
		i++;
	}
	printf("\n\n\t sum of natural number : %d",na_sum);
}
