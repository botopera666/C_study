#include <stdio.h>

void func10(int x);

int main()
{
	int a=1, b=3, c=5;

	func10(a);
	func10(b);
	func10(c);
}

void func10(int x)
{
	x=x*10;
	printf("x10: %d\n", x);
}

func3(char a, int b, double c);
