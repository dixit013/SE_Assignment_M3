/*
WAP to make simple calculator (operation include Addition, Subtraction,
Multiplication, Division, modulo) using conditional statement
*/
#include<stdio.h>
main()
{
	int n1,n2,choice;
	printf("\n\n\t enter the number1: ");
	scanf("%d",&n1);
	printf("\n\n\t enter the number2: ");
	scanf("%d",&n2);
	printf("\n\n\t ........................");
	printf("\n\n\t press 1 for addition.");
	printf("\n\n\t press 2 for substraction.");
	printf("\n\n\t press 3 for multiplication.");
	printf("\n\n\t press 4 for division.");
	printf("\n\n\t .....................");
	printf("\n\n\t enter your choice : ");
	scanf("%d",&choice);
	
	if(choice==1)
	{
		printf("\n\n\t addition of n1+n2:%d",n1+n2);
	}
	else if(choice==2)
	{
		printf("\n\n\t substraction of n1-n2:%d",n1-n2);
	}
	else if(choice==3)
	{
		printf("\n\n\t multiplication of n1*n2:%d",n1*n2);
	}
	else if(choice==4)
	{
		printf("\n\n\t division of n1/n2:%d",n1/n2);
	}
	else
	{
		printf("\n\n\t enter invalid!!!!! try again ");
	}
}
