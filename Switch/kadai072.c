#include<stdio.h>
main()
{
	char moji;
	printf("�A���t�@�x�b�g�H");
	scanf("%c", &moji);
	switch (moji)
	{
	case'A':
	case'a':
		printf("America\n");
		printf("Australia\n");
		break;
	case'E':
	case'e':
		printf("England\n");
		break;
	case'F':
	case'f':
		printf("France\n");
		break;
	default:
		printf("japan\n");
	}
}