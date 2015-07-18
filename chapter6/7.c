#include<stdio.h>

int main()
{
	float i, j, times, min;
	printf("enter two float number,the first: ");
	while(scanf("%f",&i) ==1)
	{
		printf("the second: ");
		while(scanf("%f",&j) == 1)
		{
			times = i * j;
			min = i - j;
			printf("%f\n",min/times);
			break;
		}
	}
	return 0;
}
