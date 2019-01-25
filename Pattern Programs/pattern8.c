#include<stdio.h>
void pattern8(int num)
{
	int i,j,ch=65;
	for(i=1;i<=num;i++)
	{
		for(j=1;j<=(num-i);j++)
		{
			printf("\t");
		}
		for(j=1;j<=(2*i-1);j++)
		{
			printf("%c\t",ch);
			if(j<i)
			{
				ch--;
			}
			else
			{
				ch++;
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
	pattern8(number);
	return 0;
}
