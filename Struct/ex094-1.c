#include<stdio.h>

struct day
{
	char name[20];
	struct day birth;
	char blood[5];
};

main()
{
	struct profile student[5]={
		{"�A�[�T�["		,{2000,1,1},"A"},
		{"���V�t�@�["	,{2001,1,2},"B"},
		{"���N��"		,{2001,1,3},"O"},
		{"�l�I"			,{2003,1,4},"AB"},
		{"�}�T���l"		,{2004,1,5},"A"},
	};
	struct profile* p;
	int i;

	p = student;

	for (i = 0; i < 5; i++)
	{
		if (strcm(p->blood, "A") == 0)
		{
			printf("%s�[�[%d�N%d��%d�����܂ꌌ�t�^�[%s�^\n",
					p->name,p->)
		}
	}

}