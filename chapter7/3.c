#include <stdio.h>

int main()
{
	char num;
	int one = 0;
	int two = 0;
	while((num = getchar()) < '0' && (num = getchar()) >= '9')
	{
		if(int(num)%2 == 0)
		{
			two++;
		}else{
			one++;
			}
	}
	printf("%d %d\n",one,two);
	return 0;
}
