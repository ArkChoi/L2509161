#include <iostream>
#include <windows.h>

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
	int PlayerX = 0;
	int PlayerY = 0;

	PlayerX++;
	PlayerY++;

	COORD Cur;
	Cur.X = PlayerX;
	Cur.Y = PlayerY;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	cout << "@" << endl;


	return 0;
}