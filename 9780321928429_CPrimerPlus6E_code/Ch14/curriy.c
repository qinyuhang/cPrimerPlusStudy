#include <stdio.h>

int * sort_arr(void (*func)(int * b, int n) ,int * a, int m);
void max(int * b, int n);
void min(int * b, int n);

int
main()
{
    int arr[9] = {0,5,1,2,3,5,3,8,9};
    int * ar = arr;
    int i = 0;
    sort_arr(gg, ar, 9);
    for (i=0;i<9;i++){
        printf("%d", *(ar+i));
    }
    puts("");
    return 0;
}

// sort function
int *
sort_arr(void (*func)(int * b, int n) ,int * a, int m)
{
    (*func)(a, m);
    return a;
}

// sort function
void
max(int * b, int n)
{
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if ( *(b+i) > *(b+j)){
                k = *(b+i);
                *(b+i) = *(b+j);
                *(b+j) = k;
            }
        }
    }
}

// sort function
void
min(int * b, int n)
{
    int i,j,k;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if ( *(b+i) < *(b+j)){
                k = *(b+i);
                *(b+i) = *(b+j);
                *(b+j) = k;
            }
        }
    }
}
