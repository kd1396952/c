#include<stdio.h>
main()
{
	char moji;
	printf("�P�������́H");
	scanf("%c", &moji);
	if (moji >= 'a' && moji <= 'z')
	{
		printf("�ϊ����ʂ�%c", moji-0x20);
	}
	else {
		if (moji >= 'A' && moji <= 'Z')
		{
			printf("�ϊ����ʂ�%c", moji + 0x20);
		}

		else {
			printf("�ϊ����ʂ�%c", moji);
		}
	}
}