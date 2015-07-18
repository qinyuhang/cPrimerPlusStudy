#include<stdio.h>
int main()
{
	int index = 0;
	char ch[100];
	printf("enter one word: ");
	while(scanf("%c",&ch[index]) == 1 && ch[index]<='z' && ch[index] >= 'A')
	{
		index++;
	}
	int k = index;
	for(index = k; index >= 0;index--)
	{
		printf("%c",ch[index]);
	}
	printf("\n");
	return 0;
}
