#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[])
{
    double * pt;
    pt = malloc(30 * sizeof(double));
    for(int i=0;i<30;i++){
        *(pt + i) = i * 1.21;
    }
    for(int i=0;i<30;i++){
        printf("%f %p\n",*(pt + i),pt+i);
    }
    free(pt);
    return 0;
}
