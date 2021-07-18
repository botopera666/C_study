#include <stdio.h>

int a=1;

void func1()
{
	printf("func1()\n");
	printf("func1() a: %d\n", a);
	printf("func1() b: %d\n", b);
}

int main()
{
	int b=2;  //main() 내에서만 쓸 수 있는 b

	pirntf("main()\n");
	printf("main() a: %d\n");
	printf("main() b: %d\n");

	func1();  //'b' undeclared
}
