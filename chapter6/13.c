#include<stdio.h>

int main()
{
	double num[8];
	double plus[8];
	int index, i;
	for(index=0;index<8;index++)
	{
		scanf("%lf",&num[index]);
	}
	for(index=0;index<8;index++)
	{
		for(i=0;i<=index;i++)
		{
			plus[index]+=num[i];
		}
	}
    printf("array one is:\n");
	for(index=0;index<8;index++)
	{
		printf("%10.2lf",num[index]);
	}
    printf("\n");
    printf("array two is:\n");
    for(index=0;index<8;index++)
    {
        printf("%10.2lf",plus[index]);
    }
    printf("\n");
	return 0;
}
