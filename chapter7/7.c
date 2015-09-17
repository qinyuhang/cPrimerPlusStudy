#include<stdio.h>
#define basicS 10
#define basicH 40
#define _300f 0.15
#define _1150 0.20
#define rest 0.25
#define hoursOfAWeek 168

int main()
{
	int hours;
	int hoursMore;
	float salary;
	printf("Enter hours peer week: ");
	scanf("%d",&hours);

	do{

	hoursMore = hours - basicH;
	if(hours > hoursOfAWeek)
	{
		printf("Wrong number! Please enter again");
	}else if(hoursMore >= 0)
	{
		salary = basicH * basicS + hoursMore * 1.5 * 10;
		if(salary >= 300 && salary <= 450)
		{
			salary = 300 * _300f + (salary - 300) * _1150;
		}else if(salary <= 300){
			salary = 300 * _300f;
		}else if(salary >= 450){
			salary = 300 * _300f + 150 * _1150 + (salary - 450) * rest;
		}
	}
	printf("%.2f\n",salary);
	}while(printf("Enter hours peer week: ")  && scanf("%d",&hours));
	return 0;
}
