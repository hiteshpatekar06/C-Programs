//WAP to accept and display 4D array
#include<stdio.h>
#include<stdlib.h>
int main(){
	int ****array;
	int m,n,o,p;
	int i,j,k,l;
	printf("\nfor array[m][n][o][p] enter value of m:\n");
	scanf("%d",&m);
	printf("\nfor array[m][n][o][p] enter value of n:\n");
	scanf("%d",&n);
	printf("\nfor array[m][n][o][p] enter value of o:\n");
	scanf("%d",&o);
	printf("\nfor array[m][n][o][p] enter value of p:\n");
	scanf("%d",&p);
	//ALLOCATING MEMORY
	array=(int****)malloc(m*sizeof(int***));
	for(i=0;i<m;i++)
	{
		array[i]=(int***)malloc(n*sizeof(int**));
		for(j=0;j<n;j++)
		{
			array[i][j]=(int**)malloc(o*sizeof(int*));
			for(k=0;k<o;k++)
				array[i][j][k]=(int*)malloc(sizeof(int));
		}
	}
	//accepting array
	printf("\nEnter %d elements:\n",m*n*o*p);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				for(l=0;l<p;l++)
					scanf("%d",&array[i][j][k][l]);
			}
		}
	}
	//displaying array
	printf("\nGiven array is:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
			{
				for(l=0;l<p;l++)
					printf("\narray[%d][%d][%d][%d]=%d\n",i,j,k,l,array[i][j][k][l]);
			}
		}
	}
	//deallocating memory
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			for(k=0;k<o;k++)
				free(array[i][j][k]);
			free(array[i][j]);
		}
		free(array[i]);
	}
	free(array);
	return 0;
}
