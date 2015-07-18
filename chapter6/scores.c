#include<stdio.h>

#define SIZE 10
#define PAR 72

int main()
{
	int index, score[SIZE];
	int sum = 0;
	float ave;
	printf("enter %d golf scores:\n",SIZE);
    for(index = 0; index < SIZE; index++)
	{
		scanf("%d",&score[index]);
	}
	for(index = 0; index < SIZE; index++)
	{
		printf("%5d ",score[index]);
	}
	printf("\n");
	for(index = 0; index < SIZE; index++)
	{
		sum += score[index];
		ave = (float)sum / SIZE;
	}
	printf("Sum of scores = %d, average = %0.2f\n", sum, ave);
	printf("that's a handicap of %.0f.\n", ave - PAR);
	return 0;
}




