#include<stdio.h>
main()
{
	int i;
	float gokei=0, box[3];

	for (i = 0; i <3; i++)
	{
		printf("実数入力\n");
		scanf("%f", &box[i]);
		gokei += box[i];
	}
	printf("合計は%.2fです", gokei);
	printf("平均は%.2fです", gokei/ 3);


}