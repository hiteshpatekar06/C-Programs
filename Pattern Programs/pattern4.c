#include<stdio.h>
void pattern4(int num)
{
	int i=0,j=0,z=0;
	for(i=0;i<num;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("\t");
		}
		for(z=0;z<(num-i);z++)
		{
			printf("\t*");
		}
			
		printf("\n");
	}
}
//#include<stdio.h>
int main()
{
	int n;
	printf("\nEnter a number to draw pattern: \n");
	scanf("%d",&n);
	pattern4(n);
	return 0;
}
