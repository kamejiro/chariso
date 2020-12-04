#include "update.h"
#include "extern.h"
#include <cstring>
#include <stdlib.h>
#include <time.h>

void update() {
	//ランダムに1行生成（具体的には穴と山）
	int hole[10]= { 0, 0, 0, 0, 0, 0, 0, 0, 0,0 };
	int flat[10] = { 0, 0, 0, 0, 0, 1, 1, 1, 1,1 };
	int mount[10] = { 0, 0, 0, 0, 1, 1, 1, 1, 1,1 };
	int randfield[10];

	srand(time(NULL));
	switch (rand()%3+1)
	{
	case 1:memcpy(randfield, hole, sizeof(hole)); break;
	case 2:memcpy(randfield, flat, sizeof(hole));; break;
	case 3:memcpy(randfield, mount, sizeof(hole));; break;
	default:
		break;
	}

	//ひとマス右にずらす
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j =1; j < FIELD_WIDTH; j++) {
			field[i][j - 1]=field[i][j];
		}
	}

	//左端は生成したフィールドに更新
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			if((field[9][8]==Cell_Type_None)&&(field[9][7]==Cell_Type_None)&&(j % 10 == 9))field[i][j] = flat[i];
			else if (j%10==9)field[i][j] = randfield[i];
		}
	}

	
}