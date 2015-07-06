#include<stdio.h>

int main()
{
	int x = 0;
	int y = 2;
	for(x=0;x<32;x++){
	y = y*2;
	printf("%d %d %d\n",y-1, y,y+1);
	}	
	return 0;
}
