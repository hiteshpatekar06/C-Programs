#include<stdio.h>
void pattern9(int num)
{
	int i,j;
	for(i=1;i<=num;i++)
	{
		int n=1;
		for(j=1;j<=(num-i);j++)
		{
			printf("\t");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%d\t",n);
			if(j<i)
			{
				n++;
			}
			else
			{
				n--;
			}
		}
		printf("\n");
	}
}

int main()
{
	int number;
	printf("\nEnter a number:\n");
	scanf("%d",&number);
	pattern9(number);
}
