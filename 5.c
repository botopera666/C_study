#include <stdio.h>

int main()
{
	int a, b;

	printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	printf("입력된 두 수 중 큰 값은 %d\n", a>b?a:b);
}
