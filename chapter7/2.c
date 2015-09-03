#include <stdio.h>

int main()
{
	char ch;
	char cha[1000];
	int index = 0;
	while((ch=getchar()) != '#')
	{
		cha[index] = ch;
		index++;
	}
	int finish = index;
	for(index=0;index<finish;index++)
	{
		printf("%3d ",cha[index]);
		if((index-7)%8 == 0)
		{
			printf("\n");
		}
	}
	if(index<7)
	{
		printf("\n");
	}
	return 0;
}
