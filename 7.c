#include <stdio.h>

main()
{
	int a=10;
	int b=20;
	int temp;

	printf("a: %d, b: %d\n", a, b);

	temp=a;
	a=b;
	b=temp;

	printf("a: %d, b: %d\n", a, b);
}
