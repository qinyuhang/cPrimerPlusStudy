#include<stdio.h>
void print3times(void);
void printPress(void);
int main()
{
	print3times();
	print3times();
	print3times();
	printPress();
	return 0;
}

void print3times(void)
{
	printf("For he's a jolly good fellow!\n");
	return;
}

void printPress(void)
{
	printf("Which nobody can deny!\n");
	return;
}
