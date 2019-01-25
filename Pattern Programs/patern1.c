void patern1(int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
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
	printf("\nEnter a number to print patern: \n");
	scanf("%d",&n);
	patern1(n);
	return 0;
}
