#include<stdio.h>
main() {
	char syori;
	int su1,su2,su3;
	printf("処理を入力\n");
	scanf("%c", &syori);

	printf("整数を入力\n");
	scanf("%d%d", &su1,&su2,&su3);
	switch (syori){
	case 'D':
	case 'd':
		if(su1>=su2)
		{
			if (su1 >= su3)
			{
			printf("最大値は%dです\n", su1);
		}
			if(su2>=su1)
		{
				if (su2>=su3)
				{
					printf("最大値は%dです\n", su2);
				}
				else
			printf("最大値は%dです\n", su3);
		}
		{

		}
		break;
	case 'S':
	case 's':
		if (su1 < =su2)
		{
			printf("最小値は%dです\n", su1);
		}
		else
		{
			printf("最小値は%dです\n", su2);
		}
		break;
	case 'G':
	case 'g':
		printf("合計は%dです\n", su1 + su2);
		break;
	case 'H':
	case 'h':
		printf("平均は5dです\n", (su1 + su2) / 2.0);
		break;
	default:
		printf("エラー\n");
		break;
	}
}