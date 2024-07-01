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
	Base = 0,				//00000000�ʊw���
	Poison = 1 << 0,		//00000001�ŏ��
	Sleep=1<<1,				//00000010�˂ނ���
	Paralysis=1<<2,			//00000100�܂Џ��
	Burn=1<<3,				//00001000�₯�Ǐ��
	AtkUp=1<<4,				//00010000�U���̓A�b�v���
	AtkDown=1<<5,			//00100000�U���̓_�E�����
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
	printf("****���݂̏��****\n");
	if (s & Poison) {
		printf("��\n");
	}
	if (s & Sleep) {
		printf("����\n");
	}
	if (s & Paralysis) {
		printf("���\n");
	}
	if (s & Burn) {
		printf("�Ώ�\n");
	}
	if (s & AtkUp) {
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown) {
		printf("�U���̓_�E��\n");
	}
	if (s == Base) {
		printf("�ʏ���\n");
	}
	printf("******************");
}
	void ChangeFlag(UNIT * s) {
		int a;
		while (1) {
			printf("�ǂ̏�Ԃɂ��܂���?\n");
			printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
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
			default: //1�`6�ɍ��v���Ȃ������Ƃ��̏���
				break;
			}
		}
	}

	void ClearFlg(UNIT* s) {
		int a;
		while (1) {
			printf("�ǂ̏�Ԃ��������܂���\n");
			printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:�I��>");
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