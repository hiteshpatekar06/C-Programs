//WAP to accept 10 integers from user and display it in reverse order.
#include<stdio.h>
int main()
{
	int a[10],i;
	printf("\nEnter ten numbers to get its reverse:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	printf("\nThe reverse order is:\t");
	for(i=9;i>=0;i--)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
