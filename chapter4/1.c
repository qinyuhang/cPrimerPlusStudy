#include<stdio.h>
#include<string.h>

int main()
{
	printf("enter your first name and last name:\n");
	char firstName[50];
	char lastName[50];
    printf("firstName:\n");
	scanf("%s",firstName);
    printf("lastName\n");
	scanf("%s",lastName);
	printf("hi! %s %s\n", firstName, lastName);
    int x = 55;
    printf("%#x %d %#o\n",x,x,x);
    float y = 200.076;
    y += x;
    printf("\"%#5x\" \"%-#5x\" \"%5.5f\" \"%5f\" \"%5d\"\n",x,x,y,y,x);
    return 0;
}
