#include<stdio.h>
main()
{
	int num;
	printf("���������\n");
	scanf("%d", &num);
	num=num/10;
	switch (num){
	case (1):
		printf("10�_��ł�\n");
		break;
	case (2):
		printf("20�_��ł�\n");
		break;
	case (3):
		printf("30�_��ł�\n");
		break;
	case (4):
		printf("40�_��ł�\n");
		break;
	default:
		printf("�G���[\n");
		break;
	}
}