#include "stdafx.h"
#include "zadanieRPQ.h"


zadanieRPQ::zadanieRPQ(int R, int P, int Q)
{
	this->r = R;
	this->p = P;
	this->q = Q;
}


zadanieRPQ::~zadanieRPQ()
{
}

int zadanieRPQ::getR()
{
	return this->r;
}

int zadanieRPQ::getP()
{
	return this->p;
}

int zadanieRPQ::getQ()
{
	return this->q;
}