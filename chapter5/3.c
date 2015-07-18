#include<stdio.h>

int main()
{
	int days = 1;
	while (days > 0)
	{
	printf("enter days:\n");
	scanf("%d",&days);
	if (days >0){
	printf("%d days are %d weeks %d days\n",days, days/7, days%7);
		}else{
		printf("error\n");
	}
	}	
	return 0;
}
