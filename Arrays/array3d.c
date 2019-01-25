//WAP to accept and display 3d array
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ***array;
	int m,n,l;
	int i,j,k;
	printf("\nFor an array[m][n][l] enter value of m:\n");
	scanf("%d",&m);
	printf("\nFor an array[m][n][l] enter value of n:\n");
	scanf("%d",&n);
	printf("\nFor an array[m][n][l] enter value of l:\n");
	scanf("%d",&l);
	//ALLOCATE
	array=(int ***)malloc(m*sizeof(int**));
	for(i=0;i<m;i++)
	{
		array[i]=(int **)malloc(n*sizeof(int*));
		for(j=0;j<n;j++)
			array[i][j]=(int*)malloc(l*sizeof(int));
	}
	//ACCEPT
	printf("\nEnter %d elements:\n",m*n*l);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<l;k++)
				scanf("%d",&array[i][j][k]);
		}
	}
	//PRINT
	printf("\nThe given matrix is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<l;k++)
				printf("\narray[%d][%d][%d]=%d\n",i,j,k,array[i][j][k]);
		}
	}	
	//DEALLOCATE
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			free(array[i][j]);
		free(array[i]);
	}
	free(array);
	return 0;
}
