//WAP to accept number from user accept bit position and number of bits to be turned off from the specified position of the given number.
#include<stdio.h>

int turnOff(int num,int noOfBits,int position)
{
	int x=1;
	x=(x<<noOfBits)-1;
	x=x<<(position-noOfBits);
	x=~x;
	return num&x;
}

int main()
{
	int no,noOfBits,position;
	printf("\nEnter a number,position and no. of bits:\n");
	scanf("%d%d%d",&no,&position,&noOfBits);
	printf("\nThe given number was %d\nNumber after turning of bits is %d\n",no,turnOff(no,noOfBits,position));
	return 0;
}
