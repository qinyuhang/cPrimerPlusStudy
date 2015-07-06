#include<stdio.h>

int main()
{
	float cm, inch;
	int choice;
	printf("Enter 1 to transfer inch to cm, Enter 2 to transfer cm to inch\n");
	scanf("%d",&choice);
	if (choice == 1)
	{
	printf("Enter hight in inch:");
	scanf("%f",&inch);
	printf("the cm of your hight is %lf\n",inch*2.54);
	}else if(choice ==0){
	printf("Enter hight in cm:");
	scanf("%f",&cm);
	printf("the inch of your hight is %lf\n",cm/2.54);
	}else{
	printf("\aError!");
	}
	return 0;
}

