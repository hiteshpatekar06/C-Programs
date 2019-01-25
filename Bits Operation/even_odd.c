/* Write a program to accept a number from user to check if it is even or odd number without using arithmetic operation*/
#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter a number:\t");
	scanf("%d",&number);
	if((number&1)==0)
	{
		printf("\n %d is even number.\n",number);
	}
	else
	{
		printf("\n %d is odd number.\n",number);
	}
	return 0;
}
