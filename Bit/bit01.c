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
	Base = 0,				//00000000通学状態
	Poison = 1 << 0,		//00000001毒状態
	Sleep=1<<1,				//00000010ねむり状態
	Paralysis=1<<2,			//00000100まひ状態
	Burn=1<<3,				//00001000やけど状態
	AtkUp=1<<4,				//00010000攻撃力アップ状態
	AtkDown=1<<5,			//00100000攻撃力ダウン状態
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
	printf("****現在の状態****\n");
	if (s & Poison) {
		printf("毒\n");
	}
	if (s & Sleep) {
		printf("睡眠\n");
	}
	if (s & Paralysis) {
		printf("麻痺\n");
	}
	if (s & Burn) {
		printf("火傷\n");
	}
	if (s & AtkUp) {
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown) {
		printf("攻撃力ダウン\n");
	}
	if (s == Base) {
		printf("通常状態\n");
	}
	printf("******************");
}
	void ChangeFlag(UNIT * s) {
		int a;
		while (1) {
			printf("どの状態にしますか?\n");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
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
			default: //1〜6に合致しなかったときの処理
				break;
			}
		}
	}

	void ClearFlg(UNIT* s) {
		int a;
		while (1) {
			printf("どの状態を解除しますか\n");
			printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:終了>");
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