//WAP to accept 10 intergers from user and print average of even number and odd number.
#include<stdio.h>
int main()
{
	int a[10],i;
	int sumE=0,sumO=0;
	int cnt1=0,cnt2=0;
	printf("\nEnter ten numbers to get the average of even and odd:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if((a[i]&1)==0)
		{
			sumE+=a[i];
			cnt1++;
		}
		else
		{
			sumO+=a[i];
			cnt2++;
		}
	}
	printf("\nThe average of even numbers is %d\n and average of odd numbers is %d\n",sumE/cnt1,sumO/cnt2);
	return 0;
}
