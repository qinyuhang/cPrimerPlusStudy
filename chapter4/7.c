#include<stdio.h>
#define miles2kms = 
int main()
{
    double miles;
    double gas;
    double kms;
    double lites;
    printf("enter your miles:\n");
    scanf("%lf",&miles);
    printf("enter your gases in galun\n");
    scanf("%lf",&gas);
    printf("miles per galun:%.1lf\n",miles/gas);
    kms = miles*1.609;
    lites = gas/3.785;
    printf("lites per 100KM:%.1lf\n",lites*100/kms);
    return 0;
}