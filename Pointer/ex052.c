#include<stdio.h>
main()
{
	int a = 100, b = 200, w;
	int*p_a = &a, *p_b = &b;
	printf("���s�O:a=%d\n b=%d\n", a, b);
	w = *p_a;    //w=a�Ɠ���
	*p_a = *p_b; //a=b�Ɠ���
	*p_b = w;    //b=w�Ɠ���
	printf("���s��:a=%d\n b=%d\n", a, b);
	printf("&a=%d &b=%d &w=%d &w=%d\n", &a, &b, &w);
	printf("p_a=%d\n p_b=%d\n",&p_a,&p_b)
}