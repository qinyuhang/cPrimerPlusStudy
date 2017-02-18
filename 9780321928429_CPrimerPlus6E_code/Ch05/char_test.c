#include<stdio.h>
int main()
{
    char ch = 'A';
    int i;
    for(i=0; i< 500; i++){
        printf("%c", ch);
        ch++;
    }
    return 0;
}
