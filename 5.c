#include <stdio.h>

int test1(void) //입력 없음, 출력 정수
{
	return 10;
}

void test2(int x)  //입력 정수, 출력 없음
{
	printf("value from main(): %d\n", x);
}

void test3(void)  //입력 없음, 출력 없음
{
	printf("Hello\n");
}

main()  //입력 없음, 출력 없음
{
	int result;
	result=test1();

	printf("value from test1(): %d\n", result);

	test2(3);

	test3();
	test3();
	test3();
}
