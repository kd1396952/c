#include<stdio.h>
main()
{
	int i;
	char moji;
	printf("�A���t�@�x�b�g�������H");
	scanf("%c", &moji);
	for (i = moji; i < 'z'; i++)
	{
		printf("%c ", moji);
		moji++;
	}
}