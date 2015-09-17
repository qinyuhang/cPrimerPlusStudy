#include<stdio.h>

int main()
{
	char string;
	int count = 0;
	if(scanf("%s",&string) == 1  && string != '#' )
	do{
		if(string == '.' || string == '!')
		{
			count++;
		}
	}while(scanf("%s",&string) == 1 && string != '#');
	printf("%d",count);
	return 0;
}
