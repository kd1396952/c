#include<stdio.h>
main() {
	char m;
	printf("文字を入力:");
	scanf("%c", &m);

	if (m >= 'A' && m <= 'Z'){
		print("変換すると\n", m == m + 0x20);
}
	else{
		if(m>='a'&&m<='z'){
			printf