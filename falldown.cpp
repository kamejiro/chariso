#include "extern.h"
#include "falldown.h"
#include <time.h>
#include "Chariposition.h"

using namespace std;

void falldown() {
	//���������Cell_Type_Block������Η����Ȃ�
	Chariposition fall;
	fall.setval();
	if (field[fall.getval(1) + 1][fall.getval(0)] == Cell_Type_Block) return ;

	//1�b���Ƃ�chari[][]��y���W��1������
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