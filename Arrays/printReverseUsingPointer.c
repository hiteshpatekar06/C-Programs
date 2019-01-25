#include<stdio.h>
int main()
{
	int arr[10],size,i;
	printf("Enter size of an array:\n");
	scanf("%d",&size);
	printf("\nEnter %d elements:\n",size);
	for(i=0;i<size;i++)
		scanf("%d",&arr[i]);
	int *ptr;
	ptr=arr+(size-1);
	printf("\nThe Elements In Reverse Order is:\n");
	for(i=0;i<size;i++)
		printf("%d\n",*ptr--);
	return 0;
}
	
