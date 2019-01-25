//WAP to accept array of 10 integers and display sum of all digit of the numbers present in array.
#include<stdio.h>
int main()
{
	int a[10],i;
	int rem,sum=0;
	printf("\nEnter ten numbers to get sum of digits:\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		int no=a[i];
		while(no!=0)
		{
			rem=no%10;
			sum+=rem;
			no=no/10;
		}	
	}
	printf("\nThe sum of digits is:\t%d\n",sum);
	return 0;
}
		
