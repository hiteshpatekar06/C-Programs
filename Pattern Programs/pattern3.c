void pattern3(int num)
{
	int i=0,j=0;
	int z=0;
	for(i=0;i<num;i++)
	{
		for(z=1;z<(num-i);z++)
		{
				printf("\t");
		}
		for(j=0;j<=i;j++)
		{
			printf("\t*");
		}
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number to print pattern: \n");
	scanf("%d",&n);
	pattern3(n);
	return 0;
}
