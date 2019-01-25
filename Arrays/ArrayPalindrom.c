#include<stdio.h>

int isPalindrome(int a[],int size)
{
	int flag=1;
	int i,j;
	for(i=0,j=size-1;i<size/2;i++,j--)
	{
		if(a[i]!=a[j])
		{
			flag=0;
			break;
		}
	}
	return flag;
}

int main()
{
	int a[10],size;
	int i;
	printf("\nEnter size of array\n");
	scanf("%d",&size);
	printf("\nEnter %d numbers :\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);
	if(isPalindrome(a,size))
	{
		printf("\nIt is palindrome\n");
	}
	else
		printf("\nIt is not a plaindrome\n");
	return 0;
}
