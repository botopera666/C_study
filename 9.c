#include <stdio.h>

int func1()
{
	return 1;
}

char func2()
{
	return 'a';
}

void func3()
{
	printf("hello\n");
}

void func4(float x)
{
	printf("x: %f\n", x);
}


int main()
{
	int a=func1();
	printf("func1(): %d\n", a);

	char b=func2();
	printf("func2(): %c\n", b);
	//printf("func2(): %c\n", func2());

	func3();

	float c;
	printf("func4(): ");
	scanf("%f", &c);
	func4(c);
}

	
