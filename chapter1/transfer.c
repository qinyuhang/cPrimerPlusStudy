#include<stdio.h>

int transferFunc()
{
    return 0;
}

int main()
{
	double cm = 0;
	double inch = 0;
	int choice = 0;
	printf("Enter 1 to transfer inch into cm");
	printf("\n");
	printf("Enter 2 to transfer cm into inch");
	printf("\n");
	scanf("%d",&choice);
	if (choice == 1)
	{
		printf("enter the inches:");
		scanf("%lf",&inch);
		cm = inch*2.54;
		printf("%lfinches is%lfcm ",inch,cm);
	}else{
		printf("enter cm");
		scanf("%lf",&cm);
		inch = cm/2.54;
		printf("%lfcms is%lfinch",cm,inch);
	}
	printf("\n");
	return 0;
}
