#include<stdio.h>
#include<string.h>
struct syohin_data {
	char name[20];
	int tanaka;
};

main()
{
		struct syohin_data syohin1, syohin2;
		strcpy(syohin1.name, "ƒGƒ“ƒsƒc");
		syohin1.tanaka = 30;
		syohin2 = syohin1;
		printf(" syohin1,name=%s\n", syohin1.name);
		printf(" syohin1,tanak=%d\n", syohin1.tanaka);
		printf(" syohin2,name=%s\n", syohin2.name);
		printf(" syohin2,tanak=%d\n", syohin2.tanaka);
}