#include <stdio.h>

void bell()
{
	static int order=0;
	//정적 변수는 단 한 번만 생성되고 초기화됨
	//
	//static int order;
	//order=0;
	//모든 주문 번호가 1로 나옴
	
	order++;

	printf("현재 주문 번호는 %d\n", order);
}

int main()
{
	bell();
	bell();
	bell();
}
