#include<stdio.h>

float cube(float n);

int main()
{
	float n;
	printf("enter one number:\n");
	scanf("%f",&n);
	printf("%.2f\n",cube(n));
	return 0;
}

float cube(float n)
{
	return n*n*n;
}
