#include<stdio.h>
main()
{
	int i;
	float gokei=0, box[3];

	for (i = 0; i <3; i++)
	{
		printf("��������\n");
		scanf("%f", &box[i]);
		gokei += box[i];
	}
	printf("���v��%.2f�ł�", gokei);
	printf("���ς�%.2f�ł�", gokei/ 3);


}