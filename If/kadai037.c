#include<stdio.h>
main()
{
	int i;
	printf("�O����P�O�O�܂ł̐����H");
	scanf("%d", &i);
	if (i >90)
	{
		printf("���̐��l�̔��茋�ʂ́u�T�v�ł�");
	}
	else{
		if (i >= 80) {
			printf("���̐��l�̔��茋�ʂ́u�S�v�ł�");
		}
		else{
			if (i >= 50) {
				printf("���̐��l�̔��茋�ʂ́u�R�v�ł�");
			}
			else {
				if (i >= 30) {
					printf("���̐��l�̔��茋�ʂ́u�Q�v�ł�");
				}
				else {
						printf("���̐��l�̔��茋�ʂ́u�P�v�ł�");
				}
			}
		}

	}
}
