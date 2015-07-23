#include<stdio.h>

int main()
{
	int num[8] = {1,3,4,5,6,7,85,34};
	long score[8];
	int index = 0, j;
	for(index = 0;index < 8;index++)
	{
		for(j=0;j<num[index];j++)
		{	
			score[index] *= 2;
		}
	}
	for(index=0;index<8;index++)
	{
		printf("%d %ld",num[index],score[index]);
	}	
	printf("\n");
	return 0;
}
