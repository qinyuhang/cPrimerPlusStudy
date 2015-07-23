#include<stdio.h>

#define rate 0.08
int main()
{
    double lotu = 1000000;
	int y = 0;
	do{
		lotu *= (1+rate);
		lotu -= 100000;
		y++;
	}while(lotu > 0);
	printf("%d\n",y-1);
	return 0;	
}

