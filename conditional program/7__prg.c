//Accept marks from user and check pass or fail.


#include<stdio.h>
main()
{
	int roll_no,s1,s2,s3,s4,s5,total;
	char name;
	float per;
	printf("\n\n\t enter roll_no:",roll_no);
	scanf("%d",&roll_no);
	printf("\n\n\t .....................");
	printf("\n\n\t enter student name:",name);
	scanf("%s",&name);
	printf("\n\n\t ..................");
	printf("\n\n\t marks s1:",s1);
	scanf("%d",&s1);
	printf("\n\n\t marks s2:",s2);
	scanf("%d",&s2);
	printf("\n\n\t marks s3:",s3);
	scanf("%d",&s3);
	printf("\n\n\t marks s4:",s4);
	scanf("%d",&s4);
	printf("\n\n\t marks s5:",s5);
	scanf("%d",&s5);
	total=s1+s2+s3+s4+s5;
	printf("\n\n\t ..........................");
	printf("\n\n\t total of marks=%d",total);
	per=total/5;
	printf("\n\n\t .....................");
	printf("\n\n\t per=%.2f",per);
	if(per>40)
	{
		printf("\n\n\t you have pass.");
	}
	else
	{
		printf("\n\n\t you have fail.");
	}
}
