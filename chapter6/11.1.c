#include<stdio.h>

int main()
{
	int i;
	int n = 10;
	double x;
	for(i=0;i<n;i++)
	{
		x += 1/(i+1);
	}
	printf("%f",x);
	return 0;
}
