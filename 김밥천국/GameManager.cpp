#include "GameManager.h"

GameManager::GameManager()
{
	cout << "��������";
}

GameManager::~GameManager()
{
	delete _Host;
	delete _Cook;
	delete _Gimbob;
	delete _Serving;
	delete _customer;
	delete _table;
	cout << "���� ����";
}
