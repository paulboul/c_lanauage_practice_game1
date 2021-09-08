#pragma once

//�w�q�@�ǹC���֤ߵ��c�M�禡

#include<stdio.h>
#include<string.h>
#include<Windows.h>

//�C���a�Ϲ�{���c
//�s�� �W�� ���� ���a���i�J����
typedef struct _map {
	int id;//�a�Ͻs�� 
	char name[50];//�a�ϦW��
	int minLevel;//���a���i�J����
	//�y�е��c
	COORD  coord;
	char desc[500];//�a�Ϥ���


}Map;


/*  �C�����c�����w�q   */
//���a,�a��,�˳�,�Ǫ�

//�C���D������enum  �Z��,���� ,���ӫ~, �d��,�H��
typedef enum _proptype {
	Weapon,Armor,Con,card,Frag
}PropType;

//�C���D��- �Z��,���� ,���ӫ~, �d��
typedef struct  _prop {

	int id;//�D��s��
	char name[50];//�D��W�l
	int leve;//�D�㵥��
	int stock;//�D��w�s�f���a�I�]���D��ƶq
	double price;//�D�����
	PropType type;//�C���D������
	union {
		int minatttack;//�Z�����������O
		int mindefence;//����������@�O
		int minpower;//���ӫ~, �d��������q��
	};
	union {
		int maxatttack;//�Z�����������O
		int maxdefence;//����������@�O
		int maxpower;//���ӫ~, �d��������q��
	};
	char desc[200];//�D�㪺�\��y�z

}Prop;
//����
typedef struct _marital {
	int id;
	char name[50];
	char type[50];
	COORD hqCoord;
	int isOpen;
	char desc[1000];
}Martial;

typedef struct _Player {
	int id;
	char name[50];
	char pass[50];
	int life;
	int level;
	int exp;
	int hp;
	int mp;
	int mpMax;
	int gold;
	Martial martial;
	Prop weapon;
	Prop armor;
	COORD coord;

}Player;
typedef struct _monster {
	int id;
	char name[50];
	int level;
	int hp;
	int att;
	int diff;
	int minMoney;
	int maxMoney;
	int exp;
	int state;
	COORD coord;

}Monster;


void Init();//��l�ƹC���ƾ�
void Show();//�i�ܥ����ƾ�
void ShowWelcome();//��ܹC�����w��H��
void ShowMap();//��ܹC���a��
void ShowInformation();//��ܹC���a�ϤU�誺�C���H��
void ShowMainMenu();//��ܹC�����D���
void ShowMapInfo(); //��ܦa�Ϫ��H��
//�B�z�C���D��檺�~��
void ProcessMainMenu(char key);
//�b�H��������ܪ��a���ӤH���
void ShowPlayInfo();
//�b��e�a����ܩǪ�
void ShowMonsters();

void Fight(int monsterId);

void Move(int xx,int yy);




