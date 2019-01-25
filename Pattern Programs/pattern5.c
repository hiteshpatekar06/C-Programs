#include<stdio.h>
void pattern5(int num)
{
	int i,j;
	for(i=1;i<(num+1);i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%d",j);
		}
		printf("\n");
	}
}
int main()
{
	int number;
	printf("\nEnter a number to Draw pattern:\n");
	scanf("%d",&number);
	pattern5(number);
	return 0;
}
