#include <stdio.h>

int main()
{
	printf("0&&0: %d\n", (1>2)&&(1>3));
	printf("0&&1: %d\n", (1>2)&&(3>1));
	printf("1&&1: %d\n", (2>1)&&(3>1));
	printf("\n");

	printf("0||0: %d\n", (1>2)||(1>3));
	printf("0||1: %d\n", (1>2)||(3>1));
	printf("1||1: %d\n", (2>1)||(3>1));
	printf("\n");

	printf("!0=%d\n", !(1>2));
	printf("!1=%d\n", !(2>1));
} 
