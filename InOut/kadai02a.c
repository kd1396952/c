#include<stdio.h>
main()
{
	double a,b;
	printf("2つの実数値？");
	scanf("%lf%lf", &a, &b);
	printf("***2.2と3.3の四則計算***\n");
	printf("和＝%f ", a + b);
	printf("差＝%f ", a - b);
	printf("積＝%f ", a * b);
	printf("商＝%f ", a / b);
}