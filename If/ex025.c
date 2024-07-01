#include<stdio.h>
main() {
	char moji;
	printf("文字を入力\n");
	scanf("%c" &moji);
	
	if (moji >= 'A' && moji <= 'Z' ||  moji >= 'a' && moji <= 'z') {
		printf("アルファベットです\n");
	}
	else {
		if (moji >= '0' && moji <= '9') {
			printf("数字です\n");
		}
		else {
			("その他の文字です\n");
		}
	}

}