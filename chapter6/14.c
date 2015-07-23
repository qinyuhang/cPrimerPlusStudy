#include<stdio.h>

int main()
{
	char ch[255];
	int i;
	for(i=0;i<255;i++)
	{
		scanf("%c",&ch[i]);
		if(ch[i]=='\n')
		{break;}
	}
	int x = i;
	for(i=x;i>=0;i--)
	{
		printf("%c",ch[i]);
	}
	printf("\n");
	return 0;
}
