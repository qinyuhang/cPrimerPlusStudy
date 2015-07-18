#include<stdio.h>

#define ROWS 6
#define CHARS 10

int main()
{
	int row;
	char ch;
	for(row = 0; row < ROWS; row++)
	{
		for(ch = 'A'; ch < ('A' + 55); ch++)
		{
			printf("%c", ch);
		}
		printf("\n");
	}
	for(ch = 0; ch < 127; ch++)
	{
		printf("%d%c ",ch, ch);
	}
	printf("\n");
	return 0;
}
