#include <stdio.h>

main() 
{
	char a, b, c, d, e; //sizeof(char)==1
	//-128~127
	//short(2)
	//int(4)
	//long(8)
	//long long(8)

	a=127; //127
	b=128;  //-128
	c=-128; //-128
	d=129;  //-127
	e=-129;  //127

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n", c);
	printf("d=%d\n", d);
	printf("e=%d\n", e);
}


