//4. WAP to find factorial using recursion 
	

#include<stdio.h>
int factorial(int n);
main()
{
	
	int n, f;
	printf("\n\n\t Input for ask Factorial : ");
	scanf("%d",&n);
	
	f=factorial(n);
	printf("\n\n\t Factorial : %d",f);
}
int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
