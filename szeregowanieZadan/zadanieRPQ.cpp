#include "stdafx.h"
#include "zadanieRPQ.h"

#include<iostream>
#include<string>
using namespace std;



zadanieRPQ::zadanieRPQ(int R, int P, int Q)
{
	this->r = R;
	this->p = P;
	this->q = Q;
}

zadanieRPQ::zadanieRPQ()
{

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

void zadanieRPQ::decR()//dekrementuje R
{
	this->r--;
}

void zadanieRPQ::decP()//dekrementuje P
{
	this->p--;
}

void zadanieRPQ::decQ()//dekrementuje Q
{
	this - q--;
}

void zadanieRPQ::wyswietl()
{
	cout << "r=" << r << "  p=" << p << "  q=" << q << endl;
}