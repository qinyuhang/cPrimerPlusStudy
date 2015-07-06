#include<stdio.h>

void printSmile(void);

int main()
{
	int times = 3;
	int i = 0;
	int j = 0;
    for(j=0;j<3;j++)
    {
        for(i=0;i<times;i++)
        {
            printSmile();
        }
        times -=1;
        printf("\n");
    }
    return 0;
}	

void printSmile(void)
{
    printf("Smile!");
}