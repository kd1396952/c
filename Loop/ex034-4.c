#include<stdio.h>
main() {
	int a, i, j;
	printf("���́H");
	scanf("%d", &a);
	i = 0;
	do {
		j = 0;
		do {
			printf(" ");
			j++;
		} while (j < a - i);
		j = 0;
		do {
			printf("*");
			j++;
		} while (j <= i);
		printf("\n");
		i++;
	} while (i < a);
}
	

	
