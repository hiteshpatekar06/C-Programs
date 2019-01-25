/* Write a program to accept two numbers from user and accept two positions and no of bits to be swaped from no1 to no2*/

#include<stdio.h>
int Shifting_positioning(int position,int noOfBits)
{
	int x=1;
	x=(x<<noOfBits)-1;
	x=x<<(position-noOfBits);
	return x;
}

int ANDingBits(int no,int position,int noOfBits)
{
	int x=Shifting_positioning(position,noOfBits);
	return no&x;
}

int TurnOffBits(int no,int position,int noOfBits)
{
	int x=Shifting_positioning(position,noOfBits);
	x=~x;
	return no&x;
}	

int main()
{
	int no1,no2,position1,position2,noOfBits;
	int a,b;
	printf("\nEnter TWO number:\n");
	scanf("%d%d",&no1,&no2);
	printf("\nEnter position of bit for two numbers respectively:\n");
	scanf("%d%d",&position1,&position2);
	printf("\nEnter number of bits:\n");
	scanf("%d",&noOfBits);
	printf("\nNumbers before swapping their bits are %d and %d.\n",no1,no2);
	a=ANDingBits(no1,position1,noOfBits);
	b=ANDingBits(no2,position2,noOfBits);
	no1=TurnOffBits(no1,position1,noOfBits);
	no2=TurnOffBits(no2,position2,noOfBits);
	if(position1>position2)
	{
		a=a>>(position1-position2);
		b=b<<(position1-position2);
	}
	else
	{
		a=a<<(position2-position1);
		b=b>>(position2-position1);
	}
	no1=no1|b;
	no2=no2|a;
	printf("\nNumbers after swapping their bits are %d and %d.\n",no1,no2);
	return 0;
}
