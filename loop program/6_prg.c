#include<stdio.h>
main()
{
	int a=0,b=1,c,i,n;
	printf("\n\n\t enter the number : ");
	scanf("%d",&n);
	printf("\n\n\t %d %d",a,b);
	
	for(i=1;i<=n;i++)
	{
		c=a+b;
		printf(" %d",c);
		a=b;
		b=c;
	}
}
