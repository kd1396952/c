#include<stdio.h>
main()
{
	char s[i];
	int i;
	printf("暗号化文字列入力を入力してください>");
	scanf("%s", &s[0]);

	i = 0;
	while (s[i] != '\0') {
		s[i]--;
		i++;
	}
	printf("複号済み文字列は%s\n", &s[0]);
}