#include<stdio.h>

int main()
{
	double AtomNumberOfOneQuark = 950/(3/100000000000000000000000);
	double quarts = 0;
	float AtomsOfResult = 0;
	printf("Input quarts:");
	scanf("%lf", &quarts);
	AtomsOfResult = quarts*AtomNumberOfOneQuark;
	printf("%lf", AtomsOfResult);
	return 0;
}
	
