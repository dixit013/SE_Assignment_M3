#include<stdio.h>
main()
{
	char fname[30],mname[30],lname[30];
	printf("\n\n\t enter first name of school : ");
	scanf("%s",&fname);
	printf("\n\n\t enter middle name of school : ");
	scanf("%s",&mname);
	printf("\n\n\t enter last name of school : ");
	scanf("%s",&lname);
	printf("\n\n\t school name is : %c.%c.%c",fname[0],mname[0],lname[0]);
}
