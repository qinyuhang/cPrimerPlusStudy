#include<stdio.h>
#include<float.h>

int main()
{
    float one = 1.0/3.0;
    double two = 1.0/3.0;
    printf("%10.4lf %10.4f\n",two, one);
    printf("%10.12lf %10.12f\n",two, one);
    printf("%10.16lf %10.16f\n",two, one);
    printf("%d %d\n", FLT_DIG, DBL_DIG);
}