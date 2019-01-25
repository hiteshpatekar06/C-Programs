/*WAP to accept 2 arrays from user and sort them using bubble sort and then perform following set of operations;
1.)Union of 2 arrays
2.)Intersection of 2 arrays
3.)Merge sorted array*/

#include<stdio.h>

void bubbleSort(int a[],int size)
{
	int i,j;
	int temp;
	for(i=0;i<size;i++)
	{
		for(j=0;j<(size-1-i);j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
}

int UnionOf2Array(int a[],int b[],int unionc[],int size1,int size2)
{
	int i=0,j=0,z=0;
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{		
			if(a[i]==b[j])
			{
				b[j]=-1;
			}
		}
		unionc[z++]=a[i];
		
	}
	for(j=0;j<size2;j++)
	{
		if(b[j]!=-1)
			unionc[z++]=b[j];
	}
	return z;
}

void Merging2Array(int merge[],int a[],int b[],int size1,int size2)
{
	int i=0,j=0,z=0;
	while(i<size1&&j<size2)
	{
		if(a[i]<b[j])
		{
			merge[z]=a[i];
			i++;
		}
		else
		{
			merge[z]=b[j];
			j++;
		}
		z++;
	}
	while(i<size1)
	{
		merge[z]=a[i];
		i++;
	}
	while(j<size2)
	{
		merge[z]=b[j];
		j++;
	}
	
}			


int intersectionOf2Array(int a[],int b[],int intersection[],int size1,int size2)
{
	int i=0,j=0,count=0,z=0;
	for(i=0;i<size1;i++)
	{
		for(j=0;j<size2;j++)
		{
			if(a[i]==b[j])
			{
				intersection[z++]=a[i];
				count++;
			}
		}
	}
	return count;
}


int main()
{
	int i,n,m,arr1[10],arr2[10],merge[10],unionc[10],intersect[10];
	int unionSize,intersectionSize;	
	printf("\nEnter size of array 1 and array 2:\n");
	scanf("%d%d",&n,&m);

	printf("\nEnter %d numbers for array 1:\n",n);
	for(i=0;i<n;i++)
		scanf("%d",&arr1[i]);

	printf("\nEnter %d numbers for array 2:\n",m);
	for(i=0;i<m;i++)
		scanf("%d",&arr2[i]);

	bubbleSort(arr1,n);
	bubbleSort(arr2,m);
	printf("\nSorted Array1:\n");
	for(i=0;i<n;i++)
		printf("\t%d",arr1[i]);
	printf("\nSorted Array2:\n");
	for(i=0;i<n;i++)
		printf("\t%d",arr2[i]);

	printf("\nMerge sorted Array is:\n");
	Merging2Array(merge,arr1,arr2,n,m);
	for(i=0;i<m+n;i++)
		printf("\t%d",merge[i]);

	printf("\nIntersection of Arrays is:\n");
	intersectionSize=intersectionOf2Array(arr1,arr2,intersect,n,m);
	for(i=0;i<intersectionSize;i++)
		printf("\t%d",intersect[i]);

	printf("\nUnion of Arrays:\n");
	unionSize=UnionOf2Array(arr1,arr2,unionc,n,m);
	for(i=0;i<unionSize;i++)
		printf("\t%d",unionc[i]);

	
	return 0;
}
