#include "display.h"
#include "extern.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

int displayBuffur[FIELD_HEIGHT][FIELD_WIDTH];

//描画される図形を定義
char cellAA[][2 + 1] = {
"  ",
"■",
"＠"
};


void display() {
	//displayBuffurにfieldとcursorをコピー
	memcpy(displayBuffur, field, sizeof(field));
	for (int i = 0; i <= FIELD_HEIGHT; i++) {
		for (int j = 0; j <= FIELD_WIDTH; j++) {
			if (chari[i][j] > field[i][j])displayBuffur[i][j] = chari[i][j];
		}
	}
	//画面クリアしてから描画
	system("cls");
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			cout << cellAA[displayBuffur[i][j]];
		}
		cout << endl;
	}
	cout << "スコア：" << score << " m" << endl;
}