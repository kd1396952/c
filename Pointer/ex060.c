#include<stdio.h>
main()
{
	char data[] = "Language", * p_data, ch;
	int i;

	int flg = 0;

	printf("data[]=%s\n", data);
	printf("���������́H");
	scanf("%c", &ch);

	printf("�������ʂ́A");
	for (p_data = data, i = 0; *(p_data + i) != '\0'; i++)
	{
		if (ch == *(p_data + i))
		{
			printf(" %d ", i + 1);
			flg = 1;
		}
	}
	if (flg == 1)
	{
		printf("�����ڂł�\n");
	}
	else
	{
		printf("������܂���ł����B\n");

	}
}