#include <stdio.h>

int main(int argc, char * argv[])
{
    FILE * fp;
    char ch;
    if ( argc < 2 ){
        puts("Usage pro filename");
    }
    if((fp = fopen(argv[1], "w")) == NULL){
        puts("error open file");
        return 1;
    }
    while((ch = getc(fp)) != EOF){
        putchar(ch);
    }
    fclose(fp);
    return 0;
}
