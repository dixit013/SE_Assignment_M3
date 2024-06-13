/*
 WAP to make addition, Subtraction and multiplication of two matrix using 
2-D Array*/ 
//addition
#include<stdio.h>
main()
{
	int i, j, a[20][20], r, c, b[20][20];
	printf("\n\t input rows value : ");
	scanf("%d",&r);
	printf("\n\t input cols value : ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("input array element a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\n\t input rows value : ");
	scanf("%d",&r);
	printf("\n\t input cols value : ");
	scanf("%d",&c);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("input array element a[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf(" %d ",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
}
