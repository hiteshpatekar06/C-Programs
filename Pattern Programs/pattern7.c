#include<stdio.h>
void pattern7(int num)
{
	//char ch=64;
	//int count=0;
	int i,j;
	for(i=1;i<=num;i++)
	{
		int ch=65;
		int count=0;
		for(j=1;j<=(num-i);j++)
		{
			printf("\t");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c\t",ch+count);
			if(j>=i)
			{
				count--;
			}
			else
			{
				count++;
			}
		}
		printf("\n");
	}
}
int main()
{
	int no;
	printf("\nEnter a number:");
	scanf("%d",&no);
	pattern7(no);
	return 0;
}

		
