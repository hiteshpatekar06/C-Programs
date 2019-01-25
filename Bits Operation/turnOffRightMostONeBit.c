#include<stdio.h>
int TurnOffRightMostOneBit(int num)
{
	return num&(num-1);
}

int main()
{
	int number;
	printf("\nEnter a number to turn of it's right most one bit: \n");
	scanf("%d",&number);
	printf("\nNUmber after turning off right most one bit is: %d\n",TurnOffRightMostOneBit(number));
	return 0;
}
