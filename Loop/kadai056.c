#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("アルファベット小文字？");
	scanf("%c", &moji);
	for (i = moji; i < 'z'; i++)
	{
		printf("%c ", moji);
		moji++;
	}
}