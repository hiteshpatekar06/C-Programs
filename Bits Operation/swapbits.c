/* Write a program to accept two numbers from user accept position and number of bits to be swaped from number1 to number2.*/
#include<stdio.h>
int AndingBits(int no,int position,int noOfBits)
{
	int x=1;
	x=(x<<noOfBits)-1;
	x=x<<(position-noOfBits);
	return no&x;
}
int TurnOfBits(int no, int position, int noOfBits)
{
	int x=1;
	x=(x<<noOfBits)-1;
	x=x<<(position-noOfBits);
	x=~x;
	return no&x;
}
int main()
{
	int no1,no2,position,noOfBits;
	int a,b;
	printf("\n Enter TWO numbers : \n");
	scanf("%d%d",&no1,&no2);
	printf("\nEnter the position :\n");
	scanf("%d",&position);
	printf("\nEnter no of bits to be swapped :\n");
	scanf("%d",&noOfBits);
	printf("\nNumbers before swapping bits are %d and %d.\n",no1,no2);
	a=AndingBits(no1,position,noOfBits);
	b=AndingBits(no2,position,noOfBits);
	no1=TurnOfBits(no1,position,noOfBits);
	no2=TurnOfBits(no2,position,noOfBits);
	no1=no1|b;
	no2=no2|a;
	printf("\nNumbers after swapping bits are %d and %d.\n",no1,no2);
	return 0;
}
