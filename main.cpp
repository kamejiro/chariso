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
	//������
	init();
	time_t t = time(NULL);
	display();

	while (1) {
		//�X�y�[�X�L�[�ŃW�����v q�L�[�ŃQ�[���I��
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

		//1�b���Ƃɗ���
		if (t != time(NULL)) {
			t= time(NULL);
			update();
			score++;
			falldown();
			display();
		}

		//����3�ȉ��������͕ǂɂԂ�������Q�[���I�[�o�[
		if ((chari[5][5] == Cell_Type_Chari)
			|| ((chari[4][5] == Cell_Type_Chari) && (field[4][5] == Cell_Type_Block))) {
			gameEnd();
		}
	}
}