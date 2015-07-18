#include<stdio.h>

int main()
{
	char ch[26];
	int index = 0;
	for(index = 0;index < 26; index++)
	{
		ch[index] = 'a' + index;
	}
	for(index = 0;index < 26; index++)
	{
	printf("%c",ch[index]);
	}
	printf("\n");
	return 0;
}

