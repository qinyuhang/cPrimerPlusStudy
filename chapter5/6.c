#include<stdio.h>

int main()
{
	printf("enter the finish day:\n");
	int finish;
	scanf("%d",&finish);
	int i = 0;
	int total = 0;
	for(i=0;i<finish+1;i++)
	{
		total += i*i;
	}
	printf("%d\n",total);
	return 0;
}
