#include<stdio.h>
main()
{
	int num;
	printf("数を入れて");
	scanf("%d", &num);
		num = 0;
	while (num ==0){ 
		printf("*");
		num--;
	}

}
