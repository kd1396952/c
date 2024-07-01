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
		{"アーサー"		,{2000,1,1},"A"},
		{"ルシファー"	,{2001,1,2},"B"},
		{"ヤクモ"		,{2001,1,3},"O"},
		{"ネオ"			,{2003,1,4},"AB"},
		{"マサムネ"		,{2004,1,5},"A"},
	};
	struct profile* p;
	int i;

	p = student;

	for (i = 0; i < 5; i++)
	{
		if (strcm(p->blood, "A") == 0)
		{
			printf("%sーー%d年%d月%d月生まれ血液型ー%s型\n",
					p->name,p->)
		}
	}

}