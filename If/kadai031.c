#include<stdio.h>
main()
{
	double a, b;
	printf("�Q�̎����l�H");
	scanf("%lf%lf", &a, &b);
	if (a < b) {
		printf("�傫���ق��́�%f", b);
	}
	else {
		printf("�傫���ق��́�%f", a);
	}
}