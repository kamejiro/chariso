#include <conio.h>
#include <time.h>
#include "display.h"
#include "extern.h"
#include "falldown.h"
#include "init.h"
#include "jump.h"
#include "update.h"
#include "gameEnd.h"


using namespace std;

int main() {
	//初期化
	init();
	time_t t = time(NULL);
	display();

	while (1) {
		//スペースキーでジャンプ qキーでゲーム終了
		if (_kbhit()) {
			switch (_getch()) {
			case 0x20:
				jumpJudge();
				jump();
				display();
				break;
			case 'q':gameEnd(); break;
			}
		}

		//1秒ごとに落下
		if (t != time(NULL)) {
			t= time(NULL);
			update();
			score++;
			falldown();
			display();
		}

		//高さ3以下もしくは壁にぶつかったらゲームオーバー
		if ((chari[5][5] == Cell_Type_Chari)
			|| ((chari[4][5] == Cell_Type_Chari) && (field[4][5] == Cell_Type_Block))) {
			gameEnd();
		}
	}
}