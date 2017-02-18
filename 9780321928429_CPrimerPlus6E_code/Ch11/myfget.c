#include<stdio.h>
#define SIZE 5
int main()
{
    char str[SIZE];
    fgets(str, 5,stdin);
    printf("get\n");
    fputs(&str[3], stdout);
    return 0;

}
