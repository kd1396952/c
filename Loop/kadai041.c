#include<stdio.h>
main()
{
	int i,gokei,a;
	gokei = 0,a=0;
	printf("�����i�|�X�X�X�ŏI���j�H");
	scanf("%d", &i);
	while (i != -999) {
		gokei += i;
		printf("�����i�|�X�X�X�ŏI���j�H");
		scanf("%d", &i);
		a++;
	}
	printf("���v��%d", gokei);
	printf("���ρ�%.2f",(float)gokei/a); 
}