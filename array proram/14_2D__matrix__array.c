//14. Perform 2D matrix array 
#include<stdio.h>
main()
{
	int i, j, a[3][3]={ {4,2,3}, {3,1,5}, {4,6,4}  };	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf(" %d",a[i][j]);
		}
		printf("\n");
	}
	
}
