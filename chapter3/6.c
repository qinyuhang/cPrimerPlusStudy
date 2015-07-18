#include<stdio.h>

int main()
{
	float AtomNumberOfOneQuark = 950/(3e-23);
	double quarts = 0;
	float AtomsOfResult = 0;
	printf("Input quarts:");
	scanf("%lf", &quarts);
	AtomsOfResult = quarts*AtomNumberOfOneQuark;
	printf("%lf\n%e\n", AtomsOfResult, AtomsOfResult);
	return 0;
}
	
