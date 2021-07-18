#include <stdio.h>

int ten_two(unsigned num)
{
	for (int i=7; i>=0; --i)
	{
		int result=num>>i&1;
		printf("%d", result);
	}
}


int main()
{
	int a=187;
	int b=104;
	int c=10;

	printf("%d&%d=%d\n", a, b, a&b);
	printf("%d|%d=%d\n", a, b, a|b);
	printf("%d^%d=%d\n", a, b, a^b);
	printf("c=%d, ~c=%d\n", c, ~c);

	int a2=ten_two(a);
	int b2=ten_two(b);
	int c2=ten_two(c);

}
