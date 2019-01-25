/* WAP to accept an array of 10 int from user & display sumofall numbers in Array which has more than three one bits*/
#include<stdio.h>
int countOneBit(int a[],int size)
{
	int i=0,sum=0;
	for(i=0;i<size;i++)
	{
		int x=1;
		int count=0;
		while(x!=0)
		{
			if((a[i]&x)!=0)
				count++;
			x=x<<1;
		}
		if(count>3)
		{
			sum=sum+a[i];
		}
	}
	return sum;
}	

int main()
{
	int i,a[10];
	printf("\nEnter ten numbers to get sum of numbers having 3 one bits:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\nThe sum is : %d\n",countOneBit(a,10));
	return 0;
}
