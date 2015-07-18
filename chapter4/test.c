#include<stdio.h>
#include<string.h>

#ifndef pi
#define pi 3.1415926
#endif

int main(void)
{
	char name[40];
	printf("what is your name\n");
	scanf("%s",name);
	printf("hello %s! %lu %lu %lu\n",name,strlen(name),sizeof name,sizeof(name));
	printf("%f\n",pi);
	return 0;
}
