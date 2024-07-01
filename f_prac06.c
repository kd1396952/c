#include<stdio.h>
#define MapNum 3
#define W 10
#define H 5
typedef struct {
	int m_map[H][W];
}Map;

void SetMap(char* filename.Map* m);
void DrawMap(Map m);

main()
{
	Map MapDate;
	Pos CharaPos={1,1}
	char* MapFileName[MapNum] =
	{ "map0.txt","map1.txt","map2.txt" };
	int select = 0;
	if (select >= 0 && select <= 2) {
		SetMap(MapFileNam[select] <= 2) {
			MapDate.m_map[CharaPos.y][CharaPos.x]=2
		}
	}

}

void SetMap(char* filename, Map* m) {
	FILE* fp;
	char ch;
	int i, j;
	if (fp = fopen(filename, "r")) {
		for (i = 0; i < H; i++) {
			for (j = 0; j < W; j++) {
				ch = fgets(fp);
				m->m_map[i][j] = ch - '0';
			}
			fgetc(fp);
		}
		fclose(fp);
	}
}

void Drawmap(Map m) {
	int i, j;
	for (i = 0; i < H; i++) {
		for (j = 0; j < W; j++) {
			if (m.m_map[i][j] == 1) {
				printf("¡");
			}
			else {
				printf(" ");
			}
		}
		printf("\n");
	}
}