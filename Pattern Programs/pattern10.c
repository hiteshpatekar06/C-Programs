#include<stdio.h>
void pattern10(int num)
{
	int i,j;
	int n=1;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=(num-i);j++)
		{
			printf("\t");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d\t",n);
			if(j<i)
			{
				n--;
			}
			else
			{
				n++;
			}
		}
		printf("\n");
	}
}

int main()
{
	int number;
	printf("\nEnter a number: ");
	scanf("%d",&number);
	pattern10(number);
}
