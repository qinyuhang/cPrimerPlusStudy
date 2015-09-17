#include <stdio.h>

int main()
{
	int num;
	int one = 0;
	int two = 0;
    if (scanf("%d",&num) == 1 && num != 0 )
    do {
         {
            if( num%2 == 0)
            {
                two++;
            }else{
                one++;
            }
        }
    } while (scanf("%d",&num)==1 && num!=0);
    

    
//	while( (int)(num = getchar()) < 0 && (int)(num = getchar()) >= 9)
		printf("%d %d\n",one,two);
	return 0;
}
