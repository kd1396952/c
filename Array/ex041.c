#include<stdio.h>
main()
{
	int i;
	float gokei=0, box[3];

	for (i = 0; i <3; i++)
	{
		printf("ŽÀ”“ü—Í\n");
		scanf("%f", &box[i]);
		gokei += box[i];
	}
	printf("‡Œv‚Í%.2f‚Å‚·", gokei);
	printf("•½‹Ï‚Í%.2f‚Å‚·", gokei/ 3);


}