#include<stdio.h>
#include<ctype.h>
#include<stdbool.h>
#define STOP '|'
int main()
{
	char c;
	char pre;
	long numOfChars = 0L;
	int numOfWords = 0;
	int numOfLines = 0;
	int pNumOfLines = 0;
	bool inword = false;
	
	printf("Enter text to be analyzed(| to terminate):\n");
	pre = '\n';
	while((c = getchar()) != STOP)
	{
		numOfChars++;
		if(c == '\n')
		{
			numOfLines++;
		}
		if(!isspace(c) && !inword)
		{
			inword = true;
			numOfWords++;
		}
		if(isspace(c) && inword)
		{
			inword = false;
		}
	pre = c;
	}
	if(pre != '\n')
	{
		pNumOfLines++;
	}
	printf("char: %ld, words %d, lines %d", numOfChars, numOfWords, numOfLines);
	printf("Partial lines: %d\n",pNumOfLines);
	return 0;
}
