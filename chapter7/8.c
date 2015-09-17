#include<stdio.h>
#include<stdlib.h>
//#define basicS 10
#define basicH 40
#define _300f 0.15
#define _1150 0.20
#define rest 0.25
#define hoursOfAWeek 168

float switchKey()
{
    int choice;
    float basicS;
    printf("******************************\n");
    printf("Enter the number corresponding to the desired pay rate or action:\n");
    printf("1 \x29 $8.75/hr	2 \x29 $9.33/hr\n3 \x29 10.00/hr	4 \x29 11.20/hr\n5 \x29 quit\n");
    printf("******************************\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: basicS = 8.75;break;
        case 2: basicS = 9.33;break;
        case 3: basicS = 10.00;break;
        case 4: basicS = 11.20;break;
        case 5:exit(1);break;
        default:printf("Please enter number between 1 an 5\n");
    }
    return basicS;
}

int main()
{
    int hours;
	int hoursMore;
    int choice;
	float salary;
    float basicS;
    
    basicS = switchKey();
    //printf("%f",basicS);
	printf("Enter hours peer week: ");
	scanf("%d",&hours);
   
	do{
//        printf("Enter hours peer week: ");
//        scanf("%d",&hours);
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
        printf("Salary is %.2f\n",salary);
        printf("\n\n\n");
        basicS = switchKey();
        
    }while(printf("Enter hours peer week: ")  && scanf("%d",&hours));
	return 0;
}
