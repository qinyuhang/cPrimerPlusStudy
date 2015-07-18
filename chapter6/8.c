#include<stdio.h>
int fun(float n,float m);
int main()
{
	float i, j, times, min;
	printf("enter two float number,the first: ");
	while(scanf("%f",&i) ==1)
	{
		printf("the second: ");
		while(scanf("%f",&j) == 1)
		{
			fun(i,j);
			break;
		}
	}
	return 0;
}

int fun(float n, float m)
{
	float times, min;
	times = n * m;
	min = n - m;
	printf("%f\n",min/times);
	return 0;
}
