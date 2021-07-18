#include <stdio.h>

double abc(int x, int y);

int main()
{
	int x, y;

	printf("value of x: ");
	scanf("%d", &x);
	printf("value of y: ");
	scanf("%d", &y);

	float z=abc(x, y);
	printf("z: %f\n", z);
}

double abc(int x, int y)
{
	return x+y+3.14;
}
