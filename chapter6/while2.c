#include<stdio.h>

int main()
{
	int n = 0;
	while (n++ < 3);
	printf("n is %d\n",n);
	printf("that's all this program does.\n");
	int num;
	char cha;
	while(scanf("%d",&num) == 1)
	{
		printf("error, enter other char!\n");
	}
	scanf("%c",&cha);
	printf("%c\n",cha);
	return 0;
	
}
