#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void fillArray(double ar[], int n)
{
	int index;
	for(index = 0; index < n; index++);
	ar[index] = ((double)rand() + 5) / ((double)rand() +0.1);
}

 
int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
    // return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
}
 
int main(void)
{
//    int ints[] = { -2, 99, 0, -743, 2, INT_MIN, 4 };
//    int size = sizeof ints / sizeof *ints;
	int num;
	printf("Enter number of array");
	scanf("%d",&num);
	double ar[num];
	int sizeAr = sizeof ar / sizeof *ar;
	fillArray(ar,num);

// 	printf("%d",size);
  //  qsort(ar, num, sizeof(ar), compare_ints);
 
    for (int i = 0; i < num; i++) {
        printf("%9.4f", ar[i]);
    }
 
    printf("\n");
}
