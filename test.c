
スレッドを開きました。未読メッセージは 1 件です。

コンテンツへ
神戸電子専門学校 メール でのスクリーン リーダーの使用

1 / 132
サンプルプログラム
受信トレイ

穐原弘樹 <akihara@st.kobedenshi.ac.jp>
添付ファイル
13:13 (8 分前)
To Bcc : 自分

サンプルプログラム
1 個の添付ファイル
•  Gmail でスキャン済み
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//プロトタイプ宣言
void Put_Block(void);
void Turn_Left(void);

//外部変数
//同じモジュール（ソースファイル）の全ての関数から利用可能
int b[4][4] = {	//４×４のブロックデータ
	{0,0,0,0},
	{0,1,1,0},
	{0,0,1,0},
	{0,0,1,0}
};

//エントリポイント
main()
{
	int key;

	Put_Block();	//最初のブロック表示

	//ゲームループ
	while (1) {
		if (kbhit()) {	//キー入力のチェック
			key = getch();	//エコーバックなしで入力
		}
		else {
			key = 0;
		}
		if (key == 'l' || key == 'L') { //Lキーで左回転
			Turn_Left();
			Put_Block();
		}
		if (key == 'e' || key == 'E') {	//Eキーで終了
			break;
		}
	}
}

//画面にブロックを出力
void Put_Block(void)
{
	int i, j;

	system("cls");//画面クリア

	//ブロックの表示
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (b[i][j]) {
				printf("四"); //■だとうまく動かないので四で代用
			}
			else {
				printf("　");
			}
		}
		printf("\n");
	}
}

//ブロックを左回転
void Turn_Left(void)
{
	int i, j, w[4][4];

	//ブロックデータコピー
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			w[i][j] = b[i][j];
		}
	}
	//左回転
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			b[i][j] = w[j][3 - i];
		}
	}
}

test.c
test.c を表示しています。