void pattern2(int num)
{
	int i=0,j=0;
	char ch='A';
	for(i=0;i<num;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("\t%c",ch++);
		}
		ch='A';
		printf("\n");
	}
}
#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number to print pattern: ");
	scanf("%d",&n);
	pattern2(n);
	return 0;
}
