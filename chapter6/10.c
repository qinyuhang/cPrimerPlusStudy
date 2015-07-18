#include<stdio.h>

int main()
{
	int num[10];
	int index;
	printf("enter 8 numbers:");
	for(index=0;index<10;index++)
	{
		if(scanf("%d",&num[index]) == 1)
		{
			
		}else{
			break;
			}
	}
	for(;index>0;index--)
	{
		printf("%d",num[index]);
	}
}

