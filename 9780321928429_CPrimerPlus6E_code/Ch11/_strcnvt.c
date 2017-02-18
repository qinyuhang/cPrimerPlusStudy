/* strcnvt.c -- try strtol()  */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LIM 30
char * s_gets(char * st, int n);

int main()
{
    char number[LIM];
    char * end;
    long value;
    long vv;

    puts("Enter a number (empty line to quit):");
    while(s_gets(number, LIM) && number[0] != '\0')
    {
        if ( strncmp(number,"0x",2)||strncmp(number,"0X",2) ){
            vv = strtol(number, &end, 16);
            printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
                          vv, end, *end);

        }
//       value = strtol(number, &end, 10);  /* base 10 */
//       printf("base 10 input, base 10 output: %ld, stopped at %s (%d)\n",
//              value, end, *end);
//       value = strtol(number, &end, 16);  /* base 16 */
//       printf("base 16 input, base 10 output: %ld, stopped at %s (%d)\n",
//              value, end, *end);
//       puts("Next number:");
    }
    puts("Bye!\n");

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}
