#include <iostream>

using namespace std;

int main() 
{
	int PlayerTankHP = 10;
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

	cout << "PlayerTankHP : " << PlayerTankHP << endl;

	return 0;
}