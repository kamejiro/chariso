#include "createfield.h"
#include <stdlib.h>
#include <time.h>

int createfield() {
	//穴

	//高さ

	//変わらない

	//ランダムで一つ選択
	time_t srand(time(NULL));
	int a = rand() % 3 + 1;
	return a;
}