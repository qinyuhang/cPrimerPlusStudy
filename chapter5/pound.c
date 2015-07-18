#include<stdio.h>

int pound(int n);
int th(int n);

int main()
{
	int time = 5;
	char ch = '!';
	float f = 6.0;
	pound(time);
	pound(ch);
	pound((int)f);
	printf("main %d\n",pound(ch));
	return 0;
}

int pound(int n)
{
	int x = 0;
	while (n-- > 0)
	{
	printf("#");
	x++;
	}	
	printf("\n");
	return x; 
}

int th(int n);
{
	
}

