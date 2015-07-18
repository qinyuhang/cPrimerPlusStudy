#include<stdio.h>

int main()
{
	int start, end, i, t;
	printf("Enter start number: ");
	scanf("%d",&start);
	printf("Enter end number: ");
	scanf("%d",&end);
	t = start;
	for(i = start; i <= end; i++)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
	}
	return 0;
}
