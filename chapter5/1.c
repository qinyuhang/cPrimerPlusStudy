#include<stdio.h>

#define sec 60

int main()
{
	int time = 0;
	while (time >=0)
	{
		printf("enter minutes:\n");
		scanf("%d",&time);
		printf("the time is %d hour %d min\n",time/sec, time%sec);
	}
	printf("the num you enter is below 0");
	return 0;
}
