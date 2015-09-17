#include<stdio.h>

int main()
{
	char pre;
	char ch;
	int count = 0;
//	scanf("%s",&ch);
	ch = getchar();
	do{
		pre = ch;
//		scanf("%s",&ch);
		ch = getchar();
		if(ch == 'i' && pre == 'e')
		{
			count++;
		}
	}while(ch != '#');
	printf("%d",count);
	return 0;
}
