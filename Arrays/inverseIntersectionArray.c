#include<stdio.h>

int inverseIntersection(int arr1[],int size1,int arr2[],int size2,int result[])
{
	int i=0,j=0,k=0;
	int count=0;
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(arr1[i]==arr2[j])
			{
				arr2[j]=-1;		
				break;
			}
		}
			if(j==size2)
			{
				result[k++]=arr1[i];
				count++;
			}
	}
	for(j=0;j<size2;j++)
	{
		if(arr2[j]!=-1)
		{
			result[k++]=arr2[j];
			count++;
		}
	}
	return count;
}

int main()
{
	int arr1[10],arr2[10],size1,size2,result[10],resultSize;
	int i;
	printf("\nEnter size of array1 and array2:\n");
	scanf("%d%d",&size1,&size2);
	printf("\nEnter %d elements of array1:\n",size1);
	for(i=0;i<size1;i++)
		scanf("%d",&arr1[i]);
	printf("\nEnter %d elements of array2:\n",size2);
	for(i=0;i<size2;i++)
		scanf("%d",&arr2[i]);

	resultSize=inverseIntersection(arr1,size1,arr2,size2,result);
	printf("\nThe inverse intersection is:\n");
	for(i=0;i<resultSize;i++)
		printf("\t%d",result[i]);
	return 0;
}
