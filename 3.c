#include <stdio.h>

main()
{
	int int_height=185.7;
	float float_height=185.7;
	//float(4)
	//double(8)
	double double_height=185.7;

	printf("int: %dcm, float: %fcm\n", int_height, int_height);
	printf("int: %dcm, float: %fcm\n", float_height, float_height);
	printf("int: %dcm, float: %fcm\n", double_height, double_height);
	//double 자료형은 %lf를 사용
}
