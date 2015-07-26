#include<stdio.h>

int main()
{
	enum color_t { RED, GREEN, BLUE};
	enum color_t r = RED; // OK
	// color_t x = GREEN: // Error: color_t is not in ordinary name space
	typedef enum color_t color;
	color x = GREEN; // OK
	printf("%s",color_t r);
	return 0;
}
