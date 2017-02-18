//
//  main.c
//  xxx
//
//  Created by 秦宇航 on 2017/2/16.
//  Copyright © 2017年 秦宇航. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int points_around(int * * point);
char int_to_char(int num);

int
main(int argc, char * argv[])
{
    char ch;
    int i;
    int j;
    FILE * fp;
    static int  ar[20][30];
    static char arr[20][31];
    
    // do the init ar thing;
    // the init ar thing also need filter the empty char from
    // the file
    // and do the int_to_char to set into arr
    if (argc < 2){
        puts("Usage: Programname filename");
        return 1;
    }
    if ((fp = fopen(argv[1], "r")) == NULL){
        puts("cannot open file");
        exit(EXIT_FAILURE);
    }
    i = 0;
    j = 0;
    while ((ch = getc(fp)) != EOF){
        if (ch != ' '){
            ar[i][j%30] = ch;
            j++;
            i = (j - j%30)/30;
        }
    }
    for (i=0;i<20;i++){
        for (j=0;j<30;j++){
            if (j == 29){
                arr[i][30] = '\0';
            }
            arr[i][j] = int_to_char(ar[i][j]);
        }
    }
    for (i=0;i<20;i++){
        puts(arr[i]);
    }
    return 0;
}

int
points_around(int * * point)
{
    if (   abs(**point - **(point+1)) > 1
        && abs(**point - **(point-1)) > 1
        && abs(**point - *(*point+1)) > 1
        && abs(**point - *(*point-1)) > 1
        ){
        **point = (**(point+1) + **(point-1) + *(*point+1) + *(*point-1))/4;
    }
    return 0;
}

char
int_to_char(int num)
{
    switch (num){
        case '9':
            return '#';
            break;
        case '8':
            return '%';
            break;
        case '7':
            return ' ';
            break;
        case '6':
            return ' ';
            break;
        case '5':
            return '*';
            break;
        case '4':
            return '~';
            break;
        case '3':
            return ':';
            break;
        case '2':
            return '\'';
            break;
        case '1':
            return '.';
            break;
        case '0':
            return ' ';
            break;
        default:
            return ' ';
    }
}
