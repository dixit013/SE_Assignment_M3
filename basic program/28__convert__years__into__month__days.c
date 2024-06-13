//Convert years into days and months.
#include<stdio.h>
main()
{
	int days,month,year;
	printf("\n\n\t enter year:");
	scanf("%d",&year);
	
	days=year*365;
	printf("\n\n\t covert years into days:%d",days);
	month=year*12;
	printf("\n\n\t convert years into month:%d",month);
	
}
