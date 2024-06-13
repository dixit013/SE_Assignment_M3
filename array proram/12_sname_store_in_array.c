//12. WAP to accept 5 students name and store it in array
#include<stdio.h>
main()
{
	char sname[5][20];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n\n\t enter name : ");
		scanf("%s",&sname[i][20]);
	}
	printf("\n\n\t name[1] : %s",sname[1]);
	printf("\n\n\t name[2] : %s",sname[2]);
	printf("\n\n\t name[3] : %s",sname[3]);
	printf("\n\n\t name[4] : %s",sname[4]);
	printf("\n\n\t name[5] : %s",sname[5]);
}
