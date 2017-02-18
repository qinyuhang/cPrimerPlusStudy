#include<stdio.h>

int main()
{
    int * p;
    int (*pz)[3];
    int ar[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int i;
    p = &ar[0][0];
    pz = &ar[0];
    for(i=0;i<6;i++){
        printf("%d ", *(p));
        printf("%p ", p);
        p++;
        printf("%p \n", *(pz++));
    }
    return 0;
}
