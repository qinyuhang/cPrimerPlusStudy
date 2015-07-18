#include<stdio.h>

#define cmPerFeet 30.48
#define inchesPerFeet 12

int feet(int n);
int inches(int n);

int main()
{
	int height;
	printf("enter a height in centimeters:");
	scanf("%d",&height);
	int foot, inch;
	foot = feet(height);
	inch = inches(height);
	printf("%d cm = %d feet, %d inches\n",height,foot,inch );
}

int feet(int n)
{
	return n/cmPerFeet;
}

int inches(int n)
{
	return n-(n/cmPerFeet)*cmPerFeet;
}
