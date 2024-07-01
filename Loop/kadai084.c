#include<stdio.h>
main()
{
	int a, b;
	while (1) {
		printf("整数1(-999で終了)？");
		scanf("%d", &a);
		printf("整数2(-999で終了)？");
		scanf("%d", &b);

		if (a == -999) break;

		if (b == -999) break;

		if (b == 0)continue;
		
		printf("%d/%d＝%dあまり%d\n", a, b, a / b, a % b);
		
	}

}