#include "GameManager.h"
using namespace std;
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
	delete _food;
	cout << "���� ����";
}
