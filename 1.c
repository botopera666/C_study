#include <stdio.h>

int main()
{
	int a=1, b;

	b=++a;

	printf("a: %d\n", a);  //2
	printf("b: %d\n", b);  //2
	printf("\n");

	a=1;
	b=a++;

	printf("a: %d\n", a);  //2
	printf("b: %d\n", b);  //1
}
