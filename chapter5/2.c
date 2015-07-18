#include<stdio.h>

int main()
{
	printf("enter one num:\n");
	int x;
	int i = 0;
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{
		printf("%d\n",++x);
	}
	return 0;
}
