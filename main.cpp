#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

int main() 
{
	// 1�� ����
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

	// 2�� ����
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

	// 3�� ����?
	/*int PlayerX = 0;
	int PlayerY = 0;
	char PlayerPoint = '@';

	bool GamePlay = true;

	int KeyInput = 0;
	COORD Cur{};

	while (GamePlay)
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
		case 'q':
			GamePlay = false;
			break;
		default:
			break;
		}

		system("cls");

		Cur.X = PlayerX;
		Cur.Y = PlayerY;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);
		cout << PlayerPoint << endl;
	}*/

	//4�� ����
	/*int ObjectWall[10][10] = {0,};

	char ObjectShape = '*';

	for (int i=0 ; i<10 ; i++) 
	{
		for (int j=0 ; j<10 ; j++) 
		{
			if (i==0 || i==9 || j==0 || j==9)
			{
				ObjectWall[j][i] = ObjectShape;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				cout << (char)ObjectWall[i][j] << " ";
			}
			else 
			{
				cout << "  ";
			}
		}
		cout << endl;
	}*/

	//5�� ����
	/*int UserInput = 0;
	cin >> UserInput; //simple input
	cout << UserInput << endl;*/

	//6�� ���� (����������) �̿�
	/*int PlayerInput = 0;
	cin >> PlayerInput;*/
	
	//7�� ���� (4�� �����̶� ����ؼ� �װ� ���)
	int ObjectWall[10][10] = { 0, };

	char ObjectShape = '*';

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9 || j == 0 || j == 9)
			{
				ObjectWall[j][i] = ObjectShape;
			}
		}
	}
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (ObjectWall[i][j] == ObjectShape)
			{
				cout << (char)ObjectWall[i][j] << " ";
			}
			else
			{
				cout << "  ";
			}
		}
		cout << endl;
	}
	return 0;
}