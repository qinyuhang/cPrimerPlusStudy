#include<stdio.h>

int main()
{
    int i, sum;
    int lower = 0;
    int upper = 1;
    
    while (lower < upper ) {
        printf("enter lower and upper integer limits:");
        scanf("%d",&lower);
        scanf("%d",&upper);
       
        if (lower == upper) {
            printf("Error!\a lower equa to upper\n");
            break;
        }else{
            for(i=lower;i<=upper;i++)
            {
                sum += i*i;
            }
        printf("the sum of the squares form %d to %d is %d\n",lower ,upper ,sum);
        }
    }
    return 0;
}
