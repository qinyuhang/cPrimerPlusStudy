#include<stdio.h>
#define pages 931
int main(void)
{
	printf("*%d*\n", pages);
	printf("*%2d*\n", pages);
	printf("*%10d*\n", pages);
	printf("*%-10d*\n", pages);
	return 0;
}
