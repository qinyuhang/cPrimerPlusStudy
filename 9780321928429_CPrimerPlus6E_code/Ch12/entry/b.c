#include <stdio.h>
// this will not find extern int a_in_a;
extern int get_a_in_a(void);
extern int get_b_in_a(void);//actually not work
int
main()
{
    int a_in_b;
    //extern int a_in_a;// will not cover the a_in_a in a.c file
    int b_in_b = 3;
    extern int b_in_a;
    a_in_b = get_a_in_a();
    // b_in_b = get_b_in_a();
    // because this func is using static define in a.c
    // so cannot call it in b.c even using a extern prototype
    printf("%d %d %d\n", a_in_b, b_in_a, b_in_b);// this should fail;
    return 0;
}
