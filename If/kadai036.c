#include<stdio.h>
main()
{
	int a, b;
	printf("�����P�H");
	scanf("%d", &a);
	printf("�����Q�H");
	scanf("%d", &b);
	if (a > b)
	{
		printf("%d�̕���%d���%d�傫��", a, b, a - b);
	}
	else {
		if(a<b)
		{
			printf("%d�̕���%d���%d������", a, b, b - a);
		}
		else {
			printf("%d��%d�͓�����", a, b);
		}
	}
}