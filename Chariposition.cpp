#include "Chariposition.h"
#include "extern.h"

void Chariposition::setval() {
	int _y, _x;
	for (int i = 0; i < FIELD_HEIGHT; i++) {
		for (int j = 0; j < FIELD_WIDTH; j++) {
			if (chari[i][j] == Cell_Type_Chari) {
				_x = j;
				_y = i;
			}
		}
	}
	x_val = _x;
	y_val = _y;
}

int Chariposition::getval(char _xy) {
	if (_xy == 0) return x_val;
	else if (_xy == 1)return y_val;
}


