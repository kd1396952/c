#include<stdio.h>
#include<stdlib.h>
#include<timeapi.h>

main()
{
	char s[21];
	int	k[20], i, n;

	srand(time(0));

	printf("文字列を入力して下さい＞");
	scanf("%s", &s[0]);

	for (i = 0; s[i] != '\0'; i++) {
		k[i] = rand() % 6;
		s[i] = s[i] + k[i];
	}
}	