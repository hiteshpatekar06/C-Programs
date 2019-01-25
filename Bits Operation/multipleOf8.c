//WAP to accept a number and check if it is multiple of 8 or not.

#include<stdio.h>
int main()
{
	int number;
	printf("\nEnter a number to check it is multiple of 8 or not.\n");
	scanf("%d",&number);
	if((number&7)==0)
	{
		printf("\n%d is multiple of 8.\n",number);
	}
	else
	{
		printf("\n%d is not multiple of 8.\n",number);
	}
	return 0;
}
