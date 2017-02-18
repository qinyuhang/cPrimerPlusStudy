#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int main(int argc, char * argv[])
{
    char x = 'X';
    int y;
    int z;
    y = isupper(x);
    z = atoi("0xff");
    printf("%d %d", y, z);
    return 0;
}
