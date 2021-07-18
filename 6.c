#include <stdio.h>

void bell()
{
	int order=0;

	order++;
	printf("현재 주문 번호는 %d.\n", order);
}

int main()
{
	bell();
	bell();
	bell();
}
