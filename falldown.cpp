#include "extern.h"
#include "falldown.h"
#include <time.h>
#include "Chariposition.h"

using namespace std;

void falldown() {
	//もし一つ下にCell_Type_Blockがあれば落ちない
	Chariposition fall;
	fall.setval();
	if (field[fall.getval(1) + 1][fall.getval(0)] == Cell_Type_Block) return ;

	//1秒ごとにchari[][]のy座標を1下げる
	/*int startTime, endTime;
	int totalTime = 0;
	startTime = clock() / CLOCKS_PER_SEC;

	while (1) {
		if (totalTime >= 1)break;
		endTime = clock() / CLOCKS_PER_SEC;
		totalTime = endTime - startTime;
	}*/
	chari[fall.getval(1) +1][fall.getval(0)] = Cell_Type_Chari;
	chari[fall.getval(1)][fall.getval(0)] = Cell_Type_None;
}