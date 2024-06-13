#include<stdio.h>
main()
{
	int i,n,num,rem;
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	
	i=1;
	while(i<0)
	{
		rem=n%10;
		printf(" %d",rem);
		num=n/10;	
	}
	printf("\n\n\t riversed number = %d",num);
	
}
