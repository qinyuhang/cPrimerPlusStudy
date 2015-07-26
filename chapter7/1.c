#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

int main()
{
	printf("Enter words(end with #)");
	char ch;
    char pre;
	int lines = 0;
    int words = 0;
    int spaces = 0;
    int chars = 0;
    bool isWord = false;
	while((ch=getchar())!='#')
	{
        if (ch>='A'&&ch<='z') {
            chars++;
        }else if(ch == '\n')
		{
			lines++;
		}else if(ch == ' ')
        {
            if (pre != ' ' && pre != '\n' && pre != '\t') {
                words++;
                words+=lines;
            }
            spaces++;
        }
	}
    printf("lines: %d words: %d spaces: %d chars: %d\n",lines,words,spaces,chars);
    return 0;
}
