#include<stdio.h>
main()
{
	int i;
	printf("文字コード（ー１で入力終了）？");
	scanf("%d",&i);
	while (i != -1)
	{
		printf("%c\n", i);
		printf("文字コード（ー１で入力終了）？");
		scanf("%d", &i);
	}
}