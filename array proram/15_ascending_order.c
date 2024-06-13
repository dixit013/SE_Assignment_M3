/*
15 Store 5 numbers in array and sort it in ascending order.
*/

#include<stdio.h>
main()
{
	int i,j,num[5],tem;
	
	for(i=0;i<5;i++)
	{
		printf("\n\n\t n[%d] : ",i);
		scanf("%d",&num[i]);
	}
	for(i=0;i<5;i++) 
	{
        for(j=0;j<5-i-1;j++)
		{
            if(num[j]>num[j+1])
			{
                tem=num[j];
                num[j]=num[j+1];
                num[j+1]=tem;
            }
        }
    }
    printf("\n\n\t Numbers in ascending order: ");
    for(i=0;i<5;i++) 
	{
        printf("\n\n\t n[%d] : %d ",i,num[i]);
    }
}
