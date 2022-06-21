#pragma once
#include "storeManagers.h"
#include "Customer.h"
#include "Table.h"
#include "Foods.h"

#include <string>
#include <iostream>
using namespace std;

class GameManager
{
private:
	int nowDate = 0 ;
	int finishDate;
	storeManagers* _Host;
	storeManagers* _Cook;
	storeManagers* _Gimbob;
	storeManagers* _Serving;
	Customer* _customer;
	Table* _table;
	Foods* _food;

public:
	GameManager();
	~GameManager();
};

