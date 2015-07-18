#include<stdio.h>
#include<string.h>
int main()
{
	char lastName[40];
	char firstName[40];
	printf("what\'s your Lastname:\n");
	scanf("%s",lastName);
	printf("what\'s your FirstName:\n");
	scanf("%s",firstName);
	printf("%10s %10s\n",firstName, lastName);
	printf("%10lu %10lu\n",strlen(firstName),strlen(lastName));
    printf("%-10s %-10s\n",firstName, lastName);
    printf("%-10lu %-10lu\n",strlen(firstName),strlen(lastName));
	return 0;
}
