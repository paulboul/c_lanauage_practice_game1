#pragma once
#ifndef  gamelib
#define gamelib



#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<Windows.h>
void setTitle(char* title);
void setColor(int forecolor, int backcolor);
void SetPosition(int x, int y);
//�qx,y�y�ж}�l�A�MrowCount��
void Clear(int x, int y, int rowCount);

#endif