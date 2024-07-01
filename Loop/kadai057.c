#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("アルファベット大文字？");
	scanf("%c", &moji);
	for (i = moji; i < 'Z'; i++)
	{
		printf("%c ", moji);
		moji++;
	}
}