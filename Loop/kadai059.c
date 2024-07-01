#include<stdio.h>
main()
{
	int a, b,c;
	printf("Å@Å@ 1   2   3   4   5   6   7   8   9\n\n");
	printf("======================================\n\n");

	for (a = 1; a <= 9; a++) {
		printf("%d|", a);
		for (b = 1; b <= 9; b++) {
			printf("%4d",a * b);
			if (b == 9) {
				printf("\n\n");
			}
		}

	}
}