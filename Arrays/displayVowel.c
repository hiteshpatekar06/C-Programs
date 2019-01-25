//WAP to accept a string and display all vovels from it
#include<stdio.h>
#include<string.h>

void acceptVovel(char given[],char accept[],int size)
{
	int i,j=0;
	for(i=0;i<size;i++)
	{
		switch(given[i])
		{
			case 'a':
			case 'A':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				accept[j]=given[i];
				j++;
				break;
		}
	}

}

int main()
{
	char array1[10],vovel[10];
	printf("\nEnter a string:\t");
	scanf("%s",array1);
	acceptVovel(array1,vovel,strlen(array1));
	printf("\nString with only vovel is %s\n",vovel);
	return 0;
}
