#include<stdio.h>
#include<stdlib.h>

#include<string.h>
#include "Game.h"
#include "GameLib.h"

//���]��e�Τ᪺�y��
extern int x, y;
int main() {

	char key;//�Τ᪺����
	setTitle("�i�a�S�̷ư_��");
	setColor(10, 0);
	Init();
	ShowWelcome();
	ShowMap();
	ShowInformation();
	ShowMainMenu();

	while (1) {
		fflush(stdin);
		key = getch();
		fflush(stdin);
		printf("%c", key);
		if (key == '1' || key == '2' || key == '3' || key == '4' || key == '5') {
			
			ProcessMainMenu(key);//�B�z�C���D��檺�~��
			continue;
		}
		else if(key== 'H') {
		 x--;
		}
		else if (key == 'M') {
			y++;
		}
		else if (key == 'P') {
			x++;
		}
		else if (key == 'K') {
			y--;
		}
		if (x > 7) {
			x = 0;
		}
		if (x < 0) {
			x = 7;
		}
		if (y > 7) {
			y = 0;
		}
		if (y < 0) {
			y = 7;
		}
		ShowMap();


	}

	return 0;
}