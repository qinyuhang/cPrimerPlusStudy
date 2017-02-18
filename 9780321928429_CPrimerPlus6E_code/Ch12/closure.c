#include<stdio.h>
#include<stdlib.h>

long long countNum();

int main(int argc, char * argv[])
{
    long long loopN;
    long long count;
    if (argv[1]){
        loopN = atol(argv[1]);
    }
    else{
        loopN = 500;
    }
    for(int i=0;i<loopN;i++){
        count = countNum();
    }
    printf("%lld\n",count);
    return 0;
}

long long countNum(){
    static long count;
    return count++;
}
