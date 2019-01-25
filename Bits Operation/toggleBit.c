#include<stdio.h>

int togglebit(int num,int noOfBits,int position)
{
	int x=1;
	x=(x<<noOfBits)-1;
	x=x<<(position-noOfBits);
	return num^x;
}

int main()
{
	int no,noOfBits,position;
	printf("\nEnter a number,position and no. of bits:\n");
	scanf("%d%d%d",&no,&position,&noOfBits);
	printf("\nThe given number was %d\nNumber after toggling of bits is %d\n",no,togglebit(no,noOfBits,position));
	return 0;
}
