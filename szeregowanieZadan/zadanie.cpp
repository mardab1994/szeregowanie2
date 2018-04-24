#include "stdafx.h"
#include "zadanie.h"

#include<string>
#include<iostream>

using namespace std;


zadanie::zadanie()
{
}

zadanie::~zadanie()
{
}

zadanie::zadanie(int R, int P)
{
	this->r = R;
	this->p = P;
}

int zadanie::getR()
{
	return r;
}

int zadanie::getP()
{
	return p;
}

void zadanie::wyswietl()
{
	cout << "r=" << r << "   p=" << p << endl;
}
