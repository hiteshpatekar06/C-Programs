//WAP to accept 10 integers and display second min and second max
#include<stdio.h>
int main()
{
	int a[10],i=0;
	int min1=0,min2=0,max1=0,max2=0;
	printf("\nEnter ten numbers to get second min and second max value of it :\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	min1=99999;
	max1=-99999;
	for(i=1;i<10;i++)
	{
			
		if(min1>a[i])
		{
			min2=min1;
			min1=a[i];
		}
		else if(min2>a[i])
		{
			min2=a[i];
		}
		if(max1<a[i])
		{
			max2=max1;
			max1=a[i];
		}
		else if(max2<a[i])
		{
			max2=a[i];
		}
	}
	printf("\nThe second min value is %d \nThe second max value is %d \n",min2,max2);
	return 0;
}
