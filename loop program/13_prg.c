//calculate the Factorial of a Given Number using while loop....
#include<stdio.h>
main()
{
	int i,n1,n2,n3,n4,n5,fact;
	printf("\n\n\t enter the number : ");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	
	i=1;
	while(i<=n1)
	{
		printf("\n %d",i);
		fact=fact*i;
		i++;
	}
	while(i<=n2)
	{
		printf("\n %d",i);
		fact=fact*i;
		i++;
	}
	while(i<=n3)
	{
		printf("\n %d",i);
		fact=fact*i;
		i++;
	}
	while(i<=n4)
	{
		printf("\n %d",i);
		fact=fact*i;
		i++;
	}
	while(i<=n5)
	{
		printf("\n %d",i);
		fact=fact*i;
		i++;
	}
	printf("\n\n\t factorial value of given number : %d",fact);
}

