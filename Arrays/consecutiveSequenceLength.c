#include<stdio.h>
#include<stdlib.h>

int consecutiveSequenceLength(int *array,int length)
{
	if(array==NULL)
		return 0;
	int i;
	int result=1;
	int sequenceLength=1;
	for(i=0;i<length;i++)
	{
		if(array[i+1]==array[i]+1)
		{
			sequenceLength++;
			if(i+1==length-1&&sequenceLength>result)
			{
				result=sequenceLength;
			}
			continue;
		}
		else
		{
			if(sequenceLength>result)
			{
				result=sequenceLength;
			}
			sequenceLength=1;
		}
	}
	return result;
}

int main()
{
	int *array=NULL;
	int length=0;
	int i;
	printf("\nEnter count of elements: ");
	scanf("%d",&length);
	array=(int*)malloc(length*sizeof(int));
	printf("\nEnter %d sorted elements: ",length);
	for(i=0;i<length;i++)
	{
		scanf("%d",&array[i]);
	}
	int resultLength=consecutiveSequenceLength(array,length);
	printf("\nLength of consecutive sequence is %d\n",resultLength);
	free(array);
	return 0;
}
