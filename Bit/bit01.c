#include<stdio.h>
#include<stdio.h>
#include<time.h>
#define skil_Num 3
#define Mob_Num 3

typedef unsigned int UNT;

typedef struct { 
	char name[20];
	int type;
	int use_mp;
	int effect;
}Skill;
typedef struct {
	char name[20];
	int hp;
	int atk;
	int def;
	UNIT state;
}Spec;
typedef struct {
	Spec sp;
	int maxhp;
	int mp;
	Skill skl[skil_Num];
}Chara;
typedef struct {
	Spec sp;
	int rate;
}Mob;
enum BitState
{
	Base = 0,				//00000000í äwèÛë‘
	Poison = 1 << 0,		//00000001ì≈èÛë‘
	Sleep=1<<1,				//00000010ÇÀÇﬁÇËèÛë‘
	Paralysis=1<<2,			//00000100Ç‹Ç–èÛë‘
	Burn=1<<3,				//00001000Ç‚ÇØÇ«èÛë‘
	AtkUp=1<<4,				//00010000çUåÇóÕÉAÉbÉvèÛë‘
	AtkDown=1<<5,			//00100000çUåÇóÕÉ_ÉEÉìèÛë‘
};
typedef unsigned int UNIT;
void DisplayStatus(UNIT s);
void ChangeFlag(UNIT* s);
void ClearFlag(UNIT s);

main()
{
	UNIT MyState = Base;
	DisplayStatus(MyState);
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}
void DisplayStatus(UNIT s) {
	printf("****åªç›ÇÃèÛë‘****\n");
	if (s & Poison) {
		printf("ì≈\n");
	}
	if (s & Sleep) {
		printf("êáñ∞\n");
	}
	if (s & Paralysis) {
		printf("ñÉ·É\n");
	}
	if (s & Burn) {
		printf("âŒèù\n");
	}
	if (s & AtkUp) {
		printf("çUåÇóÕÉAÉbÉv\n");
	}
	if (s & AtkDown) {
		printf("çUåÇóÕÉ_ÉEÉì\n");
	}
	if (s == Base) {
		printf("í èÌèÛë‘\n");
	}
	printf("******************");
}
	void ChangeFlag(UNIT * s) {
		int a;
		while (1) {
			printf("Ç«ÇÃèÛë‘Ç…ÇµÇ‹Ç∑Ç©?\n");
			printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
			scanf("%d", &a);
			if (a == 0) {
				break;
			}
			switch (a){
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s |= Paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= AtkUp;
				break;
			case 6:
				*s |= AtkDown;
				break;
			default: //1Å`6Ç…çáívÇµÇ»Ç©Ç¡ÇΩÇ∆Ç´ÇÃèàóù
				break;
			}
		}
	}

	void ClearFlg(UNIT* s) {
		int a;
		while (1) {
			printf("Ç«ÇÃèÛë‘ÇâèúÇµÇ‹Ç∑Ç©\n");
			printf("1:ì≈ 2:êáñ∞ 3:ñÉ·É 4:âŒèù 5:çUåÇÅ™ 6:çUåÇÅ´ 0:èIóπ>");
			scanf("%d", &a);
			if (a == 0) {
				break;
			}
			switch(a){
			case 1:
				*s &= ~Poison;
				break;
			case 2:
				*s &= ~Sleep;
				break;
			case 3:
				*s &= ~Paralysis;
				break;
			case 4:
				*s &= ~Burn;
				break;
			case 5:
				*s &= ~AtkUp;
				break;
			case 6:
				*s &= ~AtkDown;
				break;
			default:
				break;
			}
		}
	}