#include <stdio.h>

int main()
{
	char room=0;
	int i, j;

	printf("2, 7: turn on\n");
	printf("\n");

	room|=2;  //0000 0010
	room|=64;  //0100 0000
	//0100 0010

	if (room&1) printf("1: on\n");
	else printf("1: off\n");

	if (room&2) printf("2: on\n");
	else printf("2: off\n");

	if (room&64) printf("7: on\n");
	else printf("7: off\n");
	printf("\n");

	printf("2: turn off\n");
	room&=~2;  //0100 0010 & 1111 1101
	//0100 0000

	if (room&2) printf("2: on\n");	
	else printf("2: off\n");
	printf("\n");

	printf("if 1 is on, turn 1 off. if 1 is off, turn 1 on.\n");
	room^=1;  //0100 0000 ^ 0000 0001 
	//0100 0001
	
	if (room&1) printf("1: on\n");
	else printf("1: off\n");
	printf("\n");

	printf("Check the lights\n");

	for (i=1, j=1; i<=128; i=i*2, j++) //i=1, 2, 4, 8, 16, 32, 64, 128
	{
		if (room&i) 
			printf("%d: on\n", j);
		else
			printf("%d: off\n", j);
	}
}
