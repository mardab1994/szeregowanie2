#include "stdafx.h"
#include "kolejkaPriorytetowa.h"
#include<iostream>
#include<string>

using namespace std;


kolejkaPriorytetowa::kolejkaPriorytetowa()
{
}

kolejkaPriorytetowa::~kolejkaPriorytetowa()
{
}

void kolejkaPriorytetowa::enqueueR(int r, int p, int q)
{
	zadanieRPQ el(r, p,q);
	this->tablica.push_back(el);
	if (tablica.size() > 1)
	{
		this->sortR();
	}
}

void kolejkaPriorytetowa::enqueueQ(int r, int p, int q)
{
	zadanieRPQ el(r, p, q);
	this->tablica.push_back(el);
	if (tablica.size() > 1)
	{
		this->sortQ();
	}
}

void kolejkaPriorytetowa::sortR()
{
	int i, j;
	bool swapped;
	for (i = 0; i < this->tablica.size() - 1; i++)
	{
		swapped = false;
		for (j = 0; j < this->tablica.size() - i - 1; j++)
		{
			if (this->tablica.at(j).getR() > this->tablica.at(j + 1).getR())
			{
				zadanieRPQ e1 = this->tablica.at(j);
				this->tablica.at(j) = this->tablica.at(j + 1);
				this->tablica.at(j + 1) = e1;
				swapped = true;
			}
		}
		if (swapped == false)break;
	}
}

void kolejkaPriorytetowa::sortQ()
{
	int i, j;
	bool swapped;
	for (i = 0; i < this->tablica.size() - 1; i++)
	{
		swapped = false;
		for (j = 0; j < this->tablica.size() - i - 1; j++)
		{
			if (this->tablica.at(j).getQ() < this->tablica.at(j + 1).getQ())
			{
				zadanieRPQ e1 = this->tablica.at(j);
				this->tablica.at(j) = this->tablica.at(j + 1);
				this->tablica.at(j + 1) = e1;
				swapped = true;
			}
		}
		if (swapped == false)break;
	}
}

zadanieRPQ kolejkaPriorytetowa::isEmpty()
{
	int liczbazadanieRPQow = tablica.size();
	if (liczbazadanieRPQow == 0)
	{
		string wyjatek = "QUEUE IS EMPTY !!!";
		throw wyjatek;
	}

	return this->tablica.at(0);
}

zadanieRPQ kolejkaPriorytetowa::dequeue()
{
	zadanieRPQ e1;
	try
	{
		e1 = isEmpty();
		this->moveElements();
		return e1;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

zadanieRPQ kolejkaPriorytetowa::front()
{
	zadanieRPQ e1;
	try
	{
		e1 = this->isEmpty();
		return e1;
	}
	catch (string w)
	{
		cout << w << endl;
	}
}

int kolejkaPriorytetowa::size()
{
	return this->tablica.size();
}

bool kolejkaPriorytetowa::isQueueEmpty()
{
	if (this->tablica.size() == 0)return true;
	return false;
}

void kolejkaPriorytetowa::show()
{
	for (int i = 0; i < this->tablica.size(); i++)
	{
		cout << "zadanieRPQ nr " << i << "  r=" << this->tablica.at(i).getR() << "   p=" << this->tablica.at(i).getP()<<"  q="<<tablica.at(i).getQ() << endl;
	}
}

void kolejkaPriorytetowa::moveElements()
{
	for (int i = 0; i < this->tablica.size() - 1; i++)
	{
		this->tablica.at(i) = this->tablica.at(i + 1);
	}
	this->tablica.pop_back();
}