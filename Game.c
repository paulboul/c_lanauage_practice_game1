#define _CRT_SECURE_NO_WARNINGS
#include "Game.h"
#include "GameLib.h"
#include<time.h>
#define SEP "----------------------------------------------------------------------------------------"
#define COL 78
#define MARGIN_X 20//����Z
#define MAP_START_Y 3
#define MAP_END_Y 11
#define INFO_START_Y 12
#define MAINMENU_START_Y 20
#define INFO_END_Y 19
int x = 3, y = 2;
Player players[] = {
	{1012,"�i����","123",500,3,1,300,500,1000,1000000,.coord.X=3,.coord.Y=1},
	{1013,"�i�a��","123",100,3,1,200,500,1000,1000000,.coord.X = 2,.coord.Y = 0}
};

Martial martials[] = {
	/*
		int id;
	char name[50];
	char type[50];
	COORD hqCoord;
	int isOpen;
	char desc[1000];
	*/

	{1,"�ƪ���","����",.hqCoord.X=1,.hqCoord.Y=4,1,"�ѻ�a�j�v�i����ҳп�"}

};

Monster monsterArray[] = {
	{1,"spogbob",1,100,5,2,5,10,5,1,{0,0}},
	{2,"�i�a��",2,200,8,2,5,10,5,1,{0,0}},
	{3,"����",3,100,5,2,5,10,5,1,{0,0}},
	{4,"���ۧ�",4,100,5,2,5,10,5,1,{0,0}},
	{5,"�H��",5,100,5,2,5,10,5,1,{0,0}},
	{6,"�U�l",6,100,5,2,5,10,5,1,{0,0}},
	{7,"��",7,100,5,2,5,10,5,1,{0,0}},
	{8,"�H��666",8,100,5,2,5,10,5,1,{0,1}}
};


Prop propArray[] = {
	{1,"�j����",1,5,5000,Weapon,.minatttack=1,.maxatttack=4,"�F�紵�ҨϥΪ��j��"},
	{2,"�h����",2,5,1000,Armor,.mindefence=2,.maxdefence=6,"���m�ˮ`"},
	{3,"�����̤��O",2,5,50,Con,.minpower=1,.maxpower=2,"��ӫG�F��"}


};

Map mapArray[8][8] = {
	{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�a�s",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѫ�",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"���",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	},
		{
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"},
	{1,"�Ѥs",1,{0,0},"�R���F�����"},{1,"�Ѥs",1,{0,0},"�R���F�����"}
	}

};
Player* currPlayer;
void Init() {//��l�ƹC���ƾ�
	currPlayer = &players[0];
	currPlayer->weapon = propArray[0];
	currPlayer->armor = propArray[1];
	currPlayer->martial = martials[0];
}



void Show() {//�i�ܥ����ƾ�

	int propCount = sizeof(propArray) / sizeof(propArray[0]);

	for (int i = 0; i < propCount; i++) {
		printf("%d\t%s\t%.01f\t\n", propArray[i].id, propArray[i].name, propArray[i].price);
		switch (propArray[i].type) {
		case Weapon://�Z��
			printf("�̤p�����O: %d\t�̤j�����O: %d\n", propArray[i].minatttack, propArray[i].maxatttack);
			break;

		case Armor:
			printf("�̤p���@�O: %d\t�̤j���@�O: %d\n", propArray[i].mindefence, propArray[i].maxdefence);
			break;

		case Con:
			printf("�̤p��q��: %d\t�̤j��q��: %d\n", propArray[i].minpower, propArray[i].maxpower);
			break;
		}
	}
	printf("\n���L�a�� \n");

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			printf("%-8s", mapArray[i][j].name);
		}
		printf("\n");
	}

}
//��ܹC�����w��H��
void ShowWelcome() {
	SetPosition(MARGIN_X, 0);
	printf("%s\n", SEP);
	SetPosition(MARGIN_X, 1);
	printf("|");
	SetPosition(MARGIN_X+30, 1);
	puts("�w��Ө�ƪ��T��");
	SetPosition(MARGIN_X + 87, 1);
	printf("|");
	SetPosition(MARGIN_X, 2);
	printf("%s\n", SEP);
}
//��ܹC���a��
void ShowMap() {


	int i, j;
	printf("\n");
	for (i = 0; i < 8; i++) {
		SetPosition(MARGIN_X, MAP_START_Y+i);

		for (j = 0; j < 8; j++) {
			if (j == 0) {
				printf("|  ");
			}
			if (i == x && j == y) {
				//���a�Ϥ�r�C��M�I����
				setColor(5, 15);
			}
			printf("%-9s", mapArray[i][j].name);
			setColor(10, 0);
		}
		SetPosition(MARGIN_X+87, 3 + i);
		printf("|");

	}
	SetPosition(MARGIN_X, MAP_END_Y);
	printf(SEP);
	ShowMapInfo();
}
//��ܹC���a�ϤU�誺�C���H��
void ShowInformation() {
	SetPosition(MARGIN_X,INFO_START_Y );
	int i;
	for ( i = 0; i < 7; i++) {
		SetPosition(MARGIN_X, INFO_START_Y+i);
		printf("|");

		SetPosition(MARGIN_X+87, INFO_START_Y+i);
		printf("|");
	}
	SetPosition(MARGIN_X , INFO_START_Y +7);
	printf(SEP);


}
//��ܦa�Ϫ��H��
void ShowMapInfo() {
	//1.�M���H���ت�����
	Clear(MARGIN_X+1, INFO_START_Y, 7);
	//2.��ܷ�e���a�Ҧb�a�Ϫ��H��
	SetPosition(MARGIN_X + 25, INFO_START_Y);
	printf("��e���a�Ҧb�a��: <<%s>> ",mapArray[x][y].name);
	SetPosition(MARGIN_X + 10, INFO_START_Y+1);
	//�ݭn������ܪ���

	char* desc = mapArray[x][y].desc;
	int descLen = strlen(desc);
	int i, j;
	for (i = 0; i < descLen; i++) {
		if (i != 0 && i % 60 == 0) {
			SetPosition(MARGIN_X + 10, INFO_START_Y + 1+i/60);
		}
		printf("%c", desc[i]);

	}
}
//��ܹC�����D���
void ShowMainMenu() {
	SetPosition(MARGIN_X,MAINMENU_START_Y);
	printf("�C�����");
	SetPosition(MARGIN_X, MAINMENU_START_Y+1);
	printf("1.�ӤH�T��");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 2);
	printf("2.�d��Ǫ�");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 3);
	printf("3.�^�`��");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 4);
	printf("4.�ʶR�˳�");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 5);
	printf("5.");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 6);
	printf("6.");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 7);
	printf("7.");
	SetPosition(MARGIN_X, MAINMENU_START_Y + 8);



}

//�B�z�C���D��檺�~��
void ProcessMainMenu(char key) {
	switch (key)
	{

	case '1':
		ShowPlayInfo();
		break;
	case '2':
		ShowMonsters();
		break;
	case '3':
		Move(currPlayer->martial.hqCoord.X,currPlayer->martial.hqCoord.Y);
		break;
	case '4':

		break;
	case '5':

		break;

	default:
		break;
	}

}
//�b�H��������ܪ��a���ӤH���
void ShowPlayInfo() {
	Clear(MARGIN_X, INFO_START_Y, 7);
	SetPosition(MARGIN_X + 20, INFO_START_Y);
	printf("���a <<%s>> ���ӤH��Ʀp�U: ",currPlayer->name);
	SetPosition(MARGIN_X + 10, INFO_START_Y+1);
	printf("����: %d\t��q: %d\t�]�O: %d\t�g���: %d", currPlayer->level,currPlayer->hp,currPlayer->mp,currPlayer->exp);
	SetPosition(MARGIN_X + 10, INFO_START_Y + 2);
	printf("��e�Z��: %s(%d/%d) ", currPlayer->weapon.name, currPlayer->weapon.minatttack,currPlayer->weapon.maxatttack);
	printf("��e����: %s(%d/%d)", currPlayer->armor.name, currPlayer->armor.mindefence, currPlayer->armor.maxdefence);



}
//�b��e�a����ܩǪ�
void ShowMonsters() {

	char levelNames[9][20] = { "����","���","����","�s��","����","�c��","�^����","�o��","�}�a����"};
	Clear(MARGIN_X-1, INFO_START_Y, 7);
	SetPosition(MARGIN_X + 10, INFO_START_Y);
	//�Ǫ��`��
	int monsterCount = sizeof(monsterArray) / sizeof(Monster);
	int i;
	int monsterIndex[9];//��e�a�Ϫ��Ǫ�����
	int curMapMonsterCount = 0;//��e�a�Ϫ��Ǫ��`��
	for (i = 0; i < monsterCount; i++) {
		if (monsterArray[i].coord.X == x && monsterArray[i].coord.Y == y&&monsterArray[i].state!=0) {
			monsterIndex[curMapMonsterCount++] = i;
			if (curMapMonsterCount == 9) {
				break;
			}
		}
	}
	SetPosition(MARGIN_X + 10, INFO_START_Y);
	if (curMapMonsterCount == 0) {
		printf("��e�a�ϨS������Ǫ�");
		return;
	}
	printf("��e�a�ϥX�{�p�U�Ǫ�: ");
	SetPosition(MARGIN_X + 5, INFO_START_Y+2);
	for (i = 0; i < curMapMonsterCount; i++) {
		if (i != 0 && i % 3 == 0) {
			SetPosition(MARGIN_X + 5, INFO_START_Y +2+i/3);
		}
		printf("%d.%s(%s)\t", i+1,monsterArray[monsterIndex[i]].name, levelNames[monsterArray[monsterIndex[i]].level-1]);
	}
	SetPosition(MARGIN_X + 5, INFO_END_Y-1);
	int pkMonsterId = -1;
	printf("�п�n��������H: (��0��^)");
	scanf("%d", &pkMonsterId);
	//printf("�n�������Ǫ��s����: %d", pkMonsterId);


	Fight(pkMonsterId);

}

void Fight(int monsterId) {

	int monsterIndex = -1;
	int i;
	for (i = 0; i < sizeof(monsterArray) / sizeof(Monster); i++) {
		if (monsterArray[i].id == monsterId) {
			monsterIndex = i;
			break;
		}
	}
	SetPosition(MARGIN_X + 5, INFO_END_Y - 1);
	printf("                                     ");
	if (monsterIndex == -1) {
		SetPosition(MARGIN_X + 5, INFO_END_Y - 1);
		printf("�npk���Ǫ����s�b�A�����N���~��");
		return;
	}
	int fightCount = 0;
	while (1) {
		srand((unsigned)time(NULL));
		int playerAtttack = rand() % (currPlayer->weapon.maxatttack - currPlayer->weapon.minatttack + 1) + currPlayer->weapon.minatttack;
		monsterArray[monsterIndex].hp -= playerAtttack;
		if (monsterArray[monsterIndex].hp <= 0) {
			break;
		}
		currPlayer->hp -= monsterArray[monsterIndex].att;
		if (currPlayer->hp <= 0) {
			break;
		}
		SetPosition(MARGIN_X + 5, INFO_END_Y - 1);
		printf("                                        ");
		SetPosition(MARGIN_X + 2, INFO_END_Y - 1);
		printf("                                        ");
		fightCount++;
		printf("�԰��a%d�� ,%sHP:%d\t%sHP:%d", fightCount, currPlayer->name, currPlayer->hp, monsterArray[monsterIndex].name, monsterArray[monsterIndex].hp);
		Sleep(500);
	}
	SetPosition(MARGIN_X + 5, INFO_END_Y - 1);
	printf("                                        ");
	if (currPlayer->hp <= 0) {

		SetPosition(MARGIN_X-2 , INFO_END_Y - 1);
		printf("����ְT: �j�L<<%s>> �b�P <<%s>> ���԰���,�ԱѨ��`",currPlayer->name,monsterArray[monsterIndex].name);
		currPlayer->hp = 100;
		return;
	}
	SetPosition(MARGIN_X + 5, INFO_END_Y - 1);
	printf("�g�L�԰� <<%s>> �Q�A���� ��o%d�g��, %d����!", monsterArray[monsterIndex].name, monsterArray[monsterIndex].exp, monsterArray[monsterIndex].maxMoney);
	currPlayer->exp += monsterArray[monsterIndex].exp;
	currPlayer->gold += monsterArray[monsterIndex].maxMoney;



}
void Move(int xx, int yy) {
	y = xx;
	x = yy;
	ShowMap();
}


