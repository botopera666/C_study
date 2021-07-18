#include <stdio.h>

double abc(int x, int y)
{
	return x+y+3.14;
}

int main()
{
	int x, y;
	float z;

	printf("value of x: ");
	scanf("%d", &x);
	printf("value of y: ");
	scanf("%d", &y);

	z=abc(x, y);
	printf("z: %f\n", z);
}
