#include<stdio.h>
main() {
	int y;
	printf("��������:");
	scanf("%d",&y);
	
	if ((y%400==0)||((y%4==0)&&(y%100!=0))){
		printf("���邤�N�ł�\n");
	}
	else {
		printf("���邤�N�ł͂Ȃ��ł�\n");
	}

}