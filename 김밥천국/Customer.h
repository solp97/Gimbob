#pragma once
#include "GameManager.h"
class Customer
{
private:
	bool eating;
	bool waiting;
	bool comming;
	bool order;
	int payment;
	int takenTime;

public:
	Customer();
	~Customer();
};

