#pragma once


#include <iostream>
#include <Windows.h>
#include <string>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
#include <iomanip>
#include "interface.h"
#include <chrono>
#include <thread>

using namespace std;

struct Book {
		string registrNumber;
		string author;
		string title;
		int yearOfPubl;
		string publisher;
		string lastNumber;
		int numOfPages;
		bool isTaken;
		struct Info {
			int dateInD;
			int dateInM;
			int dateOutD;
			int dateOutM;
		}info;
};
struct User {
	string login;
	string password;
	bool isAdmin;
	string number;
	bool isBanned;
	bool isDept;

};

HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);

void GoToXY(short x, short y)
{
	SetConsoleCursorPosition(hStdOut, { x, y });
}
void ConsoleCursorVisible(bool show, short size)
{
	CONSOLE_CURSOR_INFO structCursorInfo;
	GetConsoleCursorInfo(hStdOut, &structCursorInfo);
	structCursorInfo.bVisible = show; // изменяем видимость
	structCursorInfo.dwSize = size; // изменяем размер
	SetConsoleCursorInfo(hStdOut, &structCursorInfo);
}
void Cyan() { //yellow
	SetConsoleTextAttribute(hStdOut, FOREGROUND_RED | FOREGROUND_GREEN);
}
void Green() {//cyan
	SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE);
}
void Purpule() {//blye
	SetConsoleTextAttribute(hStdOut, FOREGROUND_INTENSITY | FOREGROUND_BLUE);
}

