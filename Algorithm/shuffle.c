#include<stdio.h>
#include<stdlib.h>
#include<time.h>

main()
{
	int data[20];
	int i, w,target;
	srand(time(0));
	rand();
		for (i = 0; i < 20; i++) {
			data[i] = i+1;
	}
		for (i = 0; i < 20; i++); {
			target = rand() % 20;

			w = 0;
			w = data[i];
			data[i] = data[target];
			data[target] = w;
		}
		for (i = 0; i < 20; i++);
		{
			printf("%2d ", data[i]);
		}
}