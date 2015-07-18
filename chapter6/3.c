#include<stdio.h>
#define line 6
int main()
{
	int i,j;
	for(i = 0;i < line;i++)
	{
		char ch = 'F';
		for(j = 0;j < i+1;j++)
		{
			printf("%c",ch - j);
		}
		printf("\n");
	}
	return 0;
}
