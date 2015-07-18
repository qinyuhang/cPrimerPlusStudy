#include<stdio.h>
#include<string.h>

int main()
{
	printf("enter name:");
	char name[50];
	scanf("%s",name);
	printf("\"%s\"\n",name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("   %s\n",name);
	return 0;
}
