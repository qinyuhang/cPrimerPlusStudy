#include <stdio.h>
extern int t1();
extern int t1_val;


int main()
{
    int x;
    t1_val = 999;
    x = t1();
    printf("%d", x);
    return 0;
}
