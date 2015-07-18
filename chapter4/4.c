#include<stdio.h>

void handleInch(void);
void handleCM(void);

int main()
{
	int choice;
	printf("feet[0] or cm[1]?");
	scanf("%d",&choice);
	if(choice == 0){
        handleInch();
    }else{
        handleCM();
    }
    return 0;
}

void handleInch(void)
{
    printf("what\'s your name:");
    char name[40];
    scanf("%s",name);
    printf("height in inch:");
    float height;
    scanf("%f",&height);
    printf("%s, you are %5.2f feet tall\n",name,height/12);
}

void handleCM(void)
{
    printf("what\'s your name:");
    char name[40];
    scanf("%s",name);
    printf("height in CM:");
    float height;
    scanf("%f",&height);
    printf("%s, you are %5.2f meter tall\n",name,height/100);
}