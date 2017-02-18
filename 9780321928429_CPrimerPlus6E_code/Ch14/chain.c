#include <stdio.h>

struct log {
    char * msg;
    struct log * next;
};

int
main(int argc, char * argv[])
{
    int i, j, k;
    struct log logs[1000];
    for (i=0;i<1000;i++){
        logs[i] = struct log {
            fprintf("message %d", i),
        }
    }
    return 0;
}
