/*WAP to accept an array of 10 numbers frm user and display difference of alternate sum of the element*/
#include<stdio.h>
int sumOfAlternate(int a[],int size)
{
	int sum1=0,sum2=0;
	int diff=0;
	int i;
	for(i=0;i<size;i++)
	{
		if((i&1)==0)
			sum1+=a[i];
		else
			sum2+=a[i];
	}
	if(sum1>sum2)
	{
		diff=sum1-sum2;
	}
	else
	{
		diff=sum2-sum1;
	}
	return diff;
}
int main()
{
	int a[10],i;
	printf("\nEnter ten numbers to get difference of sum of alternate numbers\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	int dif=sumOfAlternate(a,10);
	printf("The difference is : %d\n",dif);
	return 0;
}
