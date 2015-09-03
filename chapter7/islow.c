#include<stdio.h>
#include<ctype.h>

int main()
{
	char ch = 'a';
	getcahr(ch);
	if(islower(ch))
	{
		printf("low\n");
	}else if(isdigit(ch))
	{
		printf("number\n");
	}
	return 0;
}
