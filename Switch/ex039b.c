#include<stdio.h>
main() 
{
	char syori;
	int su1,su2,su3;
	printf("���������\n");
	scanf("%c", &syori);

	printf("���������\n");
	scanf("%d%d", &su1,&su2,&su3);
	switch (syori) {
	case 'D':
	case 'd':
		if (su1 >= su2)
		{
			if (su1 >= su3)
			{
				printf("�ő�l��%d�ł�\n", su1);
			}
			if (su2 >= su1)
			{
				if (su2 >= su3)
				{
					printf("�ő�l��%d�ł�\n", su2);
				}
				else
				{
					printf("�ő�l��%d�ł�\n", su2);
				}
				break;
	case 'S':
	case 's':
		if (su1 <= su2)
		{
			if (su1 <= su3)
				printf("�ŏ��l��%d�ł�\n", su1);
		}
		if (su2 <= su1)
		{
			if (su2 < su3)
				printf("�ŏ��l��%d�ł�\n", su2);
		}
		else
		{
			printf("�ŏ��l��%d\n", su3);
		}
		break;
	case 'G':
	case 'g':
		printf("���v��%d�ł�\n", su1 + su2 + su3);
		break;
	case 'H':
	case 'h':
		printf("���ς�5d�ł�\n", (su1 + su2 + su3) / 3.0);
		break;
	default:
		printf("�G���[\n");
		break;
			}

		}
	}

	}