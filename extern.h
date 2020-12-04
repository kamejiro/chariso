#ifndef _EXTERN_H_
#define _EXTERN_H_

extern constexpr auto FIELD_HEIGHT = 10;
extern constexpr auto FIELD_WIDTH = 10;
extern int jumpjudge;
extern int score;

extern int field[FIELD_HEIGHT][FIELD_WIDTH];
extern int chari[FIELD_HEIGHT][FIELD_WIDTH];

enum {
	Cell_Type_None,
	Cell_Type_Block,
	Cell_Type_Chari
};


#endif // !_EXTERN_H_
