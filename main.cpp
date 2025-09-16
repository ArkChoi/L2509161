#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main() 
{
	// 1번 연습
	/*int PlayerTankHP = 10;
	int PlayerTankAttack = 5;
	int PlayerTankDefence = 3;

	int EnemyTankHP = 10;
	int EnemyTankAttack = 4;
	int EnemyTankDefence = 2;

	int EnemyDamege = EnemyTankAttack - PlayerTankDefence;
	int PlayerDamege = EnemyTankDefence - PlayerTankAttack;

	cout << "PlayerTankHP : " << PlayerTankHP << endl;

	cout << "EnemyTankAttack!" << endl;
	PlayerTankHP = PlayerTankHP - EnemyDamege;

	cout << "PlayerTankHP : " << PlayerTankHP << endl;*/

	// 2번 연습
	/*int PlayerX = 0;
	int PlayerY = 0;
	char PlayerPoint = '@';

	PlayerX++;
	PlayerY++;

	COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << "@" << endl;
	_getch();
	system("cls");

	PlayerX++;

	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << PlayerPoint << endl;
	_getch();
	system("cls");

	PlayerY++;

	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << PlayerPoint << endl;*/

	// 3번 연습?
	int PlayerX = 0;
	int PlayerY = 0;
	char PlayerPoint = '@';

	int KeyInput;
	COORD Cur;

	while (true)
	{
		switch (KeyInput = _getch())
		{
		case 'w':
			PlayerY--;
			break;
		case 's':
			PlayerY++;
			break;
		case 'a':
			PlayerX--;
			break;
		case 'd':
			PlayerX++;
			break;

		default:
			break;
		}

		system("cls");
		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << PlayerPoint << endl;
	}

	return 0;
}