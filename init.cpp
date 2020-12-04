#include "init.h"
#include "extern.h"

//‰Šú‰»ŠÖ”
void init() {
	for (int i = 5; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			field[i][j] = Cell_Type_Block;
		}
	}
	chari[4][5] = Cell_Type_Chari;
}