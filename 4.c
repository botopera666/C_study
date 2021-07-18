#include <stdio.h>

int main()
{
	int a, b, c;

	printf("a: ");
	scanf("%d", &a);

	printf("b: ");
	scanf("%d", &b);

	printf("c: ");
	scanf("%d", &c);

	if ( (a>b)&&(a>c) ) printf("a is the biggest\n");
	else printf("a is least smaller than either b or c\n");

	if ( (b>a)||(b>c) ) printf("b is least bigger than either a or c\n");
	else printf("b is smallest\n");
}
