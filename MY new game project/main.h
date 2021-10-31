#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include<Windows.h>
#include <fmod.h> //¹è°æÀ½
#include<time.h>

#define X_MAX 79
#define Y_MAX 24

void gotoxy(int x, int y)
{
	COORD Pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}

void move_cursor(char key, int *x, int *y, int x_m, int y_m)
{
	switch (key)
	{
	case 72:
		*y = *y - 1;
		if (*y<1) *y += 1;
		break;
	case 75:
		*x = *x - 1;
		if (*x<1) *x += 1;
	case 77:
		*x += 1;
		if (*x>x_m) *x -= 1;
	case 80:
		*y += 1;
		if (*y>y_m) *y -= 1;
		break;
	}
}
