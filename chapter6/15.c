#include<stdio.h>

int main()
{
	double da =100, de=100;
	int i = 0;
	do{
		da += 100*0.1;
		de *= 1.05;
		i++;
	}while(de <= da);
	printf("Time is %d Daphne is %lf Deirdre is %lf\n",i,da,de);
	return 0;
}
