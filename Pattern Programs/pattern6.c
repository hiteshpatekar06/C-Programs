#include<stdio.h>
void pattern6(int n)
{
	int i=0,j=0;
	for(i=0;i<n;i++)
	{	
		for(j=1;j<=(n-i);j++)
		{
			printf("*\t");
		}
		for(j=0;j<(2*i-1);j++)
		{
			printf("\t");
		}
		for(j=1;j<=(n-i);j++)
		{
			if(j==n)
				break;
			printf("*\t");
		}
		printf("\n");
	}

}
int main()
{
	int n;
	printf("\nEnter a number: ");
	scanf("%d",&n);
	pattern6(n);
	return 0;
}
