#include<stdio.h>
#include<math.h>

double plus(int n);
double mins(int n);

int main()
{
	int times;
	double num1, num2;
	do{
	printf("Enter the times:");
	scanf("%d",&times);
	num1 = plus(times);
	num2 = mins(times);
	printf("the limit of 1+%d/i+1 is %5.2f\n",times, num1);
	printf("the limit of 1+%d/i+1 is %5.2f\n",times, num2);
	}while(scanf("%d",&times) == 1);	
	return 0;
}

double plus(int n)
{
	double i;
	double num;
	for(i=0.0;i<=n+1.0;i++)
	{
		num += 1.0/(i+1.0);
	}
	return num;
}

double mins(int n)
{
	double i;
	double num;
	int xOf = -1;
	for(i=1.0;i<=n+1.0;i++)
	{
		xOf *= -1;
		num += xOf*1.0/(i+1.0);
	}
	return num;
}

