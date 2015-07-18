#include<stdio.h>
#include<math.h>

int main()
{
	float x;
	float y;
	printf("enter the base:");
	scanf("%f",&x);
	printf("enter the raise:");
	scanf("%f",&y);
	float z = pow(x,y);
	printf("%f\n",z);
	return 0;
}
