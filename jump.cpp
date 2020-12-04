#include "jump.h"
#include "extern.h"
#include "Chariposition.h"
#include <conio.h>

//‹ó’†‚ÅƒWƒƒƒ“ƒv‚µ‚½‚©‚Ç‚¤‚©
void jumpJudge() {
	Chariposition jump;
	jump.setval();
	if (field[jump.getval(1) + 1][jump.getval(0)] == Cell_Type_Block) jumpjudge = 2;
}

void jump() {
	Chariposition jump;
	jump.setval();

	//‰º‚ª’n–Ê‚¶‚á‚È‚¯‚ê‚Îreturn
	if (jumpjudge>0) {
		chari[jump.getval(1) - 1][jump.getval(0)] = Cell_Type_Chari;
		chari[jump.getval(1)][jump.getval(0)] = Cell_Type_None;
		jumpjudge -= 1;
	}
}