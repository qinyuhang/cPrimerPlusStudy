#include<stdio.h>

double Temperatures(double n);

int main()
{
	double fah;
	printf("enter Fahrenheit temporatures:");
	while(scanf("%lf",&fah) == 1)
	{
	Temperatures(fah);
	}
	return 0;
}

double Temperatures(double n)
{
	const double fahPerCel = 1.8;
	const double kelPlus = 273.16;
	double cel;
	double  kel;
	cel = n*fahPerCel;
	kel = cel + kelPlus;
	printf("%.2lf Fahrenheit is %.2lf Celsuis or %.2lf Kelvin\n",n, cel, kel);
	return 0.0;
}
