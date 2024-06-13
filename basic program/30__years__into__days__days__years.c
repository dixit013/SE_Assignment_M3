//WAP to convert years into days and days into years.

#include<stdio.h>
main()
{
	int days,years,dy;
	printf("\n\n\t enter years: ");
	scanf("%d",&years);
	days=years*365;
	printf("\n\n\t convert years into days : %d",days);
	dy=days/365;
	printf("\n\n\t convert days into years : %d",dy);
}
