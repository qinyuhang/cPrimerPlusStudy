#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void checkPrimeNumber(int input)
{
	float squarOfInput;
	int i;
	int j;
	squarOfInput = sqrt(input);
	//printf(".2%f\n",squarOfInput);
	for(i=0;i<=input;i++)
	{
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j == 0)
			{
				//printf("not\n");
                break;
			}else
			{
				printf("%d\n",i);
                break;
			}

		}
	}
   
}

//int isprime(int n)
//{
//    for (int i=2;i<=sqrt(n);i++)
//    {
//        if (n%i==0)
//            break;
//            //return 0;
//    }
//    return n;
//}

int main(int argc, char * argv[])
{
	printf("Enter the number: ");
	int input;
	scanf("%d",&input);
    printf("2\n");
	checkPrimeNumber(input);
//    for (int x=0; x<=input; x++) {
//        printf("%d\n",isprime(x));
//    }
	return 0;
}
